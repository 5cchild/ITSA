#include <stdio.h>

int main()
{
     int a,b; 
     int ans=1; //起始數為1
     int i=2; //質因數分解由2開始
     scanf("%d %d",&a,&b); 

     //若a、b小於2，不計算
     if( a==1 || b==1 ) printf("1");
     else if( a>=i && b>=i )
     {
          //a,b皆大於等於2時，開始質因數分解 
          while( a>=i && b>=i ) 
          { 
               //餘數皆為0時，2開始質因數分解，若皆被2分完，則陸續增加為3、4、5…… 
               while( a%i==0 && b%i==0 ) 
               { 
                    ans = ans * i; 
                    a /= i; 
                    b /= i; 
               } 
               i++; 
          } 
          printf("%d\n",ans); 
     }
     return 0;
}