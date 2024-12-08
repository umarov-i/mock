#include <iostream>
#include <vector>
using namespace std;

int sumEvenNumbers(vector<int> n) {
    int sum = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == -1) {
            break;
        }
        if (n[i] % 2 == 0) {
            sum += n[i];
        }
    }
    return sum;
}

int longestConsecutiveSubsequence(vector<int> n) {
    int cnt = 1;
    int maxCnt = 1;

    for (int i = 1; i < n.size(); i++) {
        if (n[i] == -1) {
            break;
        }

        if (n[i] == n[i - 1]) {
            cnt++;
        } else {
            maxCnt = max(maxCnt, cnt);
            cnt = 1;
        }
    }

    maxCnt = max(maxCnt, cnt);

    return maxCnt;
}


int main() {
    vector<int> n;
    vector<int> m;
    int a;
    cin >> a;
    n.push_back(a);
    while (a != -1) {
        cin >> a;
        n.push_back(a);
    }
    int b;
    cin >> b;
    m.push_back(b);
    while (b != -1) {
        cin >> b;
        m.push_back(b);
    }
    cout << "Sum of even numbers: " << sumEvenNumbers(n) << endl;
    cout << "Length of longest consecutive subsequence: " << longestConsecutiveSubsequence(m) << endl;
    return 0;
}