#include <iostream>
using namespace std;
int main()
{
    int n, x, sum = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> x;
    for (int i=0; i<n-3; i++){
        for (int j=i+1; j<n-2; j++){
            for (int k=j+1; k<n-1; k++){
                for (int l=k+1; l<n; l++){
                    sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if (sum == x){
                        cout << "YES\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}