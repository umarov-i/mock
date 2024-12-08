#include <iostream>
#include <vector>
using namespace std;

int findMax(int *ptr, int size) {
    int maxVal = *ptr;
    for (int i = 1; i < size; ++i) {
        if (*(ptr + i) > maxVal) {
            maxVal = *(ptr + i);
        }
    }
    return maxVal;
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
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += *(ptr + i);
    }
    return static_cast<double>(sum) / size;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    while (true) {
        int num;
        cin >> num;
        if (num == -1) break;
        arr[size++] = num;
    }
int max = findMax(arr, size);
    cout << "Maximum value: " << max << endl;


    reverseArray(arr, size);
    cout << "Reversed array: ";
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
cout << endl;


double avg = calculateAverage(arr, size);
cout << "Average: " << avg << endl;
    return 0;
}



