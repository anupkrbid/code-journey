#include <bits/stdc++.h>

using namespace std;

void calculateFactorial(unsigned short n);

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned short t, n;

  cin >> t;

  for (unsigned short i = 0; i < t; i++)
  {
    cin >> n;

    calculateFactorial(n);
    cout << endl;
  }
  return 0;
}

void calculateFactorial(unsigned short n)
{
  unsigned short factorial[200] = {0};
  factorial[0] = 1;
  for (unsigned short i = 2; i <= n; i++)
  {
    unsigned short carry = 0, product;
    for (unsigned short j = 0; j < 200; j++)
    {
      product = (factorial[j] * i) + carry;
      carry = product / 10;
      factorial[j] = product % 10;
    }
  }
  bool print = false;
  for (unsigned short j = 199; j >= 0; j--)
  {
    if (factorial[j] == 0 && !print)
    {
      continue;
    }
    print = true;
    cout << factorial[j];
    if (j == 0)
    {
      break;
    }
  }
}