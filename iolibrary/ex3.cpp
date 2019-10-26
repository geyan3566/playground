#include <fstream>
#include <iostream>


void writeinfile(std::ofstream &ostr, int x)
{
   ostr << x << '\n';
   ostr << x+2 <<'\n';
}

int main()
{
   int i,j;
   char buffer[80];
   char ifile[] = "example.txt";
   std::ofstream ofile;
   ofile.open("example2.txt");
   std::ifstream in(ifile);
   in.getline(buffer, 80);
   std::cout << "The buffer is " << buffer << '\n';
   in >> i >> std::ws >> j;
   std::cout << i << j <<'\n';
   writeinfile(ofile, j);
   for(int n = 0; n<10; n++)
   {
      ofile << n;
      ofile.flush();
   }
   ofile.close();
   return 0;
}

