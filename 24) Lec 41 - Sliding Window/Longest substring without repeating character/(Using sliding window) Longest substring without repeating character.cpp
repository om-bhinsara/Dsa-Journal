#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s="ababc";
    vector <bool> count(256,0);

    int first=0, second=0, len=0; 
    
    while(second<s.size()) // char which are present marked by 1
    {
        while(count[s[second]]) // if we're not seeing char first time, means it
                                // is present before in window
        {
            count[s[first]]=0;  // then we remove that (double occurance) char and make first go ahead
            first++;
        }
        count[s[second]]=1; // if we're seeing char first time
        len=max(len, second-first+1); // len calculation 
        second++;  // make window bigger from right
    }

    cout<<"Substring with unique char length is "<<len;
    return 0;
}