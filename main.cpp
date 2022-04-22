#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
/*Choose a number 1-5 and display a sentence corresponds to  a number that you choose*/
int main()
{
  int num;
  
  cout << "Enter number 1-5: ";
   scanf("%d",&num);
   
   if(num > 5){
     cout << "Defeat";
   }else{
     switch(num){
       case 1:
         cout << "First Blood";
         break;
         
       case 2:
         cout << "Double Kill";
         break;
       
       case 3:
         cout << "Triple Kill";
         break;
        
       case 4:
         cout << "Maniac";
         break;
         
       case 5:
         cout << "Savage!!";
         break;
     }
   }
   return 0;
}
