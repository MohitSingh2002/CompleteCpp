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

      BinaryTreeNode* deleteData(BinaryTreeNode *node, int value) {
            if(node == NULL) return NULL;
            if(node->data > value) {
                  node->left = deleteData(node->left, value);
            } else if(node->data < value) {
                  node->right = deleteData(node->right, value);
            } else {
                  if((node->left == NULL) || (node->right == NULL)) {
                        delete node;
                        return NULL;
                  } else if(node->left == NULL) {
                        BinaryTreeNode *temp = node->right;
                        node->right = NULL;
                        delete node;
                        return temp;
                  } else if(node->right == NULL) {
                        BinaryTreeNode *temp = node->left;
                        node->left = NULL;
                        delete node;
                        return temp;
                  } else {
                        BinaryTreeNode *minNode = node->right;
                        while(minNode->left != NULL) {
                              minNode = minNode->left;
                        }
                        int rightMin = minNode->data;
                        node->data = rightMin;
                        node->right = deleteData(minNode->right, value);
                        return node;
                  }
            }
      }

      vector<int> populateNextInorder(BinaryTreeNode *node) {
            if(node == NULL) return vector<int>();
            vector<int> vResult;
            vector<int> vLeft = populateNextInorder(node->left);
            for(int i=0;i<vLeft.size();i++) vResult.push_back(vLeft[i]);
            vResult.push_back(node->data);
            vector<int> vRight = populateNextInorder(node->right);
            for(int i=0;i<vRight.size();i++) vResult.push_back(vRight[i]);
            return vResult;
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
            void deleteData(int);
            int minimum();
            void populateNextInorder();

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

void BST::deleteData(int value) {
      root = deleteData(root, value);
}

int BST::minimum() {
      if(root == NULL) return -1;
      if(root->left == NULL) return root->data;
      BinaryTreeNode *temp = root->left;
      while(temp->left != NULL) temp = temp->left;
      return temp->data;
}

void BST::populateNextInorder() {
      vector<int> v = populateNextInorder(root);
      for(int i = 0; i < v.size(); i++) {
            if(i != v.size() - 1) cout << v[i] << "->" << v[i+1] << " ";
            else cout << v[i] << "->-1" << " ";
      }
}
