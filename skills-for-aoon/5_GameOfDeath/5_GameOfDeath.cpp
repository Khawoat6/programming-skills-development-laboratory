#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int gameOfDeathByJosephus(int num, int killer)
{
    if (num > 1)
        return (gameOfDeathByJosephus(num - 1, killer) + killer-1) % num + 1;
    else if (num == 0)
        return 0;
    else
        return 1;
} 
int main()
{
    int num, killer;
    cin>> num >> killer;
    printf("%d\n", gameOfDeathByJosephus(num, killer));
    return 0;
}