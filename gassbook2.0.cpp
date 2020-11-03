#include<stdio.h>
#include<string.h>
#include<conio.h>

void newcastomer(){
	printf("----------------------------------------------------------------------------------");
                                                        printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							
							printf("\nacetylin cylinders");
							printf("\nyour choice acetylin cylinders\n");
							printf("Your id %d\n",id);
							printf("your name: ");
							puts(name);
							 printf("Date :%s\n", __DATE__ );
                                                        printf("Time :%s\n", __TIME__ );
							printf("\nyour order is sucessful \n your gas delivary within 24 days\n");
							printf("----------------------------------------------------------------------------------");
}
	

void data(){
		int press;

		int id,data[50];
		char name[50],no[10];
		
		
			printf("\nThank you for comming :-)");



			
			fflush(stdin);
			
				printf("\n1.LPG big cylinders\n2.LPG mini cylinders\n3.acetylin cylinders\n4.Make a new book\ndefault.cancel your orders");

		

			printf("\nEnter your choice:");
			scanf("%d",&press);
			switch(press){

					case 1:
							printf("----------------------------------------------------------------------------------");
							printf("\nEnter your name: ");
							gets(name);
							printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							
							printf("\nLpg big cylinders");
							printf("\nyour choice lpg big cylinders\n");
							printf("Your id %d\n",id);
							printf("your name: ");
							puts(name);
					                printf("Date :%s\n", __DATE__ );
                                                        printf("Time :%s\n", __TIME__ );
							printf("\nyour order is sucessful\nyour gas delivary within 24 days\n");
							printf("----------------------------------------------------------------------------------");
							break;
					case 2:
							printf("----------------------------------------------------------------------------------");
							printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							printf("\nLpg mini cylinders");
							printf("\nyour choice mini cylinders\n");
							printf("Your id %d\n",id);
							printf("your name: ");
							puts(name);
							 printf("Date :%s\n", __DATE__ );
                                                        printf("Time :%s\n", __TIME__ );
							printf("\nyour order is sucessful\nyour gas delivary within 24 days\n");
							printf("----------------------------------------------------------------------------------");
							break;
                                        case 3:
							/*printf("----------------------------------------------------------------------------------");
                                                        printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							
							printf("\nacetylin cylinders");
							printf("\nyour choice acetylin cylinders\n");
							printf("Your id %d\n",id);
							printf("your name: ");
							puts(name);
							 printf("Date :%s\n", __DATE__ );
                                                        printf("Time :%s\n", __TIME__ );
							printf("\nyour order is sucessful \n your gas delivary within 24 days\n");
							printf("----------------------------------------------------------------------------------");*/
					                newcastomer();
							break;
					case 4:
							printf("YOU ARE A NEW CUSTOMER\n PLEASE OPEN A BOOK WITH VALID DOCUMENT");

							fflush(stdin);
							printf("\nENTER YOUR NAME: ");
							gets(name);
							printf("\nEnter your ADHER NO/VOTER CARD NO/PAN NO OR ANY VALID CARD NO:");
							gets(no);
							printf("\nyour registration is succesful\n Please give a id for security ");
							scanf("%d",&id);
							
							break;


					default:
							printf("----------------------------------------------------------------------------------");
							
							printf("\ncancel your order ");
							printf("\nEnter your valid id number: ");
							scanf("%d",&id);
							
							printf("\nyour previous  order with name and id cancel sucessfully\n");
							printf("----------------------------------------------------------------------------------");
}

}
 
	
int main()
{
	int press,i,number;

	
	
	



	char choice = 'y';


	do{
						
		data();
		printf("\n\nyou want to continue yes or no\nif yes press y or no press n:");
		choice = getche();
		
	}while(choice == 'y');
     

	

	return 0;
	
	
}
