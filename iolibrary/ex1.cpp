#include <iostream>
int &test (int &input)
{
   input += 1;
   int *a = &input; 
   return *a; 
}

int main()
{
   int i,j;
   std::cout << "Please input your integer:";
   std::cin >> i;
   std::cout << "The number is  " << i << '\n';

   // // test of end of file 
   // while(std::cin >> j)
   // {
   //    std::cout << j << ' ';
   // }
   // std::cin.clear();
   // std::cin >> c;
   // std::cout << c;
   j = test(i);
   std::cout << j;
   return 0;
}

