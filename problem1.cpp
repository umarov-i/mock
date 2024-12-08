#include <iostream>
using namespace std;

int main(){
int n;
    int cnt = 0;
    cin >> n;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) cnt++;
    }
    if (cnt >= 1) cout << "Not Prime";
    else cout << "Prime";
    return 0;
}
