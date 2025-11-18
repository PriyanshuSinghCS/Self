#include <stdio.h>
void fun(int arr[]){ //yaha par array ki size likhne ki zrurt nhi hai kyuki abhi funcn ko nahi pata kaun sa array pass kia ja raha hai
    arr[0] = 10;
    return;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);//yaha par sirf array ka name pass karna hota hai
    printf("%d\n",arr[0]);
    return 0;
}