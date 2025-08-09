#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    string s="aaab";

    int first=0, second=0, len=s.size(), diff=0; 
    vector <int> count(256,0); // to store count of char

    for(int i=0; i<s.size(); i++)
    {
        if(count[s[i]]==0)
        diff+=1;            // to count unique char in string 
        
        count[s[i]]++;
    }

    for(int i=0; i<count.size(); i++)
    {
        count[i]=0; 
    }

    while(second<s.size())
    {
        while(diff!=0 && second<s.size()) // when all char are not present
        {
            if(count[s[second]]==0) // if we're seeing char for first time
            diff=diff-1;

            count[s[second]]++; // make window bigger on right side
            second++;
        }

        while(diff==0) // when all the unique chars are present in window
        {
            len=min(len, second-first); // len calculation 
            count[s[first]]--;          // decrease count as we go ahead
            if(count[s[first]]==0)      // if any char is not present in window
            {
                diff=diff+1;            // then increase diff by 1
            }
            first++;
        }
    }
    cout<<"Smallest distinct window with all chars "<<len;
    return 0;
}