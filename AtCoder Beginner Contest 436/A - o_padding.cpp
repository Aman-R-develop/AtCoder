#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    char arr[100];
    cin >> n;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < n - len; i++)
    {
        arr[i] = 'o';
    }
    for (int i = 0; i < n - len; i++)
    {
        cout<<arr[i];
    }
    cout<<s;

    return 0;
}