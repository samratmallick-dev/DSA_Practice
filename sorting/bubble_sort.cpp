#include <iostream>
using namespace std;

void bubbleSortAscendingOrder(int arr[], int n)
{
      for (int i = n - 1; i > 0; i--)
      {
            bool swapped = false;
            for (int j = 0; j < i; j++)
            {
                  if (arr[j] > arr[j + 1])
                  {
                        swap(arr[j], arr[j + 1]);
                        swapped = true;
                  }
            }
            if (!swapped)
                  break;
      }
      cout << "Sorted array asscending: ";
      for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
      }
      cout << endl;
}

void bubbleSortDescendingOrder(int arr[], int n)
{
      for (int i = 0; i < n - 1; i++)
      {
            bool swapped = false;
            for (int j = n - 1; j > i; j--)
            {
                  if (arr[j - 1] < arr[j])
                  {
                        swap(arr[j - 1], arr[j]);
                        swapped = true;
                  }
            }
            if (!swapped)
                  break;
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

      bubbleSortAscendingOrder(arr, n);
      bubbleSortDescendingOrder(arr, n);
      return 0;
}
