#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="abcdefghijhklmnopqrstuvwxyzrdgjvjgndnglbsekvgkuaebncfhua";

    vector <int> alphabets(26,0);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z') // for small case
        {
            char a=s[i];
            int index=a-'a';
            alphabets[index]++;
        }
        else // for upper case
        {
            char a=s[i];
            int index=a-'A';
            alphabets[index]++;
        }
    }

    for(int i=0; i<alphabets.size(); i++)
    {
        if(alphabets[i]==0)
        {
            cout<<"Any alphabet is missing!";
            return 0;
        }
    }
    cout<<"Every alphabet is present";
    return 0; 
}