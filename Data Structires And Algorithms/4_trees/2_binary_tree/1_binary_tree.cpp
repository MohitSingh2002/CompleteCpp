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
int numberOfLeafNodes(BinaryTreeNode<int>*);
void printAtLevelK(BinaryTreeNode<int>*, int);
int numberOfNodesAtLevelK(BinaryTreeNode<int>*, int);
bool checkAllLeafNodesAtSameLevel(BinaryTreeNode<int>*);
// int allNodesAtLongestPath(BinaryTreeNode<int>*);
int largestSubTreeSum(BinaryTreeNode<int>*);
vector<int> printPathFromRootToParticularRoot(BinaryTreeNode<int>*, int);
int lowestCommonAncestor(BinaryTreeNode<int>*, int, int);

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

      // cout << "Number of leaf nodes in the tree are : " << numberOfLeafNodes(root) << endl;

      // cout << "Height of the tree is : " << height(root) << endl;

      // printAtLevelK(root, height(root)-1);

      // cout << "Number of nodes at last level is : " << numberOfNodesAtLevelK(root, height(root)-1) << endl;

      // cout << "Is all leaf nodes are at same level : ";
      // if(checkAllLeafNodesAtSameLevel(root)) cout << "YES" << endl;
      // else cout << "NO" << endl;

      // int a = allNodesAtLongestPath(root);
      
      // cout << "Largest sub tree sum is : " << largestSubTreeSum(root) << endl;
      
      // cout << "Mirror Tree Is : " << endl;
      // BinaryTreeNode<int> *rootMirrorTree = mirrorTree(root);
      // printBinaryTreeLevelWise(rootMirrorTree);

      // lowestCommonAncestor(root, 9, 11);

      // cout << "Path from root to certain node is : " << endl;
      // vector<int> v9 = printPathFromRootToParticularRoot(root, 100);
      // for(int i = 0; i < v9.size(); i++) {
      //       cout << v9[i] << " ";
      // }
      // cout << endl;

      // cout << "Lowest Common Ancester for 70 and 100 is : ";
      // int lca = lowestCommonAncestor(root, 70, 100);
      // if(lca != -1) cout << lca << endl;
      // else cout << "No Common Ancestor" << endl;

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

int numberOfLeafNodes(BinaryTreeNode<int> *root) {
      if(root == NULL) return 0;
      if((root->left == NULL) && (root->right == NULL)) return 1;
      int answer = numberOfLeafNodes(root->left) + numberOfLeafNodes(root->right);
      return answer;
}

void printAtLevelK(BinaryTreeNode<int> *root, int k) {
      if(root == NULL) return;
      if(k == 0) {
            cout << root->data << endl;
      }
      printAtLevelK(root->left, k-1);
      printAtLevelK(root->right, k-1);
}

int numberOfNodesAtLevelK(BinaryTreeNode<int> *root, int k) {
      if(root == NULL) return 0;
      if(k == 0) {
            return 1;
      }
      int answer = numberOfNodesAtLevelK(root->left, k-1) + numberOfNodesAtLevelK(root->right, k-1);
      return answer;
}

bool checkAllLeafNodesAtSameLevel(BinaryTreeNode<int> *root) {
      return numberOfLeafNodes(root) == numberOfNodesAtLevelK(root, height(root) - 1);
}

// int allNodesAtLongestPath(BinaryTreeNode<int> *root) {
//       if(root == NULL) {
//             return 0;
//       }
//       cout << root->data << " ";
//       return 1 + max(allNodesAtLongestPath(root->left), allNodesAtLongestPath(root->right));
// }

int findLargestSubTreeSum(BinaryTreeNode<int> *root, int & sum) {
      if(root == NULL) return 0;
      int currentSum = root->data + findLargestSubTreeSum(root->left, sum) + findLargestSubTreeSum(root->right, sum);
      sum = max(sum, currentSum);
      return currentSum;
}

int largestSubTreeSum(BinaryTreeNode<int> *root) {
      int sum = INT_MIN;
      findLargestSubTreeSum(root, sum);
      return sum;
}

bool hasPath(BinaryTreeNode<int> *root, vector<int> & path, int node) {
      if(root == NULL) return false;
      path.push_back(root->data);
      if(root->data == node) return true;
      if(hasPath(root->left, path, node) || hasPath(root->right, path, node)) return true;
      path.pop_back();
      return false;
}

vector<int> printPathFromRootToParticularRoot(BinaryTreeNode<int> *root, int node) {
      if(root == NULL) return vector<int>();
      vector<int> v;
      if(hasPath(root, v, node)) return v;
      else return vector<int>();
}

int lowestCommonAncestor(BinaryTreeNode<int> *root, int a, int b) {

      if(root == NULL) return -1;

      vector<int> first;
      vector<int> second;

      if(!hasPath(root, first, a)|| !hasPath(root, second, b)) return -1;

      bool isFound = false;

      int i;
      for(i = 0; i < first.size() && i < second.size(); i++) {
            if(first[i] != second[i]) {
                  isFound = true;
                  break;
            }
      }

      return first[i - 1];

      // if(root == NULL) return;
      // queue<BinaryTreeNode<int>*> q;
      // q.push(root);
      // vector<int> v;
      // v.push_back(root->data);
      // while(!q.empty()) {
      //       BinaryTreeNode<int> *front = q.front();
      //       q.pop();
      //       if(front->data == a) break;
      //       if(front->left != NULL) {
      //             q.push(front->left);
      //             v.push_back(front->left->data);
      //       }
      //       if(front->right != NULL) {
      //             q.push(front->right);
      //             v.push_back(front->right->data);
      //       }
      // }
      // for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
}
