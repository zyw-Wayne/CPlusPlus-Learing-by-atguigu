/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 10:16:49
 * @LastEditTime: 2023-06-05 10:22:01
 */
#include <iostream>
using namespace std;

int main()
{
  int x = 0;

begin:
{
  cout << "program is starting ..." << endl;
  do
  {
    cout << "x = " << ++x << endl;
  } while (x < 10);

  if (x <= 10)
  {
    cout << "back to origin!" << endl;
    goto begin;
  }
}
  cin.get();
  return 0;
}