#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void find_max_distance(vector<int> v) 
{
    int final_ans = INT_MIN;
    for (int i = 0; i < v.size(); i++) 
    {
        final_ans = max(final_ans, v[i]);
    }
    cout << "Maximum minimum distance: " << final_ans << endl;
}

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

    int last_position, ans, count, k = 1;

    while (true) 
    {
        last_position = arr[0];
        ans = INT_MAX;
        count = 1;

        for (int j = 1; j < arr.size(); j++) 
        {
            if (arr[j] - last_position >= k) 
            {
                ans = min(ans, arr[j] - last_position);
                last_position = arr[j];
                count++;

                if (count == cow) break;
            }
        }

        if (count < cow) break; // If we can't place all cows, stop

        v.push_back(ans);
        k++;
    }

    find_max_distance(v);

    return 0;
}
