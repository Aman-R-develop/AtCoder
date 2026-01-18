#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    int answer = 1000000;

    for (int i = 0; i + M <= N; i++)
    {
        int cost = 0;
        for (int j = 0; j < M; j++)
        {
            int s_digit = S[i + j] - '0';
            int t_digit = T[j] - '0';
            cost += (s_digit - t_digit + 10) % 10;
        }
        answer = min(answer, cost);
    }

    cout << answer << endl;
    return 0;
}
