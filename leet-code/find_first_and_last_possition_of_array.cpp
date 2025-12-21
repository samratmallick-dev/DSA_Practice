// find first and last position of element in sorted array

#include <iostream>
using namespace std;

void searchPossitions(int arr[], int n, int target)
{
      int start = 0, end = n - 1, first = -1, last = -1;

      // find first possition of the target
      while (start <= end)
      {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                  first = mid;
                  end = mid - 1;
            }
            else if (arr[mid] < target)
            {
                  start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }

      // find last possition of the target
      start = 0, end = n - 1;

      while (start <= end)
      {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                  last = mid;
                  start = mid + 1;
            }
            else if (arr[mid] < target)
            {
                  start = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }
      cout << "The first possition the target element: " << first << endl;
      cout << "The last possition the target element: " << last << endl;
}
int main()
{
      int n;
      cout << "Enter number of elements: ";
      cin >> n;

      int arr[1000];
      cout << "Enter elements in sorted order: ";
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      int key;
      cout << "Enter element to be searched: ";
      cin >> key;

      searchPossitions(arr, n, key);
      return 0;
}