#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
};
Node *root, *NIL;

void insert(int k) {
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z=(Node*)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x != NIL) {
    y=x;
    if(z->key < x->key) {
      x=x->left;
    }else {
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL) {
    root=z;
  }else {
    if(z->key < y->key) {
      y->left=z;
    }else {
      y->right=z;
    }
  }
}

bool find(int u) {
  Node *s=root;
  while(s != NIL) {
    if(s->key == u) {return true;}
    if(u < s->key) {
      s = s->left;
    }else {
      s = s->right;
    }
  }
  return false;
}

void inorder(Node *u) {
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u) {
  if(u==NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() {
  int n,i,x;
  string com;
  cin >> n;
  for(i=0;i<n;i++) {
    cin >> com;
    if(com=="insert") {
      cin >> x;
      insert(x);
    } else if(com=="print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    } else if(com=="find") {
      cin >> x;
      if(find(x)) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  return 0;
}
