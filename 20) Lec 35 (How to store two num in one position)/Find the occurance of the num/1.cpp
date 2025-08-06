#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// this is most optimized approach

int main()
{
    vector <int> arr={3,2,5,3,1,2,3,7};
    int n=8; // size of the array
    // output should be: 1 2 3 0 1 0 1 0 

    for(int i=0; i<arr.size(); i++) // decrease every value by 1
    arr[i]--; 

    for(int i=0; i<arr.size(); i++)  // add n
    {
        arr[arr[i]%n]+=n; 
    }

    for(int i=0; i<arr.size(); i++) // print occurance 
    {
        cout<<arr[i]/n<<" ";
    }

    return 0; 
}