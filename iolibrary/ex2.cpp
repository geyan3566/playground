#include <iostream>

int main()
{
   int i;
   char str[80];
   
   //std::cin.getline(i);
   std::cin >> i;
   std::cin >> str;
   //std::cin.ignore(1000, '\n');
   //std::cin.sync();
   std::cin >> std::ws;
   std::cin.getline(str,80);
   //std::cin >> str;
   std::cout << i << std::endl;
   std::cout << str << std::endl;
   
   return 0;
}