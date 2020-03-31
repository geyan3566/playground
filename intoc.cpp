#include <iostream>

using namespace std;
int main()
{
   int i = 3;
   const string file_name = "asdfg" + to_string(i);
   cout << file_name << endl;
   return 0;
}