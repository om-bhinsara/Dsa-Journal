#include<iostream>
#include<math.h>
using namespace std; 

/* SELECTION SORT */
int main()
{
    int index, i, j; 
    int arr[2000], n; 
    
    cout<<"Enter size of array: "; 
    cin>>n; 

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element a["<<i+1<<"]: ";
        cin>>arr[i]; 
    }

    // Algoritham
    for(i=0; i<n-1; i++)         /* Total no. of rounds */
    {
        index=i;                 /* We assumed that smallest element is present on index 0 */
        for(j=i+1; j<n; j++)
        {
            if(arr[index]>arr[j])
            {
                index=j; 
            }
        }
        swap(arr[i], arr[index]);
    }

    cout<<endl; 
    cout<<"Sorted array: ";
    for(int k=0; k<n; k++)
    {
        cout<<arr[k]<<" "; 
    }
    return 0; 
}

/* TIME COMPLEXITY: 
    Worst case: O(n^2) Ex: Descending order 
    Best case: Omega(n^2) Ex: Array already sorted hoy, Still we have to check for every index 
    Average case: Theta(n^2) 
    
    SPACE COMPLEXITY:
     Auxillary space: O(1)
     Total space complexity: O(n)

*/