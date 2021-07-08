#include<iostream>
#include<vector>
#include <stdlib.h> 
using namespace std;

struct TreeNode{
  int data;
  TreeNode* left;
  TreeNode* right;
};

typedef TreeNode* Tree;

Tree newTree(int data){
  Tree tree = (Tree) malloc(sizeof(TreeNode));
  tree->data = data;
  tree->left = NULL;
  tree->right = NULL;
  return tree;
}

void dfsPreorder(Tree root){
  if(root == NULL) return;
  cout << root->data << endl;
  dfsPreorder(root->left);
  dfsPreorder(root->right);
}

void dfsInorder(Tree root){
  if(root == NULL) return;
  dfsInorder(root->left);
  cout << root->data << endl;
  dfsInorder(root->right);
}

void dfsPostorder(Tree root){
  if(root == NULL) return;
  dfsPostorder(root->left);
  dfsPostorder(root->right);
  cout << root->data << endl;
}

int main (){
    
    return 0;
}