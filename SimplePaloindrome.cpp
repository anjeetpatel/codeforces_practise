#include <iostream>
#include <vector>
using namespace std;

void minimal_palindrome_string(int t, vector<int> &test_cases)
{
    // Handle each test case
    for (int n : test_cases)
    {
        string result = "";
        if (n == 2)
        {
            result = "uo"; 
        }
        else if (n == 3)
        {
            result = "iae";
        }
        else
        {
            
            string vowels = "aeiou";
            result = "oeiiua"; 
            for (int i = 0; i < n; ++i)
            {
                result[i] = vowels[i % 5]; // Cycle through vowels
            }
        }

        // Output the result for the current test case
        cout << result.substr(0, n) << endl;
    }
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    vector<int> test_cases(t);

    // Read in all test cases
    for (int i = 0; i < t; ++i)
    {
        cin >> test_cases[i];
    }

    // Call the function to generate the minimal palindrome strings
    minimal_palindrome_string(t, test_cases);

    return 0;
}
