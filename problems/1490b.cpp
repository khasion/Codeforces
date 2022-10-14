#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <vector>

int solve(int c0, int c1, int c2, int n) {
   if (c0 == c1 && c1 == c2) return 0;
   int p0 = INT_MAX, p1 = INT_MAX, p2 = INT_MAX;
   if (c0 > n/3) p0 = solve(c0-1, c1+1, c2, n) + 1;
   else if (c1 > n/3) p1 = solve(c0, c1-1, c2+1, n) + 1;
   else if (c2 > n/3) p2 = solve(c0+1, c1, c2-1, n) + 1;
   return std::min(std::min(p0, p1), p2);
}

int execute(std::vector<int> nums) {
   int c0 = 0, c1 = 0, c2 = 0;
   for (int i = 0; i < nums.size(); i++) {
      switch (nums[i] % 3) {
         case 0: c0++; break;
         case 1: c1++; break;
         case 2: c2++; break;
      }
   }
   return solve(c0, c1, c2, nums.size());
}

int main() {
   int n;
   std::cin >> n;
   for (int i = 0; i < n; i++) {
      int size;
      std::vector<int> nums;
      std::cin >> size;
      for (int j = 0; j < size; j++) {
         int c;
         std::cin >> c;
         nums.push_back(c);
      }
      std::cout << execute(nums) << std::endl;
   }
   return 0;
}