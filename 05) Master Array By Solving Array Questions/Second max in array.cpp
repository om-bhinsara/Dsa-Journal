#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    int arr[6]={1,2,1,53,2,46}; 

    int ans=INT_MIN; 
    for(int i=0; i<6; i++)
    {
        if(ans<arr[i])
        {
            ans=arr[i];
        }
    }   
// int arr[6]={1,2,1,53,2,46}; 
    int result=INT_MIN; 
    for(int i=0; i<6; i++)
    {
        if(arr[i]!=ans)
        {
            result=max(result,arr[i]); 
        }
    }
    cout<<result; 
    return 0; 
}