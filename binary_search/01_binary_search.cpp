#include <iostream>
using namespace std;

void binarySearchIncresingOrder(int arr[], int n, int key)
{
      int start = 0, end = n - 1;

      while (start <= end)
      {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                  cout << "Element found at index " << mid << endl;
                  return;
            }
            else if (arr[mid] < key)
            {
                  start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }

      cout << "Element not found in the array" << endl;
}
void binarySearchDecresingOrder(int arr[], int n, int key)
{
      int start = 0, end = n - 1;

      while (start <= end)
      {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key)
            {
                  cout << "Element found at index " << mid << endl;
                  return;
            }
            else if (arr[mid] > key)
            {
                  start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }

      cout << "Element not found in the array" << endl;
}

int main()
{
      int n;
      cout << "Enter the number of elements: ";
      cin >> n;

      int arr[100];
      cout << "Enter the elements (sorted): ";
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }

      int key;
      cout << "Enter the element to be searched: ";
      cin >> key;

      binarySearchIncresingOrder(arr, n, key);
      binarySearchDecresingOrder(arr, n, key);
      return 0;
}
