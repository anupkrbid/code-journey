#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long t;

  cin >> t;

  long n[t];

  for (long i = 0; i < t; i++)
  {
    cin >> n[i];
  }
  sort(n, n + t);

  for (long i = 0; i < t; i++)
  {
    cout << n[i] << "\n";
  }
  return 0;
}
