#include<iostream.h>
#include<conio.h>

int main()
{
    int n, e, full = 0, buffer[10], menu = 0;
    cout<<"\n Enter the size of buffer: ";
    cin>>n;
    e = n;
    do
    {
        cout<<"\n1. Produce \n2.Consume \n3.Exit : ";
        cin>>menu;
        switch(menu)
        {
            case 1: if(full == n)
                    {
                        cout<<"\n Overflow";
                    }
                    else
                    {
                        int a;
                        cout<<"\n Enter the value to be produced:";
                        cin>>a;
                        e--;
                        buffer[full] = a;

                        cout<<"\nThe Buffer is: "<<endl;
                        for(int i = 0; i <= full; i++)
                        {
                            cout<<buffer[i]<<" ";
                        }

                        full++;

                    }
                    break;
            case 2: if(e == n)
                    {
                        cout<<"\nUnderflow";
                    }
                    else
                    {
                        full--;
                         cout<<"\nThe Buffer is: "<<endl;
                        for(int i = 0; i <= full; i++)
                        {
                            cout<<buffer[i]<<" ";
                        }

                        e++;

                    }
                    break;
        }
    }while(menu <= 2);
    return 0;
}
