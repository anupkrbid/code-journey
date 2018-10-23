#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Added the two lines below for faster I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long n, k, t, count = 0;

  cin >> n >> k;

  for (long i = 0; i < n; i++)
  {
    cin >> t;
    if (t % k == 0)
    {
      count++;
    }
  }

  cout << count;

  return 0;
}