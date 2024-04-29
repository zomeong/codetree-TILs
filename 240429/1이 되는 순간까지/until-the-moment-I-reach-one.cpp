#include <iostream>
using namespace std;

int cnt = 0;

void cal(int n){
    if(n == 1) return;

    if(n%2 == 0) cal(n / 2);
    else cal(n / 3);

    cnt++;
}

int main() {

    int n;
    cin >> n;

    cal(n);
    cout << cnt;

    return 0;
}