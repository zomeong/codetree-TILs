#include <iostream>
using namespace std;

int arr[110];

int max_cal(int m){
    if(m == 0) return arr[0];

    if(max_cal(m - 1) < arr[m]) return arr[m];
    else return max_cal(m - 1);
}

int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << max_cal(n - 1);

    return 0;
}