/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/
#include <stdio.h>
int main(){
    char EmployeesID[10] ;
    float  working_hr ;
    float Salary_amount_hr ;
    float Salary ;
    printf( "Enter Your Id : \n" ) ; 
    scanf( "%s", &EmployeesID ) ;

    printf( "Enter Your Hr:  : \n" ) ;
    scanf( "%f", &working_hr) ;

    printf( " Enter Your Salary : \n" ) ;
    scanf( "%f", &Salary_amount_hr ) ;

    Salary = Salary_amount_hr * working_hr ;
    printf("Expected Output:\n");
    printf("Employees ID = %s\n",EmployeesID) ;
    printf("Salary = U$ %f\n",Salary) ;

    return 0 ;
}//end main function