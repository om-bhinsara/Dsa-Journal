#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    vector <int> lower(26, 0);
    vector <int> upper(26, 0);
    string s="aabbcbadad";

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            int item=s[i]-'A';
            upper[item]++;
        }
        else
        {
            int item=s[i]-'a';
            lower[item]++;
        }
    }

    // for(int i=0; i<26; i++)
    // {
    //     cout<<upper[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<26; i++)
    // {
    //     cout<<lower[i]<<" ";
    // }

    int count=0;
    bool b=false;
    for(int i=0; i<26; i++)
    {
        if(lower[i]!=0)
        {
            if(lower[i]%2!=0)
            {
                b=true;
                count+=lower[i]-1; 
            }
            else
            count+=lower[i];
        }
        if(upper[i]!=0)
        {
            if(upper[i]!=0)
            {
                if(upper[i]%2!=0)
                {
                    b=true;
                    count+=upper[i]-1;
                }
                else
                count+=upper[i];
            }
        }
    }


        if(b==true)
        cout<<"Longest palidrome size of the string is "<<count+1;
        else
        cout<<"Longest palidrome size of the string is "<<count;

    return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
