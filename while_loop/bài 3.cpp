/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float diem;
    
    while (true) 
    {
       cout<<"Nhap diem: ";
       cin>>diem;
       if (diem >= 0 && diem <= 10 ) 
       break;
    }
    cout<<"Diem ban vua nhap hop le: "<<diem<<endl;

    return 0;
}