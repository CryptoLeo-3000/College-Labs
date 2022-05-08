#include<iostream.h>
#include<conio.h>
#include<stdio.h>

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