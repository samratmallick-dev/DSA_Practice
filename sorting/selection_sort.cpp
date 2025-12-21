#include <iostream>
using namespace std;

void selectionSortInAscendingOrder(int arr[], int n)
{
      for (int i = 0; i < n - 1; i++)
      {
            int index = i;
            for (int j = i + 1; j < n; j++)
            {
                  if (arr[j] < arr[index])
                  {
                        index = j;
                  }
            }
            swap(arr[i], arr[index]);
      }
      cout << "Sorted array asscending: ";
      for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
      }
      cout << endl;

}

void selectionSortInDescendingOrder(int arr[], int n)
{
      for (int i = n - 1; i > 0; i--)
      {
            int index = i;
            for (int j = i - 1; j >= 0; j--)
            {
                  if (arr[j] < arr[index])
                  {
                        index = j;
                  }
            }
            swap(arr[i], arr[index]);
      }
      cout << "Sorted array decending: ";
      for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
      }
      cout << endl;
}

int main()
{
      int n;
      cin >> n;
      int arr[100];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      selectionSortInAscendingOrder(arr, n);
      selectionSortInDescendingOrder(arr, n);
      return 0;
}