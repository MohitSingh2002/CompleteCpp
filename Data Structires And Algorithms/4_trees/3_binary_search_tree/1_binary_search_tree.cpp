#include<bits/stdc++.h>
#include "2_binary_search_tree_helper.h"
using namespace std;

int main() {

      BST bst;

      bst.insert(30);
      bst.insert(20);
      bst.insert(10);
      bst.insert(40);
      bst.insert(60);
      bst.insert(35);

      bst.print();

      cout << "Is 35 Present in the tree ? ";
      if(bst.isElementPresent(35)) cout << "YES" << endl;
      else cout << "NO" << endl;

      return 0;
}
