#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    cout<<"Enter array size : ";
    int n; 
    cin>>n; 

    vector <int> arr(n);
    vector <int> Left_max_height(n);
    vector <int> Right_max_height(n);
    vector <int> ans(n);
    if(n<=0)// To handle edge cases, it prevents errors Ex. segmentationfalult
    {
        cout<<"Enter valid size for the array!";
        return 0;
    }

    cout<<"Enter array element: "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    /* The code snippet you provided is calculating the maximum height of the buildings to the left of
    each building in the input array. */
    Left_max_height[0]=0; 
    for(int i=1; i<n; i++)
    {
        Left_max_height[i]=max(arr[i-1], Left_max_height[i-1]); 
    }
    
    /* The code snippet you provided is calculating the maximum height of the buildings to the right of
    each building in the input array. */
    Right_max_height[n-1]=0; 
    for(int i=n-2; i>=0; i--)
    {
        Right_max_height[i]=max(arr[i+1], Right_max_height[i+1]); 
    }
    
    /* This part of the code is calculating the amount of water that can be stored on top of each
    building in the input array. Here's a breakdown of what's happening inside the for loop: */
    for(int i=0; i<n-1; i++)
    {
        int ans1=min(Right_max_height[i],Left_max_height[i]);
        if(ans1-arr[i]>0)
        {
            ans[i]=ans1-arr[i];
        }
        else
        {
            ans[i]=0;
        }
    }

    /* The code snippet you provided is calculating the total amount of water that can be stored on top of all the buildings in the input array. */
    int final_ans=0;
    for(int i=0; i<n; i++)
    {
        final_ans+=ans[i];
    }
    cout<<final_ans<<" unit of water can stored";
    return 0;
}