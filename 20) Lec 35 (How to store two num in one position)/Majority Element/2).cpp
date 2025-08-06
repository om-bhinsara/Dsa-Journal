#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    vector <int> arr={4,4,2,4,1,4,2,2,1,4,4};
    int n=11;

    int candidate=arr[0], count=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(candidate==arr[i])
        {
            count+=1;
        }
        else
        {
            count-=1;
            if(count==0)
            {
                candidate=arr[i];
                count+=1;
            }
        }
    }

    count=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==candidate)
        count++; 
    }

    if(count>n/2)
    cout<<candidate<<" is majority element";
    else 
    cout<<"No majority element";
    
    return 0;
}