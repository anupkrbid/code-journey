#include <bits/stdc++.h>

using namespace std;

int main()
{
  // Added the two lines below for faster I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned short t, a, b;

  cin >> t;

  for (unsigned short i = 0; i < t; i++)
  {
    cin >> a >> b;

    cout << a + b << "\n";
  }
  return 0;
}