#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int N, X, i, j, k, l;
    cin >> N;
    int Arr[N];
    for(int i=0; i<N; i++){
        cin >> Arr[i];
    }
    cin >> X;
    for (i = 0; i < N-3; i++){
        for (j = i+1; j < N-2; j++){
            for (k = j+1; k < N-1; k++){
                for (l = k+1; l < N; l++){
                    int sum = 0;
                    sum = Arr[i] + Arr[j] + Arr[k] + Arr[l];
                    if (sum == X){
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
