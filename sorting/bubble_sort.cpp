#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
      for (int i = n - 1; i > 0; i--)
      {
            bool count = 0;
            for (int j = 0; j < i; j++)
            {
                  if (arr[j] > arr[j + 1])
                  {
                        swap(arr[j], arr[j + 1]);
                        count == 1;
                  }
            }
            if (count == 0)  break;    
      }
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

      bubbleSort(arr, n);

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }

      return 0;
}
