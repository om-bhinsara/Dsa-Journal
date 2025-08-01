#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cout << "Enter array size: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // Sort array for proper placement of cows

    vector<int> v;
    int cow;
    cout << "Enter cow number: ";
    cin >> cow;

    int start=1, end=arr[arr.size()-1]-arr[0]; 
    int ans, position, count;

    while(start<=end)
    {
        int mid=start+(end-start)/2; 
        position=arr[0], count=1; 
        for(int i=1; i<arr.size(); i++)
        { 
            if(mid+position<=arr[i])
            {
                position=arr[i];
                count++; 
            }
        }
        if(count<cow)
        {
            end=mid-1; 
        }
        else
        {
            ans=mid; 
            start=mid+1; 
        }
    }
    cout<<ans; 
    return 0;
}