#include<iostream.h>
#include<conio.h>
#include<stdio.h>

/* Question 1
class Publication
{
protected:
int price, book_page, video_mem;
char name_book[30];
public:
void getdat()
{
cout<<"Enter Name of Book: "<<endl;
gets(name_book);
cout<<"Enter Price of Book: "<<endl;
cin>>price;
}
void display()
{
cout<<"Name of Book: "<<name_book<<endl;
cout<<"Price of Book: "<<price<<endl;
}
};
class Book : public Publication
{
int add_page;
public:
void getdat()
{
cout<<"Enter number of pages to be added:"<<endl;
cin>>add_page;
book_page = add_page;
}
void display()
{
cout<<"Number of Pages: "<<book_page<<endl;
}
};
class Video : public Publication
{
int add_mem;
public:
void getdat()
{
cout<<"Enter number of MBs in Video: "<<endl;
cin>>add_mem;
video_mem = add_mem;
}
void display()
{
cout<<"Total memory for the Video: "<<video_mem<<" MB"<<endl;
}
};
void main()
{
clrscr();
Book b;
Video v;
b.Publication::getdat();
b.getdat();
v.getdat();
cout<<endl<<endl;
b.Publication::display();
b.display();
v.display();
getch();
}
*/

/* Question 2
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
*/

/*Question 3: Ambiguity
class base1
 {
  public:
   void operation(int a, int b)
    {
     cout<<"Result of addition = "<<a+b<<endl;
    }
 };

class base2
 {
   public:
   void operation(int a, int b)
    {
     if(a>b)
      cout<<"Result of Subtraction = "<<a-b<<endl;
     else
      cout<<"Result of Subtraction = "<<b-a<<endl;
    }
 };

class derived : public base1, public base2
 {

 };

void main()
 {
  clrscr();
  int a, b;
  cout<<"Enter values of a and b"<<endl;
  cin>>a;
  cin>>b;
  derived obj;
  obj.operation(a, b); // Error!
  getch();
 }
*/

/* Question 3: Solution*/
class base1
 {
  public:
   void operation(int a, int b)
    {
     cout<<"Result of addition = "<<a+b<<endl;
    }
 };

class base2
 {
   public:
   void operation(int a, int b)
    {
     if(a>b)
      cout<<"Result of Subtraction = "<<a-b<<endl;
     else
      cout<<"Result of Subtraction = "<<b-a<<endl;
    }
 };

class derived : public base1, public base2
 {

 };

void main()
 {
  clrscr();
  int a, b;
  cout<<"Enter values of a and b"<<endl;
  cin>>a;
  cin>>b;
  derived obj;
  obj.base1::operation(a, b);
  obj.base2::operation(a, b);
  getch();
 }