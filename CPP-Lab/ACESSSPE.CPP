#include<iostream.h>
#include<conio.h>
class car
 {
  int speed;

  protected:
  int exhaust;
  int mileage;

  public:
  void startcar()
   {
    speed = 20;
    cout<<"Car has been started"<<endl;
    cout<<"Speed = "<<speed<<endl;
   }
  void stopcar()
   {
    cout<<"No. of exhaust pipes: "<<exhaust<<endl;
    cout<<"Mileage: "<<mileage<<endl;
    cout<<"Car has stopped"<<endl;
   }
 };
class carfeature : public car
 {
  public:
  void features()
   {
    exhaust = 2;
    mileage = 40;
    startcar();
    stopcar();
   }
 };
void main()
 {
  clrscr();
  carfeature driver;
  cout<<driver.exhaust<<endl;
  driver.features();
  getch();
 }