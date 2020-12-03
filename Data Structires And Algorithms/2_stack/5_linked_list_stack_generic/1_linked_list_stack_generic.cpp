#include<bits/stdc++.h>
#include "2_linked_list_stack_generic_helper.h"
using namespace std;

int main() {

    LinkedListStackGeneric<char> stack;

    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.push('e');
    stack.push('e');
    stack.push('d');
    stack.push('c');
    stack.push('b');
    stack.push('a');
    
    cout << "The elements of the Stack are : " << endl;
    stack.printStack();

    cout << "The element which will remove first is : " << stack.pop() << endl;

    cout << "The top most element of the stack after the pop operation is : " << stack.top() << endl;
    
    cout << "The size of the stack is : " << stack.size() << endl;

    cout << "Is Stack is empty ? " << stack.isEmpty() << endl; 

    return 0;
    
}
