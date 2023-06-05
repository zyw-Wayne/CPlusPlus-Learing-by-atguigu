/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 10:07:18
 * @LastEditTime: 2023-06-05 10:10:03
 */
#include <iostream>
using namespace std;

int main()
{
  for (int num = 1; num < 100; num++)
  {
    cout << "\t";
    if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
      continue;
    cout << num;
    if (num % 10 == 0)
    {
      cout << endl
           << endl;
    }
  }
  cin.get();
  return 0;
}