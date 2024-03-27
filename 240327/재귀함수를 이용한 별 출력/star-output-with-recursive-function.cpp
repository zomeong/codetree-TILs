#include <iostream>
using namespace std;

void printStar(int n){

    if(n == 1){
        return;
    }

    printStar(--n);

    for(int i = 0; i < n; i++){
        cout << "*";
    }

    cout << '\n';
}

int main() {

    int n;
    cin >> n;

    printStar(n+1);

    return 0;
}