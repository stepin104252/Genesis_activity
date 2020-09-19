#include "bank.h"

void main(){
	char pass[50],passw[50]="L&T";int i,ch,choice;
	printf("\t\t:::::L&T Bank pvt. ltd::::::\nEnter User Type\n1.customer care\n2.cashier\n");
	printf("\nEnter your choice\n");
	scanf("%d",&ch);
	if(ch==1){
		printf("Give Login Password: ");
		scanf("%s",&pass);
		if(strcmp(pass,passw)==0){
		printf("\n\nPassword Matched!!\nLOADING");
        for(i=0;i<=6;i++)
        {
            delay(100000000);
            printf(".");
        }
        system("cls");
        menu1();
		}
		else{
	printf("\n\n!!Wrong password!!");
            error_login1:
            printf("\nEnter 1:Try Again\n 0:Exit:");
            scanf("%d",&choice);
            if (choice==1)
                    {

                        system("cls");
                        main();
                    }

            else if (choice==0)
               {
                system("cls");
                exit_k();
				}
            else{
			 printf("\nInvalid!");
             delay(1000000000);
             system("cls");
             goto error_login1;
			 }
	   }
	}
	else if(ch==2){
		printf("Give Login Password: ");
		scanf("%s",&pass);
		if(strcmp(pass,passw)==0){
		printf("\n\nPassword Matched::\nLOADING");
        for(i=0;i<=6;i++)
        {
            delay(100000000);
            printf(".");
        }
        system("cls");
        menu2();
		}
		else{
	printf("\n\nWrong password!!");
            error_login2:
            printf("\nEnter 1:Try Again\n 0:Exit:");
            scanf("%d",&choice);
            if (choice==1)
            {
            system("cls");
              main();
            }

            else if (choice==0)
               {
                system("cls");
                exit_k();
				}
            else{
			 printf("\nInvalid!");
             delay(1000000000);
             system("cls");
             goto error_login2;
			 }
	   }
	}
	else{
       printf("\nChoose A correct User");
       delay(1000000000);
       main();
        }

}
