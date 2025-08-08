#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> ans(1,1);
    
    int num;
    cout<<"Enter num: ";
    cin>>num;

    while(num>1)
    {
        int carry=0, size=ans.size();

        for(int i=0; i<size; i++)
        {
            int val=ans[i]*num+carry;
            ans[i]=val%10; 
            carry=val/10;
        }
        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        num--;
    }

    for(int i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i];
    }
    return 0;
}