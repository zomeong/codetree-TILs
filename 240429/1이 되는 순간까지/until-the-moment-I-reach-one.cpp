#include <iostream>
using namespace std;

int cal(int n){
    if(n == 1) return 0;

    if(n % 2 == 0) return cal(n / 2) + 1;
    else return cal(n / 3) + 1;
}

int main() {

    int n;
    cin >> n;
    cout << cal(n);

    return 0;
}