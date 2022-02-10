#include <iostream>
using namespace std;
int main()
{ 
  //Anushka Mandrawliya Rollno:2231
  //insert a given number at particular position
  int i, n, pos, num, a[10];
  cout << "enter size of array";
  cin >> n;
  cout << "enter size to the array";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "enter the number to be inserted";
  cin >> num;
  cout << "enter the position at which number to be inserted";
  cin >> pos;
  for (i = n - 1; i >= pos; i--)
    a[i + 1] = a[i];
  a[pos] = num;
  n = n + 1;
  cout << "array after insertion";
  for (i = 0; i < n; i++)
  {
    cout << a[i];
  }
  return 0;
}