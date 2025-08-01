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

    int count=0, k=0, ans=0;
    
        for(int i=1; i<=*max_element(piles.begin(), piles.end()); i++)
        {
            count=0;
            for(k=0; k<piles.size(); k++)
            {
                count+=ceil(double(piles[k])/i);
            } 
            if(count<=hr) 
            {
                ans=i; 
                break; 
            }
        }
    
    cout<<ans;
    return 0; 
}