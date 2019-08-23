#include <iostream>
using namespace std;

int main(){
    int n, day, sum = 0;
    cin >> n;
    for(day = 0; day<n; day++)
    {
        if (day % 6 == 0){
            sum -= 1;
        }
        if (day == 0){
            sum = 1;
        }
        else{
            sum += sum * 2;
        }
    }
    cout << sum << endl;
}