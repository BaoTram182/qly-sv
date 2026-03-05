/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    float diem[6];
    float score;
    float tongdiem = 0;
    float dtb;
    
    while ( i < 6 ) 
    {
        cout << "Nhập điểm của bạn: ";
        cin >> score;
        diem[i] = score; 
        if ( diem[i] >= 0 && diem[i] <=10 )
        {
            i++;
        } else {
            cout << "Điểm không hợp lệ. Vui lòng nhập lại!" << endl;
        }
    }
    
    i= 0;
    while ( i < 6 )
    {
        cout << "Điểm của học sinh thứ " << i+1 << " là: " << diem[i] << endl;
        i++;
    }
    
    i = 0;
    while ( i < 6 )
    {
         tongdiem += diem[i];
         i++;
    }
    
    dtb = tongdiem / 6;
    cout << "Tổng điểm trung bình của học sinh là: " << dtb << endl;


    return 0;
}