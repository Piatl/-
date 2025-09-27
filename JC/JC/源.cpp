#include <iostream>
using namespace std;
int main()
{
    int T;
    int result[1000];
    long long p;
    cin >> T;
    for (int casenum = 1;casenum <= T;casenum++)
    {
        cin >> p;
        long long num = 1;
        int n = 1;
        for (;num % p != 0;)
        {
            n++;
            num *= n;
        }
        result[casenum - 1] = n;
    }
    for (int i = 0;i < T;i++)
        cout << result[i] << endl;
}
