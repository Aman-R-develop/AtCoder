#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[99][99];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -1;
        }
    }

    arr[0][(n - 1) / 2] = 1;
    int r = 0;
    int c = (n - 1) / 2;
    int k = 1;
    for (int i = 0; i < ((n * n) - 1); i++)
    {
        if (r == 0 && arr[n-1][(c + 1) % n] == -1)
        {
            arr[n-1][(c + 1) % n] = k + 1;
            r = n-1;
            c = (c + 1) % n;
            k = k + 1;
        }else if (arr[(r - 1) % n][(c + 1) % n] == -1)
        {
            arr[(r - 1) % n][(c + 1) % n] = k + 1;
            r = (r - 1) % n;
            c = (c + 1) % n;
            k = k + 1;
        }
        else
        {
            arr[(r + 1) % n][c] = k + 1;
            r = (r + 1) % n;
            c = c;
            k = k + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}