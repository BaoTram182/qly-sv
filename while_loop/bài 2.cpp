/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // khai báo biến
    float diem;
    
    // nhập và lưu giá trị
    cout<<"Nhap diem: ";
    cin>>diem;
    
    // kiểm tra sự phù hợp của giá trị và lặp lại việc nhập dữ liệu nếu sai 
    while (diem < 0 || diem > 10)
    {
        cout<<"Gia tri ban vua nhap khong hop le. Vui long nhap lai.";
        cin>>diem;
    }
        cout<<"Diem ban vua nhap hop le: "<<diem<<endl;
        
        
    return 0;
}