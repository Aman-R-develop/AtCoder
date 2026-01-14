#include <iostream>
#include <cmath>
using namespace std;

int sqaure_num(int num, int count)
{
    int temp = num;
    int sq = 0;
    int dig = 0;  
    if (num == 1)
    {
        return 1;
    }
    if (count>100)
    {
        return 0;
    }
    
    while (temp != 0)
    {
        temp = temp / 10;
        dig++;
    }
    int temp2 = num;
    for (int i = 0; i < dig; i++)
    {
        sq += pow(temp2 % 10, 2);
        temp2 = temp2 / 10;
    }
    return(sqaure_num(sq,count+1));
}

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 2026)
    {
        if (sqaure_num(n,0) == 0)
            cout << "No";
        else
            cout << "Yes";
    }

    return 0;
}