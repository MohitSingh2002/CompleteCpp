#include<bits/stdc++.h>
#include "2_binary_search_tree_helper.h"
using namespace std;

int main() {

      BST bst;

      bst.insert(4);
      bst.insert(2);
      bst.insert(6);
      bst.insert(1);
      bst.insert(3);
      bst.insert(5);
      bst.insert(7);

      bst.print();

      cout << "Is 35 Present in the tree ? ";
      if(bst.isElementPresent(35)) cout << "YES" << endl;
      else cout << "NO" << endl;

      cout << "Minimum Element in the tree is : " << bst.minimum() << endl;

      cout << "Inorder : " << endl;
      bst.populateNextInorder();

      return 0;
}
