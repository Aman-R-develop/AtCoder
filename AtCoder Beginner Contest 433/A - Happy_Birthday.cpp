#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    for (int i = 0; i < 1000; i++)
    {
        if (y*z>x)
        {
            cout << "No";
            break;
        }
        if (x%(y*z) == 0)
        {
            cout << "Yes";
            break;
        }
        x++;
        y++;
    }
    return 0;
}