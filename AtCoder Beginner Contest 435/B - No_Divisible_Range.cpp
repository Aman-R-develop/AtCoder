#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[51];
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int sum = 0;
            for (int k = j; k <= i; k++)
            {
                sum += arr[k];
            }
            int check = 1;
            for (int k = j; k <= i; k++)
            {
                if (sum % arr[k] == 0)
                {
                    check = 0;
                }
            }
            if (check==1)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}