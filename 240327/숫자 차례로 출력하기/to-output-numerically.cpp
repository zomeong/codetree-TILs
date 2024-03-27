#include <iostream>
using namespace std;

void printAsc(int n){
    if (n == 0){
        return;
    }

    printAsc(n - 1);

    cout << n << ' ';
}

void printDesc(int n){
    if (n == 0){
        return;
    }

    cout << n << ' ';

    printDesc(n - 1);
}

int main() {

    int n;
    cin >> n;

    printAsc(n);
    cout << '\n';
    printDesc(n);

    return 0;
}