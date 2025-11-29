// Create a structure 'date' that contains three menbers namely date,month and year.
// Create 2 structures variables with different dates and now compare two.if the dates
// are equal then display message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <string.h>
int main(){
    typedef struct date{
        int date,month,year;
    }date;

    date a,b,c;

    a.date = 5;
    a.month = 11;
    a.year = 2025;

    b.date = 5;
    b.month = 12;
    b.year = 2025;

    int check = 0;
    // if(a.date!=b.date) check = 1;
    // if(a.month!=b.month) check = 1;
    // if(a.year!=b.year) check = 1;
    // if(check==0) printf("Equal");
    // else printf("Unequal");

    c=a;
    if(a.date!=c.date) check = 1;
    if(a.month!=c.month) check = 1;
    if(a.year!=c.year) check = 1;
    if(check==0) printf("Equal");
    else printf("Unequal");
    return 0;
}