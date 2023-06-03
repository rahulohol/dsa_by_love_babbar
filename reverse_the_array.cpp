#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> arr , int m)
{
	// Write your code here.
	int i=m+1;
	int j=arr.size()-1;
	while(i<j){
		swap(arr[i++],arr[j--]);
	}
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
	cout<<endl;
}

int main(){
    vector <int> arr{10, 4, 5, 2, 3, 6, 1, 3, 6};
  
   reverseArray(arr, 3);
   return 0;

}