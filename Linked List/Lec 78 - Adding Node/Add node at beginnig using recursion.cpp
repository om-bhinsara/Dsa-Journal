#include<iostream>
using namespace std;
// om method
class NODE
{
    public: 
    int data; 
    NODE *next; 
    NODE(int val, int index, NODE *address)
    {
        data=val;
        if(index==0)
        next=NULL;
        else
        next=address; 
    }
};

NODE* createlist(int arr[], int index, int size, NODE *(&Head), NODE *(address))
{
  if(index==size)
  {
      return address;
  }
   NODE *temp;
  temp=new NODE(arr[index], index, address);
  return createlist(arr, index+1, size, Head, temp); 
}
int main()
{
    int arr[]={2,4,6,8};
    
    NODE *Head; 
    Head=NULL;
      

    NODE *address;
    address=NULL;
    Head=createlist(arr, 0, 4, Head, address);
    NODE *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    return 0; 
} 