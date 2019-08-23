#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int ThiefProblem(int val[], int wt[], int num, int sumHome) {
    if (sumHome < 0){
        return INT_MIN;
    }
    if (num < 0 || sumHome == 0){
        return 0;
    }
    int x = val[num] + ThiefProblem(val, wt, num - 1, sumHome - wt[num]);
    int y = ThiefProblem(val, wt, num - 1, sumHome);
    return max(x, y);
}
int main() {
    int num, sumHome;
    cin >> num >> sumHome;
    
    int val[num], wt[num];
    for (int i=0; i<num; i++) {
        cin >> val[i];
        wt[i] = 1;
    }
    cout << ThiefProblem(val, wt, num - 1, sumHome) << endl;
    return 0;
}