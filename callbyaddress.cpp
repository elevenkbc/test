#include<stdio.h>
int main(void)
{
int a; //宣告一個整數變數a
int *ptr; //宣告一個指標變數ptr用來存取正數值變數的記憶體位置

a=5;//將5指定給整數變數a
ptr=&a;//將整數變數a的記憶體位置 指定給 指標變數 ptr

printf("\n 變數a的值為%d \n",a);
printf("\n 變數的a記憶體位置為 %p \n",&a); //%p 用來列印記憶體位置
printf("\n 指標變數ptr所在的記憶體位置為 %p \n",&ptr);
printf("\n 指標變數ptr的值為 %p \n",ptr);
printf("\n 指標變數ptr指到的值為%d \n",*ptr);//在這裡*ptr 表示取出指標變數指向記憶體位置的上面存放的值

return 0;
}
