#include<iostream>
using namespace std; 
#include<string>

int main()
{   
    string IP, ans; 

    cout<<"Enter IP Address: "; 
    cin>>IP;

    for(int index=0; IP[index]!='\0'; index++)
    {
        if(IP[index]=='.')
        {
            ans.push_back('[');
            ans.push_back('.');
            ans.push_back(']');
        }
        else
        {
            ans.push_back(IP[index]); 
        }
    }
    cout<<ans; 

    return 0;
}