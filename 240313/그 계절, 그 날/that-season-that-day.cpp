#include <iostream>
using namespace std;

int y, m, d;

bool check_leap(int year){
    if(year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> y >> m >> d;

    if (m == 2){
        if(d > 28){
            if(check_leap(y) && d == 29) cout << "Winter";
            else cout << "-1";
            return 0;
        }
    }
    else if( m == 4 || m == 6 || m == 9 || m == 11){
        if(d == 31) cout << "-1";
    }
    
    if(m == 1 || m == 3){
        cout << "Spring";
    }
    else if(m == 4 || m == 6 || m == 5){
        cout << "Summer";
    }
    else if(m == 7 || m == 8 || m == 9){
        cout << "Fall";
    }
    else {
        cout << "Winter";
    }

    return 0;
}