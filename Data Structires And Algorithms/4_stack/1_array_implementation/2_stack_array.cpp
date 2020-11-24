#include<bits/stdc++.h>
#include "1_stack_array_helper.h"
using namespace std;

int main() {

    StackArray stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    
    cout << "The elements of the Stack are : " << endl;
    stack.printStack();

    cout << "The element which will remove first is : " << stack.pop() << endl;

    cout << "The top most element of the stack after the pop operation is : " << stack.top() << endl;
    
    cout << "The size of the stack is : " << stack.size() << endl;

    cout << "Is Stack is empty ? " << stack.isEmpty() << endl; 

    return 0;
    
}
