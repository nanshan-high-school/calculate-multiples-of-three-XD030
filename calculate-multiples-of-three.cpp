#include <iostream>
using namespace std;
int main() {
  string formula;
  cout <<"請輸入算式";
  cin  >> formula;
  int i = 0, a = 0;
  while (formula[i] != 0){
    i++;
  }
  while (formula[a] != 42 && formula[a] != 43 && formula[a] != 47 && formula[a] != 45){
    a++;
  }
  int k = a + 1;
  int f=1,n=1;
  int c=0,m=0;
  for (int j = a -1; j >= 0; j--){
    m +=((int)formula[j] - '0')*n;
    n*=10; 
  }
  for (int h = i - 1; h >= k; h--){
    c += ((int)formula[h] - '0')*f; 
    f*=10;
  }
  int x=0;
  if(formula[a] == 42)
  x = (m*n)%3;
  else if(formula[a] == 43)
  x  = (m+n)%3;
  else if(formula[a] == 47)
  x = (m/n)%3;
  else if(formula[a] == 45)
  x = (m-n)%3;
  if(x == 0){
    cout <<"是三的倍數";
  }
  else
  cout <<"不是三的倍數";
 }
