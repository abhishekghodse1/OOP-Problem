//Write a C++ program to copy data from one file to another file.

#include <iostream>
#include<fstream>
/* file handling related classes are in fstream header */
using namespace std;
void file_copy (char *f1, char *f2) 
//char pointers f1 and f2 will hold address of first filename(src) and second filename (dest)
{
//we need to create object of ifstream class as we want to read contents from file 
//another obj ofstream class to write contents to dest file

ifstream fin;
ofstream fout;
char ch;
fin.open(f1);
fout.open(f2);
ch=fin.get();
while(!fin.eof())
{  
fout<<ch;
ch=fin.get();
}
fin.close();
fout.close();
}

int main() {
file_copy("text1.txt","text2.txt");
cout<<"fille copied";
return 0;
}


