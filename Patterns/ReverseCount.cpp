#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ; 
cin>>n;
int i =0; 
while(i<n)
{
  int j =1; 
  while(j<=n)
  {
    cout<<n-j+1<<' ';
    j++;
  }
  cout<<endl;
  i++;
}
}
