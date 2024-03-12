#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        if(n * i % m == 0){
            cout << n * i;
            break;
        }
    }

    return 0;
}