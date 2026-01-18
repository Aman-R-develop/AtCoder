#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double n;
    int count = 0;
    cin >> n;
    for (double i = 1; i < n+1; i++)
    {
        double answer = pow(-1.0,i);
        count += (int)answer*(i*i*i);
    }
    cout<<count;
    
    return 0;
}