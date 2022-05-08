#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

class GrossSalary
{
    const char* emp_name, emp_dept;
    int emp_id, emp_salary, emp_da, emp_hra, emp_ta, emp_gross;

    public:
    GrossSalary()
    {
        emp_name = new char[30];
        emp_name = "New Employee";
        emp_dept = new char[30];
        emp_dept = "Intern";
        emp_id = 1000;
        emp_salary = 0;
    }

    GrossSalary(char name[30], char dept[30], int salary, int id)
    {
        strcpy(emp_name, name);
        strcpy(emp_dept, dept);
        emp_id = id;
        emp_salary = salary;
    }

    void CalculateSalary()
    {
        emp_da = 0.5 * emp_salary;
        emp_hra = 0.3 * emp_salary;
        emp_ta = 0.1 * emp_salary;
        emp_gross = emp_salary + emp_da + emp_hra + emp_ta;
    }

    void display()
    {
        cout<<"Employee Name: "<<emp_name<<endl;
        cout<<"Employee Department: "<<emp_dept<<endl;
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"Employee Salary: "<<emp_salary<<endl;
        cout<<"Employee DA: "<<emp_da<<endl;
        cout<<"Employee HRA: "<<emp_hra<<endl;
        cout<<"Employee TA: "<<emp_ta<<endl;
        cout<<"Employee Gross Salary: "<<emp_gross<<endl;
    }

    ~GrossSalary()
    {
        cout<<"Object End"<<endl;
    }
};

int main()
{
    GrossSalary E1;
    GrossSalary E2("Kartik", "IT", 500000, 12345);
    E1.CalculateSalary();
    E1.display();
    E2.CalculateSalary();
    E2.display();
    
    return 0;
}