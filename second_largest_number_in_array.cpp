#include <iostream>
using namespace std;

int printSecondLargest(int arr[], int n)
{
      int largest = -1;
      for (int i = 0; i < n; i++)
      {
            if (arr[i] > largest)
            {
                  largest = arr[i];
            }
      }

      int secondLargest = -1;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] != largest)
            {
                  secondLargest = max(secondLargest, arr[i]);
            }
      }
      return secondLargest;
}
int main()
{
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      cout << printSecondLargest(arr, n);
      return 0;
}