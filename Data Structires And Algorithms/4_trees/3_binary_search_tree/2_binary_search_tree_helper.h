#include<bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
      public:
            int data;
            BinaryTreeNode *left;
            BinaryTreeNode *right;
            BinaryTreeNode(int data) {
                  this->data = data;
                  left = NULL;
                  right = NULL;
            }
};

class BST {
      BinaryTreeNode *root;

      BinaryTreeNode* insert(BinaryTreeNode *node, int value) {
            if(node == NULL) {
                  BinaryTreeNode *newNode = new BinaryTreeNode(value);
                  return newNode;
            }
            if(node->data >= value) {
                  node->left = insert(node->left, value);
            } else {
                  node->right = insert(node->right, value);
            }
            return node;
      }

      bool isElementPresent(BinaryTreeNode *node, int value) {
            if(node == NULL) return false;
            if(node->data == value) return true;
            else if(node->data >= value) return isElementPresent(node->left, value);
            else return isElementPresent(node->right, value);
      }

      public:
            BST() {
                  root = NULL;
            }
            ~BST() {
                  delete root;
            }
            void insert(int);
            void print();
            bool isElementPresent(int);

};

void BST::insert(int value) {
      root = insert(root, value);
}

void BST::print() {
      BinaryTreeNode *temp = root;
      if(temp == NULL) return;
      queue<BinaryTreeNode*> q;
      q.push(temp);
      while(!q.empty()) {
            BinaryTreeNode *front = q.front();
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

bool BST::isElementPresent(int value) {
      return isElementPresent(root, value);
}
