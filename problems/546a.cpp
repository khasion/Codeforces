#include <iostream>

int main() {
   int k, w, n;
   int sum = 0;
   std::cin >> k >> w >> n;
   for (int i = 1; i <= n; i++) {
      sum += i*k;
   }
   if (w < sum) {std::cout << sum - w << std::endl;}
   else {std::cout << 0 << std::endl;}
   return 0;
}