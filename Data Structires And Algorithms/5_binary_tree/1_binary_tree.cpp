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
vector<int> preorderVector(BinaryTreeNode<int>*);
vector<int> preorderVectorLevelWise(BinaryTreeNode<int>*);
vector<int> reverseLevelOrder(BinaryTreeNode<int>*);
BinaryTreeNode<int>* mirrorTree(BinaryTreeNode<int>*);
void preorderIterative(BinaryTreeNode<int>*);
// void inorderIterative(BinaryTreeNode<int>*);
vector<int> leftView(BinaryTreeNode<int>*);
vector<int> rightView(BinaryTreeNode<int>*);
vector<int> topView(BinaryTreeNode<int>*);
vector<int> leftViewBorder(BinaryTreeNode<int>*);
vector<int> rightViewBorder(BinaryTreeNode<int>*);
vector<int> zigZagTraverse(BinaryTreeNode<int>*);
bool isHeightBalanced(BinaryTreeNode<int>*);
vector<int> printBoundary(BinaryTreeNode<int>*);
vector<int> inorderVector(BinaryTreeNode<int>*);
void toSumTree(BinaryTreeNode<int>*);

// TREE : 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 11 12 -1 -1 10 -1 -1 -1 -1 13 -1 -1 -1 -1
int main() {

      // BinaryTreeNode<int> *root = takeInput();
      BinaryTreeNode<int> *root = takeInputLevelWise();

      // printBinaryTree(root);
      printBinaryTreeLevelWise(root);

      // cout << "Total Number Of Nodes In The Tree is : " << numberOfNodes(root) << endl;

      // cout << "inorder traversal is : ";
      // inorder(root);
      // cout << endl;

      // cout << "preorder traversal is : ";
      // // preorder(root);
      // preorderIterative(root);
      // cout << endl;

      // cout << "Diameter of the tree is : " << diameter(root) << endl;

      // vector<int> v = preorderVector(root);

      // for(int i = 0; i < v.size(); i++) {
      //       cout << v[i] << " ";
      // }

      // vector<int> v = preorderVectorLevelWise(root);

      // for(int i = 0; i < v.size(); i++) {
      //       cout << v[i] << " ";
      // }

      // vector<int> v = reverseLevelOrder(root);

      // for(int i = 0; i < v.size(); i++) {
      //       cout << v[i] << " ";
      // }

      // BinaryTreeNode<int> *newRoot = mirrorTree(root);
      // printBinaryTreeLevelWise(newRoot);

      // cout << "Left View Of The Binary Tree is : " << endl;
      // vector<int> v1 = leftView(root);
      // for(int i = 0; i < v1.size(); i++) {
      //       cout << v1[i] << " ";
      // }
      // cout << endl;

      // cout << "Right View Of The Binary Tree is : " << endl;
      // vector<int> v2 = rightView(root);
      // for(int i = 0; i < v2.size(); i++) {
      //       cout << v2[i] << " ";
      // }
      // cout << endl;

      // cout << "Top View Of The Binary Tree is : " << endl;
      // vector<int> v3 = topView(root);
      // for(int i = 0; i < v3.size(); i++) {
      //       cout << v3[i] << " ";
      // }
      // cout << endl;

      // cout << "Left View Border Of The Binary Tree is : " << endl;
      // vector<int> v4 = leftViewBorder(root);
      // for(int i = 0; i < v4.size(); i++) {
      //       cout << v4[i] << " ";
      // }
      // cout << endl;

      // cout << "Right View Border Of The Binary Tree is : " << endl;
      // vector<int> v5 = rightViewBorder(root);
      // for(int i = 0; i < v5.size(); i++) {
      //       cout << v5[i] << " ";
      // }
      // cout << endl;

      // cout << "Zig Zag Traversel Of The Binary Tree is : " << endl;
      // vector<int> v6 = zigZagTraverse(root);
      // for(int i = 0; i < v6.size(); i++) {
      //       cout << v6[i] << " ";
      // }
      // cout << endl;

      // cout << "Is Tree Height Balanced : ";
      // if(isHeightBalanced(root)) {
      //       cout << "YES" << endl;
      // } else {
      //       cout << "NO" << endl;
      // }

      // cout << "Print Boundary Of The Binary Tree is : " << endl;
      // vector<int> v7 = printBoundary(root);
      // for(int i = 0; i < v7.size(); i++) {
      //       cout << v7[i] << " ";
      // }
      // cout << endl;

      // cout << "Inorder Vector Of The Binary Tree Is : " << endl;
      // vector<int> v8 = inorderVector(root);
      // for(int i = 0; i < v8.size(); i++) {
      //       cout << v8[i] << " ";
      // }
      // cout << endl;

      // cout << "Sum Tree Is : " << endl;
      // toSumTree(root);
      // printBinaryTreeLevelWise(root);

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

vector<int> preorderVector(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> vResult;
      vResult.push_back(root->data);
      vector<int> vResultLeft = preorderVector(root->left);
      vector<int> vResultRight = preorderVector(root->right);
      for(int i = 0; i < vResultLeft.size(); i++) {
            vResult.push_back(vResultLeft[i]);
      }
      for(int i = 0; i < vResultRight.size(); i++) {
            vResult.push_back(vResultRight[i]);
      }
      return vResult;
}

vector<int> preorderVectorLevelWise(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      result.push_back(root->data);
      queue<BinaryTreeNode<int>*> q;
      q.push(root);
      while(!q.empty()) {
            BinaryTreeNode<int> *front = q.front();
            q.pop();
            if(front->left != NULL) {
                  q.push(front->left);
                  result.push_back(front->left->data);
            }
            if(front->right != NULL) {
                  q.push(front->right);
                  result.push_back(front->right->data);
            }
      }
      return result;
}

vector<int> reverseLevelOrder(BinaryTreeNode<int> *root) {
      if (root == NULL) return vector<int>();
      vector<int> result;
      queue<BinaryTreeNode<int>*> q;
      q.push(root);
      stack<BinaryTreeNode<int>*> s;
      s.push(root);
      while(!q.empty()) {
            BinaryTreeNode<int> *front = q.front();
            q.pop();
            if(front->right != NULL) {
                  q.push(front->right);
                  s.push(front->right);
            }
            if(front->left != NULL) {
                  q.push(front->left);
                  s.push(front->left);
            }
      }
      while(!s.empty()) {
            result.push_back(s.top()->data);
            s.pop();
      }
      return result;
}

BinaryTreeNode<int>* mirrorTree(BinaryTreeNode<int> *root) {
      if(root == NULL) return NULL;
      BinaryTreeNode<int> *newRoot = new BinaryTreeNode<int>(root->data);
      newRoot->left = mirrorTree(root->right);
      newRoot->right = mirrorTree(root->left);
      return newRoot;
}

void preorderIterative(BinaryTreeNode<int> *root) {
      if(root == NULL) return;
      stack<BinaryTreeNode<int>*> s;
      s.push(root);
      while(!s.empty()) {
            BinaryTreeNode<int> *front = s.top();
            s.pop();
            cout << front->data << " ";
            if(front->right != NULL) {
                  s.push(front->right);
            }
            if(front->left != NULL) {
                  s.push(front->left);
            }
      }
}

// void inorderIterative(BinaryTreeNode<int>*);

vector<int> leftViewRecursive(BinaryTreeNode<int> *root, int level, int *max_level) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      if(*max_level < level) {
            result.push_back(root->data);
            *max_level = level;
      }
      vector<int> leftresult = leftViewRecursive(root->left, level + 1, max_level);
      vector<int> rightresult = leftViewRecursive(root->right, level + 1, max_level);
      for(int i = 0; i < leftresult.size(); i++) {
            result.push_back(leftresult[i]);
      }
      for(int i = 0; i < rightresult.size(); i++) {
            result.push_back(rightresult[i]);
      }
      return result;
}

vector<int> leftView(BinaryTreeNode<int> *root) {
      int max_level = 0;
      vector<int> result = leftViewRecursive(root, 1, &max_level);
      return result;
}

vector<int> rightViewRecursive(BinaryTreeNode<int> *root, int level, int *max_level) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      if(*max_level < level) {
            result.push_back(root->data);
            *max_level = level;
      }
      vector<int> rightResult = rightViewRecursive(root->right, level + 1, max_level);
      vector<int> leftResult = rightViewRecursive(root->left, level + 1, max_level);
      for(int i = 0; i < rightResult.size(); i++) {
            result.push_back(rightResult[i]);
      }
      for(int i = 0; i < leftResult.size(); i++) {
            result.push_back(leftResult[i]);
      }
      return result;
}

vector<int> rightView(BinaryTreeNode<int> *root) {
      int max_level = 0;
      return rightViewRecursive(root, 1, &max_level);
}

vector<int> topView(BinaryTreeNode<int> *root) {
      vector<int> leftView = leftViewBorder(root);
      vector<int> rightView = rightViewBorder(root);
      vector<int> result;
      for(int i = leftView.size()-1; i >= 0; i--) {
            result.push_back(leftView[i]);
      }
      result.pop_back();
      for(int i = 0; i < rightView.size(); i++) {
            result.push_back(rightView[i]);
      }
      return result;
}

vector<int> leftViewBorder(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      result.push_back(root->data);
      vector<int> newV = leftViewBorder(root->left);
      for(int i = 0; i < newV.size(); i++) {
            result.push_back(newV[i]);
      }
      return result;
}

vector<int> rightViewBorder(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      result.push_back(root->data);
      vector<int> newV = rightViewBorder(root->right);
      for(int i = 0; i < newV.size(); i++) {
            result.push_back(newV[i]);
      }
      return result;
}

vector<int> zigZagTraverse(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      stack<BinaryTreeNode<int>*> currentStack, nextLevelStack;
      bool zigzag = false;
      currentStack.push(root);
      vector<int> result;
      while(!currentStack.empty()) {
            BinaryTreeNode<int> *front = currentStack.top();
            currentStack.pop();
            result.push_back(front->data);
            if(zigzag) {
                  if(front->right != NULL) nextLevelStack.push(front->right);
                  if(front->left != NULL) nextLevelStack.push(front->left);
            } else {
                  if(front->left != NULL) nextLevelStack.push(front->left);
                  if(front->right != NULL) nextLevelStack.push(front->right);
            }
            if(currentStack.empty()) {
                  zigzag = !zigzag;
                  swap(currentStack, nextLevelStack);
            }
      }
      return result;
}

bool isHeightBalanced(BinaryTreeNode<int> *root) {
      if(root == NULL) return true;
      int leftHeight = height(root->left);
      int rightHeight = height(root->right);
      return (isHeightBalanced(root->left) && isHeightBalanced(root->right) && abs((leftHeight-rightHeight) <= 1));
}

vector<int> printBoundary(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      int max_level_left = 0;
      vector<int> leftView = leftViewRecursive(root, 1, &max_level_left);
      int max_level_right = 0;
      vector<int> rightView = rightViewRecursive(root, 1, &max_level_right);
      for(int i = 0; i < leftView.size(); i++) {
            result.push_back(leftView[i]);
      }
      for(int i = rightView.size() - 1; i >= 0; i--) {
            result.push_back(rightView[i]);
      }
      result.pop_back();
      return result;
}

vector<int> inorderVector(BinaryTreeNode<int> *root) {
      if(root == NULL) return vector<int>();
      vector<int> result;
      vector<int> l = inorderVector(root->left);
      for(int i = 0; i < l.size(); i++) result.push_back(l[i]);
      result.push_back(root->data);
      vector<int> r = inorderVector(root->right);
      for(int i = 0; i < r.size(); i++) result.push_back(r[i]);
      return result;
}

int inSum(BinaryTreeNode<int> *root) {
    if(root == NULL) return 0;
    int oldValue = root->data;
    root->data = inSum(root->left) + inSum(root->right);
    return oldValue + root->data;
}

void toSumTree(BinaryTreeNode<int> *root) {
    int answer = inSum(root);
}
