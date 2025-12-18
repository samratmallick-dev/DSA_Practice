#include <iostream>
using namespace std;

bool canWinNim(int n)
{
      return n % 4 != 0;
}
int main()
{
      int n;
      cin >> n;
      cout << canWinNim(n) << endl;
      return 0;
}