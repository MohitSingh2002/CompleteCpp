#include<bits/stdc++.h>
#include "2_binary_tree_helper.h"
using namespace std;

void printBinaryTree(BinaryTreeNode<int>*);
BinaryTreeNode<int>* takeInput();
BinaryTreeNode<int>* takeInputLevelWise();
void printBinaryTreeLevelWise(BinaryTreeNode<int>*);
int numberOfNodes(BinaryTreeNode<int>*);
void inorder(BinaryTreeNode<int>*);
void preorder(BinaryTreeNode<int>*);
int height(BinaryTreeNode<int>*);
int diameter(BinaryTreeNode<int>*);

// TREE : 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 11 12 -1 -1 10 -1 -1 -1 -1 13 -1 -1 -1 -1
int main() {

      // BinaryTreeNode<int> *root = takeInput();
      BinaryTreeNode<int> *root = takeInputLevelWise();

      // printBinaryTree(root);
      printBinaryTreeLevelWise(root);

      cout << "Total Number Of Nodes In The Tree is : " << numberOfNodes(root) << endl;

      cout << "inorder traversal is : ";
      inorder(root);
      cout << endl;

      cout << "preorder traversal is : ";
      preorder(root);
      cout << endl;

      cout << "Diameter of the tree is : " << diameter(root) << endl;

      delete root;
      
      return 0;
}

void printBinaryTree(BinaryTreeNode<int> *root) {

      if(root == NULL) {
            return;
      }

      cout << root->data << ": ";
      if(root->left != NULL) {
            cout << "L" << root->left->data << ", ";
      }
      if(root->right != NULL) {
            cout << "R" << root->right->data;
      }
      cout << endl;
      printBinaryTree(root->left);
      printBinaryTree(root->right);

}

BinaryTreeNode<int>* takeInput() {

      int rootData;
      cout << "Enter Data : ";
      cin >> rootData;

      if(rootData == -1) {
            return NULL;
      }

      BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
      BinaryTreeNode<int> *leftChild = takeInput();
      BinaryTreeNode<int> *rightChild = takeInput();

      root->left = leftChild;
      root->right = rightChild;

      return root;

}

BinaryTreeNode<int>* takeInputLevelWise() {
      int rootdata;
      cout << "Enter Root Data : ";
      cin >> rootdata;
      if(rootdata == -1) {
            return NULL;
      }
      BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
      queue<BinaryTreeNode<int>*> q;
      q.push(root);
      while(!q.empty()) {
            BinaryTreeNode<int> *front = q.front();
            q.pop();
            int leftChildData;
            cout << "Enter left child data of " << front->data << " : ";
            cin >> leftChildData;
            if(leftChildData != -1) {
                  BinaryTreeNode<int> *leftChildNode = new BinaryTreeNode<int>(leftChildData);
                  front->left = leftChildNode;
                  q.push(leftChildNode);
            }
            int rightChildData;
            cout << "Enter right child data of " << front->data << " : ";
            cin >> rightChildData;
            if(rightChildData != -1) {
                  BinaryTreeNode<int> *rightChildNode = new BinaryTreeNode<int>(rightChildData);
                  front->right = rightChildNode;
                  q.push(rightChildNode);
            }
      }
      return root;
}

void printBinaryTreeLevelWise(BinaryTreeNode<int> *root) {
      if(root == NULL) {
            return;
      }
      queue<BinaryTreeNode<int>*> q;
      q.push(root);
      while(!q.empty()) {
            BinaryTreeNode<int> *front = q.front();
            q.pop();
            cout << front->data << ": ";
            if(front->left != NULL) {
                  cout << "L" << front->left->data << ", ";
                  q.push(front->left);
            }
            if(front->right != NULL) {
                  cout << "R" << front->right->data;
                  q.push(front->right);
            }
            cout << endl;
      }
}

int numberOfNodes(BinaryTreeNode<int> *root) {
      if(root == NULL) return 0;
      return 1 + numberOfNodes(root->left) + numberOfNodes(root->right);
}

void inorder(BinaryTreeNode<int> *root) {
      if(root == NULL) return;
      inorder(root->left);
      cout << root->data << " ";
      inorder(root->right);
}

void preorder(BinaryTreeNode<int> *root) {
      if(root == NULL) return;
      cout << root->data << " ";
      preorder(root->left);
      preorder(root->right);
}

int height(BinaryTreeNode<int> *root) {
      if(root == NULL) return 0;
      return 1 + max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int> *root) {
      if(root == NULL) return 0;
      int option1 = height(root->left) + height(root->right);
      int option2 = diameter(root->left);
      int option3 = diameter(root->right);
      return max(option1, max(option2, option3));
}
