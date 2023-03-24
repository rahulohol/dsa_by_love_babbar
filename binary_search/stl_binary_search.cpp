#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v{2, 4, 6, 8, 10, 12, 16};
    int target = 11;
 
    if (binary_search (v.begin(), v.end(), target)){
        cout << target <<" found in vector" << endl;
    }else{
        cout << target <<" not found in vector" << endl;
    }
}