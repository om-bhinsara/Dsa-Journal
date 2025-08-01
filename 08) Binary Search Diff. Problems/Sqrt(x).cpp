#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter num: "; 
    int x; 
    cin>>x; 
    int start=0, end=x, ans, mid;
    while(start<=end)
    {
        mid=start+(end-start)/2; 
        if(mid==x/mid)
        {
            ans=mid;
            break; 
        }
        else if(mid<x/mid)
        {
            ans=mid; 
            start=mid+1; 
        }
        else                         
        {
            end=mid-1; 
        }
    } 
    cout<<ans; 
    return 0; 
}



/*
INT OVERFLOW SOLUTION: 

To understand why your tutor used `mid == x / mid` instead of `mid * mid == x`, let's look at **integer overflow** and why this approach avoids it.

### Integer Overflow Issue
When you calculate `mid * mid`, the result might exceed the maximum value that can be stored in an `int` type. For example:
- `int` in C++ can hold values up to \( 2^{31} - 1 = 2,147,483,647 \).
- If `x` is very large (e.g., \( 2^{31} - 1 \)), `mid` values in the middle of the search could be   large enough that `mid * mid` exceeds the range of an `int`, leading to **undefined behavior**.

### Avoiding Overflow
Instead of multiplying `mid` by itself, the expression `x / mid` calculates the division of `x` by `mid`. Since division does not cause overflow when `x` is within the valid range of an `int` (which it is), this approach avoids the problem.

### The Condition `mid == x / mid`
- `x / mid` calculates the integer division result of `x` divided by `mid`.
- If `mid * mid == x`, then `x / mid` will equal `mid`.
- Hence, checking `mid == x / mid` is equivalent to checking if `mid * mid == x`, but it avoids the risk of integer overflow.

### Example
Consider \( x = 2,147,483,647 \) and `mid = 46,341`:
1. `mid * mid = 46,341 * 46,341 = 2,147,395,481`, which is fine in this case, but close to the overflow threshold.
2. If `mid` were slightly larger, say \( 46,342 \), then `mid * mid` would exceed the limit, causing overflow.

Using `x / mid`:
- For \( x = 2,147,483,647 \) and \( mid = 46,341 \),
  - `x / mid = 2,147,483,647 / 46,341 = 46,341`.
  - Since `mid == x / mid`, it confirms \( mid^2 = x \).

This division-based approach ensures safety against overflow and maintains correctness.
*/