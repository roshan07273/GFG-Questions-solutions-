void MyQueue:: push(int x)
{
        // Your Code
        struct QueueNode* newNode = new QueueNode(x);
        if(front == NULL && rear == NULL){
        front = rear = newNode;
        return;
        }
        rear->next = newNode;
        rear = newNode;
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code  
        if(front == NULL) return -1;
        if(front == rear){
            int val = front->data;
            front = rear = NULL;
            return val;
        }
        else{
            struct QueueNode* temp = front ; 
            int val = front->data;
            front = front->next;
            free(temp);
            return val;
        }
}
