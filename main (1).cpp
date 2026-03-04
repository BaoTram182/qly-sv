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
    // khai bao bien
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    // dung vong lap de nhap diem va dung if de kiem tra
    float diem;
    int dau = 0, rot = 0;

    for(int i = 1; i <= n; i++) {
        cout << "Nhap diem trung binh sinh vien " << i << ": ";
        cin >> diem;

        if(diem >= 5) {
            dau++;
        } else {
            rot++;
        }
    }
    // dem so luong
    cout << "So sinh vien dau: " << dau << endl;
    cout << "So sinh vien rot: " << rot << endl;

    return 0;
}