#include <iostream>
#include <vector>
using namespace std;

int findMax(int *ptr, int size) {
    int max = *ptr;
    for (int i = 1; i < size; i++) {
        if (*ptr + i == -1) {
            break;
        }
        if (*(ptr + i) >= max) {
            max = *(ptr + i);
        }
    }
    return max;
}

void reverseArray(int *ptr, int size) {
    int start = 0;
    int end = size - 2;
    while (start < end) {
        swap(*(ptr + start), *(ptr + end));
        start++;
        end--;
    }
}

double calculateAverage(int *ptr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        if (*(ptr + i) == -1) {
            break;
        }
        sum += *(ptr + i);
    }
    double res = sum / (size - 1.0);
    return res;
}

int main() {
vector<int> n;
    int a;
    while (a != -1) {
        cin >> a;
        n.push_back(a);
    }
int *ptr = &n[0];
findMax(ptr, n.size());
    return 0;
}



