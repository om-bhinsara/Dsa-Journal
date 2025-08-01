#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"Enter size of the array: "; 
    cin>>size; 

    int a[200];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element a["<<i+1<<"]: "; 
        cin>>a[i]; 
    }
    
    int ans=INT_MAX; 
    for(int i=0; i<5; i++)
    {
        if(ans>a[i])
        {
            ans=a[i]; 
        }
    }
    cout<<"Min element is "<<ans<<endl;

    ans=INT_MIN; 
    
    for(int i=0; i<5; i++)
    {
        if(ans<a[i])
        {
            ans=a[i]; 
        }
    }
    cout<<"Max element is "<<ans;
    return 0; 
}