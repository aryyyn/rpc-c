#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a,i,num,pick;
	
	levi:
		system("cls");
	printf("\t \t \t ** Rock Paper Or Scissor** \n");
	printf("\n Enter Your Pick(1 for rock, 2 for paper and 3 for scissor) \n : ");
	scanf("%d", &a);
	if (a == 1){
        	printf("\n You Picked Rock");
		}
		else if (a == 2){
			printf("\n You picked Paper");
			
		}
		else if (a == 3){
			printf("\n You picked scissor");
		}
		
	
	 for (i = 1; i <= 1; i++)  
    {  
    	srand(time(NULL));
         num = rand() % 3 + 1; 
         	
 }
         
        if (num == 1){
        	printf("\n The computer picked rock \n");
		}
		else if (num == 2){
			printf("\n The computer picked paper \n ");
			
		}
		else if (num == 3){
		
			printf("\n The computer picked scissor \n ");
		}
	

   if (a == 1 && num == 1){
   	printf("\n DRAW!");
   }
   
   else if (a == 2 && num == 2){
   	printf("\n DRAW!");
   
   }
   else if(a == 3 && num == 3){
   	printf("\n DRAW!");
   
   }
   
    else if(a == 1 && num == 2){
   	printf("\n You Loose!");
   
   }
   
   else if(a == 1 && num == 3){
   	printf("\n You Win!");
   
   }
    else if(a == 2 && num == 1){
   	printf("\n You Win!");
   
   }
    else if(a == 2 && num == 3){
   	printf("\n You Loose!");
   
   }
    else if(a == 3 && num == 1){
   	printf("\n You Loose!");
   
   }
    else if(a == 3 && num == 2){
   	printf("\n You Win!");
   
   }
   
   else{
   	goto levi;
   }
   
   
   printf("\n \n \n\ ");
   printf("Do you want to continue(1/2): ");
   scanf("%d",&pick);
   if (pick == 1){
   	goto levi;
   }
   else
   {
   	exit(0);
   }
}
