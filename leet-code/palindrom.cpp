#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
      if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

      int num = x, rem = 0, ans = 0;

      while (num > 0)
      {
            rem = num % 10;
            num = num / 10;

            if (ans > INT_MAX / 10)
                  return false;

            ans = ans * 10 + rem;
      }

      if (ans == x)
            return 1;
      return 0;
}

int main()
{
      int x;
      cin >> x;
      cout << isPalindrome(x) << endl;
      return 0;
}