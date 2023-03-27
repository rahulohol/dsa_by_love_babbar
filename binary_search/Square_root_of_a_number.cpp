#include <iostream>
using namespace std;

 long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
int target = x;
  long long int s = 0,e = x,mid=s + (e-s)/2;
  
  long long int ans = -1;

  while(s <= e) {
    if(mid*mid == target) {
      return mid;
    }
     

   else if(mid*mid > target) {
      //left search
      e = mid - 1;
    }
    else {
      //ans store
      ans = mid;
      //right search
      s = mid+1;
    }
    mid = s + (e-s)/2;
  }
  // return ans;
  return ans;

    };


int main(){

  int n=30;
  cout<<floorSqrt(n)<<endl;

    return 0;
}