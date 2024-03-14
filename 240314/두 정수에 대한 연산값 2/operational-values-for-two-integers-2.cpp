#include <iostream>
using namespace std;

void cal(int a, int b){
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    cout << a + 10 << ' ' << b * 2;
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;
    cin >> a >> b;
    cal(a, b);

    return 0;
}