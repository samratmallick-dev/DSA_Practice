#include <iostream>
using namespace std;

int countTrailingZerosInFactorial(int n)
{
      int count = 0;

      while (n >= 5)
      {
            count = count + (n / 5);
            n = n / 5;
      }
      return count;
}

int main()
{
      int n;
      cin >> n;
      cout << countTrailingZerosInFactorial(n) << endl;
      return 0;
}