#include <iostream>
using namespace std;

int sum(int n){
    if(n == 1) return 1;
    else if(n == 2) return 2;

    return n + sum(n - 2);
}

int main() {

    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}