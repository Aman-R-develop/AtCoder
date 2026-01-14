#include <iostream>
using namespace std;

int main(){
    int n;
    int pow2 = 1;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        pow2 *=2;
    }
    cout<<pow2 - 2*n;
    return 0;
}