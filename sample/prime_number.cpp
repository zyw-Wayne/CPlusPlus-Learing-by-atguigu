/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 10:41:52
 * @LastEditTime: 2023-06-05 16:32:39
 */
#include <iostream>
using namespace std;

// 怎样优雅地判断一个数是不是质数？ https://zhuanlan.zhihu.com/p/113815619
bool isPrime(int num)
{
  if (num <= 1)
    return false;
  for (int i = 2; i < num; i++)
    if (num % i == 0)
      return false;
  return true;
}

int main()
{

  int num;
  cout << "please input some number(between 0 and 2000000000) you want to check" << endl;
  cin >> num;

  if (isPrime(num))
    cout << "this number is prime number" << endl;
  else
    cout << "this number is not prime number" << endl;

  cout << "show The sum of all primes between 0 and 100:" << endl;

  for (int i = 2; i <= 100; i++)
  {
    if (isPrime(i))
      cout << i << "\t";
  };

  cin.get();
  cin.get();
  return 0;
}