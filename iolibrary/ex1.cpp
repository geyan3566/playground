#include <iostream>
int &test (int &input)
{
   input += 1;
   int *a = &input; 
   return *a; 
}

int test2 (int &input)
{
   return input+3;
}

int main()
{
   int i;
   int j;
   std::cout << "Please input your integer:";
   std::cin >> i;
   std::cout << "The number is  " << i << '\n';

   // // test of end of file 
   while(std::cin >> j)
   {
      std::cout << j << ' ';
   }
   std::cout << j << '\n';
   // std::cin.clear();
   // std::cin >> c;
   // std::cout << c;
   // j = &test(i);
   // std::cout << *j <<'\n';
   // std::cout << test2(*j) << '\n';
   return 0;
}

