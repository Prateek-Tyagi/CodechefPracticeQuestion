// A C++ program to count number of partitions 
// of a set with n elements into k subsets 
#include<iostream> 
using namespace std; 
  
// Returns count of different partitions of n 
// elements in k subsets 
int countP(int n, int k) 
{ 
  // Base cases 
  if (n == 0 || k == 0 || k > n) 
     return 0; 
  if (k == 1 || k == n) 
      return 1; 
  
  // S(n+1, k) = k*S(n, k) + S(n, k-1) 
  return  k*countP(n-1, k) + countP(n-1, k-1); 
} 
  
// Driver program 
int main() 
{ 
int p,k;
cin>>p>>k;
   cout <<  countP(p, k); 
   return 0; 
} 
