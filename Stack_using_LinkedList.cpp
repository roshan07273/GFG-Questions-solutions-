void MyStack ::push(int x) 
{
    // Your Code
    struct StackNode* newNode = new StackNode(x);
    newNode->next = top;
    top = newNode;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top == NULL) return -1;
    struct StackNode* temp = top;
    int val = top->data;
    top = top->next;
    free(temp);
    return val;
    
}
