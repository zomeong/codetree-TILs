#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m, a1, a2;
    int arr[110];

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++){
        cin >> a1 >> a2;
        int sum = 0;

        for(int j = a1 - 1; j < a2; j++){
            sum += arr[j];
        }

        cout << sum << '\n';
    }

    return 0;
}