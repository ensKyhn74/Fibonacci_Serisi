#include <stdio.h>
// fibonacci serisi: 1 1 2 3 5 8 13 21 34 55 89 144,...
// girilen terim sayısı kadar fibonacci serisi ekrana yazdır

int main() 

{
 
  int a = 1,b = 1; // fibonacci serisinin ilk 2 terimi 1'dir
  int c;
  int i;
  int TerimSayisi;
  
  printf("fibonacci serisinin kac terimini gormek istersiniz?: ");
  scanf("%d",&TerimSayisi);
  
  printf("%d %d ",a,b);
  
   for(i = 2 ; i < TerimSayisi ; i++)
   {
     c = a + b;
     a = b;
     b = c;
     
     printf("%d ",c);
   }
   
  return 0;

}
/* Kullanıcı 5 girdiğinde output: 1 1 2 3 5
    i=2 için c=2(1+1)
    a=1
    b=2
    
    i=3 için c=3(1+2)
    a=2
    b=3
  
    i=4 için c=5(2+3)
    a=3
    b=5
 */