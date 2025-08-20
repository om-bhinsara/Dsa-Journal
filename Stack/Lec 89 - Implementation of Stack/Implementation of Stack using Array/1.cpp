#include<iostream>
using namespace std; 

class Stack
{
    int *arr;
    int size;
    int top; 
    bool flag=0;
   
    public:
    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1; 
    }

    // push
    void push(int data)
    {
        if(top==size || top>=size)
        {
            cout<<"Stack Overflow";
            return;
        }
        else
        {
        top+=1; 
        arr[top]=data;
        cout<<arr[top]<<" is pushed in the stack\n";
        }
    }

    // pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow";
            flag=1; 
            return;
        }
        else
        {
            cout<<arr[top]<<" is popped from the stack\n";
            top-=1;
        }
    }

    // peep - shows top element 
    void peep()
    {
        if(top==-1)
        {
            cout<<"There's no elements in Stack\n";
            flag=1;
            return;
        }
        else
        {
            cout<<arr[top]<<" is top element "<<endl;
        }
    }

    // isEmpty
    bool isEmpty()
    {
        if(flag==0 && top==-1)
        return true; 
        else
        return false; 
    }

    // isSize
    int isSize()
    {
        return top+1;
    }

};
int main()
{
    Stack s(5);

    s.push(-1);
    s.push(2);
    s.peep();
    s.pop();
    
    cout<<s.isEmpty()<<endl;
    cout<<s.isSize()<<endl;
    
    return 0;
}