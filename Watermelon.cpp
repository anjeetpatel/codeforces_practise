#include <iostream>
using namespace std;
void evenpart(int n)
{
    if (n % 2 == 0 && n >= 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int n;
    cin >> n;
    evenpart(n);
}