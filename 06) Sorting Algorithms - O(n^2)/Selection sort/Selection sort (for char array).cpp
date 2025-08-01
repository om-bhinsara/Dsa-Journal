#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    char arr[100]; 
    cout<<"Enter size of array: ";
    int n; 
    cin>>n; 

    for(int i=0; i<n; i++)
    {
        cout<<"Enter character ["<<i+1<<"]: ";
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        int index=i; 
        for(int j=i+1; j<n; j++)
        {
            if(arr[index]>arr[j])
            {
                index=j; 
            }
        }
        swap(arr[i],arr[index]); 
    }
    cout<<endl; 
    cout<<"Sorted character array: "; 
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" "; 
    }
    return 0; 
}

/* a b c d e f g h i j k l m n o p q r s t u v w x y z */