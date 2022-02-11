#include <bits/stdc++.h>

using namespace std;
int main ()
{
    char filename[100];
    cout << "Enter file name to open ";
    cin.getline(filename, 100);
  
    // Build command to execute.  For example if the input
    // file name is a.cpp, then str holds "gcc -o a.out a.cpp" 
    // Here -o is used to specify executable file name
    string str = "nano ";
    str = str + filename;
  
    // Convert string to const char * as system requires
    // parameter of type const char *
    const char *command = str.c_str();
  
    cout << "Opening file using " << command << endl;
    system(command);
  
    return 0;
}
