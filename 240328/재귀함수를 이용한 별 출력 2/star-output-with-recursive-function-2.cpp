#include <iostream>
using namespace std;

void printStar(int n){

    if(n == 0) return;

    for(int i = n; i > 0; i--){
        cout << "* ";
    }
    cout << "\n";

    printStar(n - 1);

    for(int i = 1; i <= n; i++){
        cout << "* ";
    }
    cout << "\n";
}

int main() {

    int n;
    cin >> n;
    printStar(n);

    return 0;
}