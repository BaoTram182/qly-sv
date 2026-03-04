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
    float diem[6];
    float score;
    float tongdiem = 0;
    float dtb;
    
    for ( int i = 0; i < 6; i++)
    {
        cout << "Nhập điểm của bạn: ";
        cin >> score;
        diem[i] = score;
        if ( diem[i] >= 0 && diem[i] <=10 )
        {
            cout << " " << endl;
        } else {
            cout << "Điểm không hợp lệ. Vui lòng nhập lại. " << endl;
            i--;   
            continue;
        }
    }
    cout << "Xuất điểm" << endl;
    
    for ( int i = 0; i < 6; i++)
    {
        cout << "Điểm của học sinh thứ " << i+1 << " là: " << diem[i] << endl;
    }
    
    for ( int i = 0; i < 6; i++)
    {
        tongdiem += diem[i];
    }
     
    dtb = tongdiem / 6;
    cout << "Tổng điểm trung bình của học sinh là: " << dtb << endl;
    
    
    
    return 0;
}