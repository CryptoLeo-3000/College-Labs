#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char ch[6];
    long double num;
    int flag = 0,l = 0;
    cout << "Enter the 5 digit character value ::";
    for(int i = 0;i<6;i++)
    {
	cin >> ch[i];
    }

    int h = strlen(ch) - 1;

    cout << "Enter the 5 digit numeric value value ::";
    cin>>num;

    try
    {
        if(y > 12345 || y < 54321)
        {
            throw y;
        }
        else
        {
            cout<<"The entered string is:: "<<y;
        }
    }
    catch(char ex)
    {
        cout<<"Exception: The number cannot be between the range of 12345 and 54321 :: "<<ex;
    }


    try
    {
        for (int i = 0; x[i] != '\0'; ++i)
        {
            if(x[i] == 'a' || x[i] == 'k')
            {
                throw x;
            }
            else
            {
                cout<<"The entered string is:: "<<x;
            }
        }
    }
    catch(char ex)
    {
        cout<<"Exception: The string entered cannot contain characters 'a' and 'k' :: "<<ex;
    }


    try
    {
        if (x[l++] != x[h--])
        {
            throw x;
        }
        else
        {
            cout<<"The entered string is :: "<<x;
        }
    }
    catch(char ex)
    {
        cout<<"The entered string should not be a palindrome ::"<<ex;
    }


    return 0;
}
