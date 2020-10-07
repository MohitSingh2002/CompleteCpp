#include<bits/stdc++.h>
#include<stack>
using namespace std;

void printStack(stack<int> stackList) {
    while(!stackList.empty()) {
        cout << stackList.top() << " ";
        stackList.pop();
    }
    cout << endl;
}

int main() {

    stack<int> stack1;

    for(int i=1;i<=5;i++) {
        stack1.push(i);
    }
    printStack(stack1);

    stack1.pop();
    cout << "The Stack after poping is : " << endl;
    printStack(stack1);

    cout << "The Top most element of the stack is : " << stack1.top() << endl;

    cout << "The Size of the stack is : " << stack1.size() << endl;

    cout << "Is Stack is empty ? ";
    if(stack1.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
