#include<iostream>
using namespace std;

/* Constraints: 
    Size of array will be N
    index of array will be  0 to N-1
    and 
    1 <= arr[i] <<= N

    ex. if N=6
    then element can be stored in array is 1,2,3,4,5,6
*/
int main()
{
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    
    int arr[n-1];

    for(int i=0; i<n-1; i++)
    {
        cout<<"Enter elements of array: ";
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(arr[j-1]==i)
            {
                break;
            }
            if(j==n-1)
            {
                cout<<i<<" is missing number..";
                return 0;
            }
        }
    }

    cout<<"All elements are present in the array..";
    return 0; 
}