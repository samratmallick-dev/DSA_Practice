#include <iostream>
using namespace std;
int main()
{
      int n = 4;
      // int num =1;
      // char ch = 'A';
      for (int i = 0; i < n; i++)
      {
            char ch = 'A';
            // int num = 1;
            for (int j = 0; j < (i + 1); j++)
            {
                  // cout << num << " ";
                  // num++;
                  // cout << ch << " ";
                  // ch++;
                  ch = 'A' + i;
                  cout << ch << " ";
            }
            cout << endl;
      }
      return 0;
}