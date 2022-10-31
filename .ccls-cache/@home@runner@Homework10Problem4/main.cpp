#include <iostream>

using namespace std;

int main(){

  const int NUMS = 5;  
  
  int nums[NUMS] = {16, 54, 7, 43, -5};  
  
  int total = 0, *nPt;  

  int total2 = 0; // adding int to add up my new for loop
  
  nPt = nums;    
  // store address of nums[0] in nPt 
  
   while (nPt < nums + NUMS)   
    total += *nPt++; 

  cout << "The total of the array elements is " << total << endl; 


    for (int i = 0; i < NUMS; i++){
      total2 += nums[i];
  }
  
  cout << "The total of the array elements is " << total2 << endl; 
  
  return 0;
  }  