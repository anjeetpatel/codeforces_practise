#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr[m * 2];
    for (int i = 0; i < m * 2; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<m*2;i+2){
        cout<<(arr[i+1]-arr[i]);
    }
}
