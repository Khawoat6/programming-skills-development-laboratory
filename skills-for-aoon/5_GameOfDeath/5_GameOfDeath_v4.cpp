// 5_GameOfDeath
#include <iostream>
using namespace std;
int gameOfDeathByJosephus(int n, int k)
{
    if (n > 1)
        return (gameOfDeathByJosephus(n - 1, k) + k-1) % n + 1;
    else if (n == 0)
        return (0);
    else
        return (1);
}
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    printf("%d", gameOfDeathByJosephus(n, k));
    cout << endl;
}
