#include <iostream>
#include <vector>
using namespace std;

int findMax(int *ptr, int size) {
    int max = *ptr;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) >= max) {
            max = *(ptr + i);
        }
    }
    return max;
}

void reverseArray(int *ptr, int size) {
    int* start = ptr;
    int* end = ptr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

double calculateAverage(int *ptr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    double res = sum / (size - 1.0);
    return res;
}

int main() {
int arr[];
int size;
    while (true) {
        int num;
        cin >> num;
        if (num == -1) break;
        arr[size++] = num;
    }
int max = findMax(arr, size);
    cout << "Maximum value: " << max << endl;
    cout << "Reversed array: ";
    reverseArray(arr, size);
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
cout << endl;
double avg = calculateAverage(arr, size);
cout << "Average: " << avg << endl;
    return 0;
}



