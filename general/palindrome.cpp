#include <bits/stdc++.h>
using namespace std;

		string is_palindrome(int n)
		{
		    // Code here.
		  int duplicate=n;
	  int reverseNumber=0;
	  while(n>0){
       
	    int LastDigit=n%10;
	    reverseNumber=(reverseNumber*10)+LastDigit;
	    n=n/10;
	  }
		duplicate==reverseNumber?cout<<"Yes":cout<<"No";
		};
int main(){
    is_palindrome(121);
}
