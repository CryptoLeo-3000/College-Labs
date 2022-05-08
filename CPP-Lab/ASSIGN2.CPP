#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

/*Question 1
void stringcat()
 {
  cout<<"String Concatenation:"<<endl;
  char dest[20] = "This is an";
  char src[20] = " example";
  cout<<"String 1: "<<dest<<endl;
  cout<<"String 2: "<<src<<endl;

  strcat(dest, src);
  cout<<"Final String: "<<dest<<endl<<endl;
 }

void stringcompare()
 {
  cout<<"String Compare:"<<endl;
  char leftstr[10], rightstr[10];
  cout<<"Enter string 1:"<<endl;
  gets(leftstr);
  cout<<"Enter string 2: "<<endl;
  gets(rightstr);

  if (strcmp(leftstr, rightstr) == 0)
   cout<<"Strings are equal"<<endl<<endl;
  else
   cout<<"Strings are not equal"<<endl<<endl;
 }

void stringcopy()
 {
  cout<<"String copy:"<<endl;
  char oldstr[10], newstr[10];
  cout<<"Enter string 1:"<<endl;
  gets(oldstr);
  cout<<"Enter string 2: "<<endl;
  gets(newstr);

  strcpy(oldstr, newstr);
  cout<<"New String 1: "<<newstr<<endl<<endl;
 }

void stringlength()
 {
  cout<<"String length:"<<endl;
  char stringleng[50];
  cout<<"Enter a string :"<<endl;
  gets(stringleng);

  cout<<"Length of string: "<<strlen(stringleng)<<endl<<endl;
 }

void stringlower()
 {
  cout<<"String Lower"<<endl;
  char aword[10];
  cout<<"Enter a word :"<<endl;
  gets(aword);

  strlwr(aword);
  cout<<"Word after lowering the case: "<<aword<<endl<<endl;
 }

void main()
 {
  clrscr();
  stringcat();
  stringcompare();
  stringcopy();
  stringlength();
  stringlower();
  getch();
 }
*/

/*Question 2
void mathfunc()
 {
  double x = 2.3;
  cout<<"Value on which operation is performed = "<<x<<endl;
  cout<<"Sine value of : "<<sin(x)<<endl;
  cout<<"Cosine value of : "<<cos(x)<<endl;
  cout<<"Tangent value of : "<<tan(x)<<endl;
  cout<<"Square root value of : "<<sqrt(x)<<endl;
  cout<<"Absolute value of : "<<abs(x)<<endl;
 }
void main()
 {
  clrscr();
  mathfunc();
  getch();
 }
*/

/*Question 3*/
extern int x = 32;
int b = 8;

void staticstorage()
 {

  cout<<"Static Storage: "<<endl;
  static int d = 0;
  d++;
  cout<<d<<endl;
 }
void storageclass()
 {
  cout<<"Auto Storage: "<<endl;
  auto a = 5.4;
  cout<<a<<endl;

  cout<<"External Storage: "<<endl;
  extern int b;
  cout<<"The value of extern variables x and b:\n"<<x,b<<endl;
  x = 15;
  cout<<"The value of modified variables x and b:\n"<<x,b<<endl;

  cout<<"Register Storage: "<<endl;
  register char z = 'G';

  cout<<"Value of the variable 'z': "<<z<<endl;
 }

void main()
 {
  clrscr();
  storageclass();
  staticstorage();
  staticstorage();
  getch();
 }