#include<iostream>
using namespace std;

void swap(int x,int y)
  {	
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<x<<" "<<y;
  }	
int main()
{	
    
  int a = 10;
  int b = 15;

  swap(a,b);

  return 0;
}