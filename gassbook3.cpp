#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int id_1,data[50],count;
char name[50],no[10];
void order()
{       system("color  F3");

	printf("\nHow many gas you will order now: ");
	printf("\nPress<1> 1 gas\nPress<2> 2 gases\ndefault <3> gases\nchoose a valid option : ");
        scanf("%d",&count);
        switch(count)
        {
     		case 1:
			printf("Order 1 gas\nConform Your order");
			break;
                case 2:
			printf("Order 2 gases\nConform Your order");
      			break;
		default:
 			printf("Order 3 gases at a time\nConform Your order");
         }

}
void payment()
{       system("color  F4");
    	int choice;
    	char id[20];
    	printf("\nCHOOSE AN OPTION HOW YOU PAYMENT\n1 PAYTM\n2 PHONEPAY\n3 CREDIT/DEBIT CARD\n4 OFFLINE PAYMENT\n");
    	scanf("%d",&choice);
    	switch(choice)
	{

		case 1:
               		printf("\nYou choose PAYTM");
                	printf("\nEnter your paytm id number: ");
                	scanf("%s",id);
			break;
        	case 2:

               		printf("\nYou choose Phonepay");
                	printf("\nEnter your phonepay id number: ");
                	scanf("%s",id);
			break;
        	case 3:

               		printf("\nYou choose credit/debit");
                	printf("\nEnter your card id number: ");
                	scanf("%s",id);
		  	break;
        	default:
                 	printf("\nOffline payment");

	}
}
void lpguser()
{
	system("color  Fb");
	printf("----------------------------------------------------------------------------------");
	printf("\nEnter your name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your valid id number: ");
	scanf("%d",&id_1);
	printf("\n Lpg cylinders");
	printf("\nyour choice lpg  cylinders\n");
	printf("Your id %d\n",id_1);
	printf("your name: ");
	puts(name);
        order();
        payment();
	printf("Date :%s\n", __DATE__ );
        printf("Time :%s\n", __TIME__ );
	printf("\nyou order %d gas\nyour is sucessful\nyour gas will delivare within 24 days\n",count);
	printf("----------------------------------------------------------------------------------");
}
void indianuser()
{
	system("color  Fe");
	printf("----------------------------------------------------------------------------------");
	printf("\nEnter your name: ");
	gets(name);
	printf("\nEnter your valid id number: ");
	scanf("%d",&id_1);
	printf("\nIndian cylinders");
	printf("\nyour choice Indian cylinders\n");
	printf("Your id %d\n",id_1);
	printf("your name: ");
	puts(name);
	order();
        payment();
        printf("Date :%s\n", __DATE__ );
        printf("Time :%s\n", __TIME__ );
	printf("\nyou order %d gas\nyour order is sucessful\nyour gas delivary within 24 days\n",count);
}
void bharatuser()
{
	system("color  Fd");
	printf("----------------------------------------------------------------------------------");
	printf("\nEnter your name: ");
	gets(name);
	printf("\nEnter your valid id number: ");
	scanf("%d",&id_1);
	printf("\nBharat cylinders");
	printf("\nyour choice Bharat cylinders\n");
	printf("Your id %d\n",id_1);
	printf("your name: ");
	puts(name);
   	order();
        payment();
        printf("Date :%s\n", __DATE__ );
        printf("Time :%s\n", __TIME__ );
        printf("\nyou order %d gas\n your order is sucessful\nyour gas delivary within 24 days\n",count);
	printf("----------------------------------------------------------------------------------");
}

void newuser()
{
	system("color  Fc");
	int click;
        char choice;
	printf("YOU ARE A NEW CUSTOMER\n PLEASE OPEN A BOOK WITH VALID DOCUMENT");
	fflush(stdin);
	printf("\nENTER YOUR NAME: ");
	gets(name);
	printf("\nEnter your ADHER NO/VOTER CARD NO/PAN NO OR ANY VALID CARD NO:");
	gets(no);
	printf("\nyour registration is succesful\n Please give a id for security ");
	scanf("%d",&id_1);
        printf("\n\nyou want to book now - yes or no\nif yes press y or no press n:");
        fflush(stdin);
        choice = getche();
        if(choice == 'y'){
        printf("\n1.LPG big cylinders\n2.Indian cylinders\n3.Bharat cylinders\ndefault.order next time");
        printf("\nEnter your choice:");
        scanf("%d",&click);
        switch(click)
{
		case 1:
			lpguser();
			break;
		case 2:
		        indianuser();
			break;
                case 3:
			bharatuser();
			break;


	        default:
			printf("\nOrder next time !");
		}
       }


}



void cancel()
{
	  system("color  Fb");
          int choice;
          printf("----------------------------------------------------------------------------------");
          printf("\ncancel your order ");
	  printf("\nEnter your valid id number: ");
	  scanf("%d",&id_1);
	  printf("\nTell us which cylinder you booked\n1 LPG\n2 INDIAN\n3 BHARAT");
	  scanf("%d",&choice);
	  switch(choice)
                  {
			case 1:
				printf("\nYou booked LPG gas");
                                printf("\nWe cut 15% from your payment");
                                break;
                        case 2:
		                printf("\nYou booked Indian gas");
                                printf("\nWe cut 10% from your payment");
                                break;
                        default:

				printf("\nYou booked Bharat gas");
                                printf("\nWe cut 8% from your payment");
                                break;
                   }
          printf("Date :%s\n", __DATE__ );
          printf("Time :%s\n", __TIME__ );
	  printf("\nyour previous  order with name and id cancel sucessfully\nwe will resend your pay as soon as posible");
	  printf("----------------------------------------------------------------------------------");
}



int main()
{
	 system("color  Fa");
         int press;
	 char choice = 'y';
	 printf("\n\t\t\t\t\tWELCOME\n\t\t\t\tThank you for comming :-)");
	 fflush(stdin);
	 printf("\n1.LPG big cylinders\n2.Indian cylinders\n3.Bharat cylinders\n4.Make a new book\n5.exit()\ndefault.cancel your orders");

	 printf("\nEnter your choice:");
	 scanf("%d",&press);
         do{
	 switch(press)
           {
		 case 1:
			lpguser();
			break;
		 case 2:
			indianuser();
			break;
                 case 3:
			bharatuser();
			break;
		 case 4:
			newuser();
			break;
                 case 5:
                        exit(0);
		default:
		        cancel();
          }
         printf("\n\nyou want to continue yes or no\nif yes press y or no press n:");
         choice = getche();
	}while(choice == 'y');
return 0;


}




