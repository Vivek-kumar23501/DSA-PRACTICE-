#include <iostream>
using namespace std;

// Function declarations
void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);
void printArray(int arr[], int size);

int main() {
    int n;
    cout << "Enter the number of elements in the 1st array: ";
    cin >> n;

    int arr[n];  // Dynamic array size
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " of the 1st array: ";
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted 1st array: ";
    printArray(arr, n);


    return 0;
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

// Merge function
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int size=n1+n2;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[low + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (L[i] < R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
   
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

