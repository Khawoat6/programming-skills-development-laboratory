// 5_TheThiefOfBaramos
// Phattaraphon Chomchaiyaphum 5930300585
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int max(int m, int n){
    return (m > n)? m : n;
}
int thethiefOfBaramos(int summeryOfHourse, int impt[], int value[], int numberOfHourse){
    int knapSack[numberOfHourse + 1][summeryOfHourse + 1];
    for (int i = 0; i <= numberOfHourse; i++){
        for (int w = 0; w <= summeryOfHourse; w++){
            if (i == 0 || w == 0){
                knapSack[i][w] = 0;
            }
            else if (impt[i - 1] <= w){
                knapSack[i][w] = max(value[i - 1] + knapSack[i - 1][w - impt[i - 1]], knapSack[i - 1][w]);
            }
            else{
                knapSack[i][w] = knapSack[i - 1][w];
            }
        }
    }
    return knapSack[numberOfHourse][summeryOfHourse];
}

int main(){
    int numberOfHourse;
    int summeryOfHourse;
    cin >> numberOfHourse >> summeryOfHourse;
    
    int value[numberOfHourse];
    int impt[numberOfHourse];
    for (int i=0; i<numberOfHourse; i++) {
        cin >> value[i];
        impt[i] = 1;
    }
    printf("%d\n", thethiefOfBaramos(summeryOfHourse, impt, value, numberOfHourse));
    return 0;
}

//--------------------------------------+
//    input        |     output         |
//--------------------------------------+
//7 3              |    12              |
//2 1 3 5 0 1 4    |                    |
//--------------------------------------+
//6 2              |    11              |
//1 6 2 5 3 4      |                    |
//--------------------------------------+