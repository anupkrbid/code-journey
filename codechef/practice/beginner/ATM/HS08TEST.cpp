#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Added the two lines below for faster I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int x; // Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
  float y;        // Nonnegative number 0 <= Y <= 2000 with two digits of precision - Pooja's initial account balance

  cin >> x >> y;

  // Successful Transaction
  if ((x + 0.5) <= y && x % 5 == 0)
  {
    y -= (x + 0.5);
  }

  cout << fixed << setprecision(2) << y;
  return 0;
}