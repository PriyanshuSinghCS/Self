// Create a structure type 'book' with name, price 
// and number of pages as its attributes
#include <stdio.h>
#include <string.h>
int main(){
    struct book{
        char name[40];
        float price;
        int noOfPages;
    }a,b,c;
    a.noOfPages = 100;
    a.price = 411.5;
    //a.name = "Stranger Things"; can't do like this
    strcpy(a.name,"Stranger Things");
    
    printf("%d\n",a.noOfPages);
    printf("%.2f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}