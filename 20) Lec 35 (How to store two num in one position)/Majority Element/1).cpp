#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
// moore voting algorithm
int main()
{
    vector <int> arr={4,4,2,4,1,4,2,2,1,4,4};
    int n=11;

    for(int i=0; i<arr.size(); i++)
    {
        arr[i]--;
    }

    for(int i=0; i<arr.size(); i++)
    {
        arr[arr[i]%n]+=n;
    }
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int ans=-1;
    int nby2=n/2;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]/n > nby2)
        {
            cout<<i+1<<" Comes more than n/2 times";
            break;
        }
    }
    return 0;
}