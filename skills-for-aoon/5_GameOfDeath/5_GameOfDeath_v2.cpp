//5_GameOfDeath
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int gameOfDeathByJosephus(int num, int killer)
{
    if (num > 1)
        return (gameOfDeathByJosephus(num - 1, killer) + killer-1) % num + 1;
    else if (num == 0)
        return (0);
    else
        return (1);
}
int main()
{
    int num, killer;
    while (1){
        cin>>num >> killer;
        if (num == 0)
            break;
        printf("%d\n", gameOfDeathByJosephus(num, killer));
    }
}
// input           |            output
// 5 2             |            3
// 4 2             |            1