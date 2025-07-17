#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long x, y;
    cin >> n >> x >> y;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Calculate the total sum of the array
    long long total_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        total_sum += a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    long long count = 0;

    // Iterate through each element with two pointers
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            long long removed_sum = a[i] + a[j];
            long long remaining_sum = total_sum - removed_sum;

            // Check if the remaining sum is within the range [x, y]
            if (remaining_sum >= x && remaining_sum <= y)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
