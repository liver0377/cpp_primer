#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator find(int target, const vector<int>& nums) {
   vector<int>::const_iterator iter;
   for (iter = nums.begin(); iter != nums.end(); iter ++) {
      if (*iter == target) return iter;
   } 
   return iter;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    auto iter = find(9, nums);
    if (iter == nums.end()) {
        cout << "Not Find" << endl;
    } else {
        cout << "Find" << endl;
    }
    return 0;
}