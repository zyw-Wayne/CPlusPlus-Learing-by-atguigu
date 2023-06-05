/*
 * @Author: zyw_Wayne
 * @Date: 2023-06-05 10:41:52
 * @LastEditTime: 2023-06-05 10:52:54
 */
#include <iostream>
using namespace std;

bool isPrime(int num)
{
  if (num <= 1)
    return false;
  for (int i = 2; i < num; i++)
    if (num % i == 0)
      return false;
  return true;
}