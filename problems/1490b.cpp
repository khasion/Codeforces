#include <iostream>
#include <vector>

void rec (int c0, int c1, int c2, std::vector<int> nums) {
   
}

int main() {
   int n;
   std::cin >> n;
   for (int i = 0; i < n; i++) {
      int size, c0 = 0, c1 = 0, c2 = 0;
      std::vector<int> nums;
      std::cin >> size;
      for (int j = 0; j < size; j++) {
         int c;
         std::cin >> c;
         nums.push_back(c);
         switch (nums[j] % 3){
            case 0:
               c0++;
               break;
            case 1:
               c1++;
               break;
            case 2:
               c2++;
               break;
         }
      }
      rec (c0, c1, c2, nums);
   }
   return 0;
}