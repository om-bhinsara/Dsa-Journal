#include<iostream>
#include<vector> 
#include<cmath>
#include<algorithm>
using namespace std; 

int main()
{
    cout<<"Enter piles length: "; 
    int n; 
    cin>>n; 

    vector<int> piles(n);

    cout<<"Enter piles size: "; 
    for(int i=0; i<n; i++)
    {
        cin>>piles[i];
    }

    int hr; 
    cout<<"Enter hr: "; 
    cin>>hr;

    long long sum=0;
    int start=0, end=0, mid, total_time=0, ans=0; 

    for(int i=0; i<piles.size(); i++)
    {
        sum=sum+piles[i];
    }
    end=*max_element(piles.begin(), piles.end());
    start=sum/hr;

    if(!start)
    {
        start=1;
    }
    while(start<=end)
    {
        mid=start+(end-start)/2; 
        total_time=0;
        for(int i=0; i<piles.size(); i++)
        {
            total_time=total_time+piles[i]/mid;
            if(piles[i]%mid)
            {
                total_time++;
            }
        }
        if(total_time>hr)
        {
            start=mid+1; // Speed too slow
        }
        else
        {
            ans=mid;  // Speed is sufficient
            end=mid-1; 
        }
    }
    cout<<ans;
    return 0; 
}