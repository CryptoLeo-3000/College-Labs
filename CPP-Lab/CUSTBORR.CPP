#include<iostream.h>
#include<conio.h>
#include<stdio.h>

 

class Customer
 {
  protected:
  char name[20];
  long id;

 

  public:
  void get_customer()
   {
    cout<<"Enter Customer name: "<<endl;
    gets(name);
    cout<<"Enter Customer ID: "<<endl;
    cin>>id;
   }
  void display_customer()
   {
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Customer ID: "<<id<<endl;
   }
 };

 

class Depositor : public Customer
 {
  protected:
  long acc_no, bal;

 

  public:
  void get_depositor()
   {
    cout<<"Enter Account Number: "<<endl;
    cin>>acc_no;
    cout<<"Enter Balance Amount: "<<endl;
    cin>>bal;
   }
  void display_depositor()
   {
    cout<<"Depositor Account Number: "<<acc_no<<endl;
    cout<<"Balance in Account: "<<bal<<endl;
   }
 };

 

class Borrower : public Depositor
 {
  protected:
  long loan_no, loan_amt;

 

  public:
  void get_borrower()
   {
    cout<<"Enter Loan Number: "<<endl;
    cin>>loan_no;
    cout<<"Enyter Loan Amount: "<<endl;
    cin>>loan_amt;
   }
  void display_borrower()
   {
    cout<<"Loan No.: "<<loan_no<<endl;
    cout<<"Loan Amount Borrowed: "<<loan_amt<<endl;
   }
 };

 

void main()
 {
  clrscr();
  Borrower br;
  br.get_customer();
  br.get_depositor();
  br.get_borrower();
  cout<<endl<<endl;
  br.display_customer();
  br.display_depositor();
  br.display_borrower();
  getch();
 }