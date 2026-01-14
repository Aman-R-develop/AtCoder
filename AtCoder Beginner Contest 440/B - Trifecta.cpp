#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[33];
    cin >> n;
    int temp[33];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    copy(arr, arr + n, temp);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sort(arr, arr + n);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == temp[j])
            {
                cout << j + 1 << " ";
            }
        }
    }

    return 0;
}