#include<iostream.h>
#include<conio.h>
#include<stdio.h>

/*Question 1
class Account
 {
  long amount;

  public:
  Account(long bal)
   {
    amount = bal;
   }
  void balance_amount()
   {
    cout<<"Balance Amount: Rs. "<<amount<<endl;
   }
  void deposit_amount(long dep)
   {
    amount += dep;
   }
  void withdraw_amount(long wd)
   {
    amount -= wd;
   }
 };
void main()
 {
  clrscr();
  long amount, change;
  int ch;
  char req;

  cout<<"Enter starting amount"<<endl;
  cin>>amount;
  Account acc(amount);

  start:clrscr();
  cout<<"Enter choice: "<<endl;
  cout<<"1. Balance Amount"<<endl;
  cout<<"2. Deposit Amount"<<endl;
  cout<<"3. Withdraw Amount"<<endl;
  cout<<"4. Exit"<<endl;
  cin>>ch;

  switch(ch)
   {
    case 1:acc.balance_amount();
    break;
    case 2:cout<<"Enter amount to be deposited: "<<endl;
	   cin>>change;
	   acc.deposit_amount(change);
	   acc.balance_amount();
    break;
    case 3:cout<<"Enter amount to withdraw: "<<endl;
	   cin>>change;
	   acc.withdraw_amount(change);
	   acc.balance_amount();
    break;
    case 4:cout<<"Thank You for banking with us"<<endl;
	   clrscr();
    break;
    default:cout<<"This option is not available"<<endl;
	    cout<<"Please Try again"<<endl;
   }

   cout<<"Do you want to continue banking?"<<endl;
   cout<<"Enter -> y for yes | n for no"<<endl;
   cin>>req;
   if(req=='y')
    goto start;
   else
    {
     clrscr();
     cout<<"Thank you for banking with us"<<endl;
    }
  getch();
 }
*/

/*Question 2*/
class Book
 {
  char title[20], author[20];
  int pages;

  public:
  void read()
   {
    cout<<"Enter title of Book: "<<endl;
    gets(title);
    cout<<"Name of Author of book: "<<endl;
    gets(author);
    cout<<"Enter number of pages in the book: "<<endl;
    cin>>pages;
   }
  void show()
   {
    cout<<"Book: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"No. of Pages: "<<pages<<endl;
   }
 };

class Textbook : private Book
 {
  int chapters, assignments;

  protected:
  int standard;
  void readtextbook()
   {
    cout<<"Enter standard for which the books are: "<<endl;
    cin>>standard;
    cout<<"Enter number of chapters in the Textbook: "<<endl;
    cin>>chapters;
    cout<<"Enter number of assignments in the Textbook: "<<endl;
    cin>>assignments;
   }
  void showtextbook()
   {
    cout<<"Standard: "<<standard<<endl;
    cout<<"No. of Chapters: "<<chapters<<endl;
    cout<<"No. of Assignments: "<<assignments<<endl;
   }
 };

class Physicsbook : public Textbook
 {
  char topic[10];

  public:
  void readPhysicsbook()
   {
    readtextbook();
    cout<<"Enter a topic in a Physicsbook: "<<endl;
    gets(topic);
   }
  void showPhysicsbook()
   {
   showtextbook();
    cout<<"Topic in physicsbook: "<<topic<<endl;
   }
 };
void main()
 {
  clrscr();
  Physicsbook pyb;
  Book bk;
  bk.read();
  pyb.readPhysicsbook();
  clrscr();
  bk.show();
  pyb.showPhysicsbook();
  getch();
 }