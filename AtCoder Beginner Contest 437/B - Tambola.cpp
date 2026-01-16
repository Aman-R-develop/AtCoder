#include <iostream>
using namespace std;

int main()
{
    int h, w, n;
    int arr[3][5];
    int count_1 = 0;
    int count_2 = 0;
    ;
    int ans[90];
    cin >> h >> w >> n;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (ans[k] == arr[i][j])
                {
                    count_1++;
                }
            }
        }
        if (count_2 < count_1)
        {
            count_2 = count_1;
        }
        count_1 = 0;
    }
    cout << count_2;

    return 0;
}