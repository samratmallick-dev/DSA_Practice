#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
      for (int i = 0; i < n; i++) {
            for (int j = i; j > 0; j--) {
                  if (arr[j] < arr[j - 1]) {
                        swap(arr[j], arr[j - 1]);
                  } else {
                        break;
                  }
            }
      }
      // for (int i = 0; i < n; i++) {
      //       for(int j = 0; j < i; j++){
      //             if(arr[i] < arr[j]){
      //                   swap(arr[i], arr[j]);
      //             } else {
      //                   break;
      //             }
      //       }
      // }
      cout << "Sorted array asscending: ";
      for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
      }
      cout << endl;
};
void insertionSortDecending(int arr[], int n) {
      for (int i = 0; i < n; i++) {
            for (int j = i; j > 0; j--) {
                  if (arr[j] > arr[j - 1]) {
                        swap(arr[j], arr[j - 1]);
                  } else {
                        break;
                  }
            }
      }
      // for (int i = 0; i < n; i++) {
      //       for(int j = 0; j < i; j++){
      //             if(arr[i] < arr[j]){
      //                   swap(arr[i], arr[j]);
      //             } else {
      //                   break;
      //             }
      //       }
      // }
      cout << "Sorted array decending: ";
      for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
      }
      cout << endl;
};

int main()
{
      int n;
      cout << "Enter the number of elements: ";
      cin >> n;
      int arr[100];
      cout << "Enter the elements: ";
      for(int i = 0; i < n; i++){
            cin >> arr[i];
      }
      insertionSort(arr, n);
      insertionSortDecending(arr, n);
      return 0;
}