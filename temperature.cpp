#include <iostream>
using namespace std;
#include <string>
int main(int argc, char const *argv[])
{
    
   float celsius;
   cout<<"Enter temperature in celsius: ";
   cin>>celsius;
   float fahrenheit=(celsius * 9/5) + 32;
   cout<<"temperature in celsius is "<<celsius<<endl;
   cout<<"temperature in fahrenheit is "<<fahrenheit<<endl;
    return 0;
}

