#include<stdio.h>
#include<string.h>

typedef struct Person 
{   	                   
	char CustomerName[20],TypeOfAccount[10];
	int Accno,Balance;
}
person;
int main()
{
    person p[5];
	char nm[20],Acon[10];
	printf("Welcome to Bank,\n\"Together we Prosper\"\n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("Person %d Details :\n",i+1);
		printf("Name : ");
		gets(nm);
		strcpy(p[i].CustomerName,nm);
		printf("Account Type : ");
		gets(Acon);
		strcpy(p[i].TypeOfAccount,Acon);
		fflush(stdin);	
		printf("Account Number : ");
		scanf("%d",&p[i].Accno);
		printf("Account Balance till now  : ");
		scanf("%d",&p[i].Balance);
		fflush(stdin);
	}
	int menu;
	menu=0;
	while(menu!=4)
	{
	printf("From here forth please refer customer by its index number \n ");
	printf("\n");
	printf("Following is the menu To help you  \n");
	printf("press 1 - Show all Records of all the customers from this Bank \n");
	printf("press 2 - Deposit amount in the account of a customer & shows updated balance\n");
	printf("press 3 - Withdraw amount from the account & shows updated balance\n");
	printf("press 4 - Exit\n");
	int dep,with,tot,num;
	printf("Enter option :\n");
	scanf("%d",&menu);
	{
	switch(menu)
	{
		case 1:
				for(i=0;i<5;i++)
	        {
                printf("Name : %s\tAccount type : %s\tAccount Number:%d\tAcount Balance:%d\n",p[i].CustomerName,p[i].TypeOfAccount,p[i].Accno,p[i].Balance);
	        }
				break;
		
		case 2:
			    printf(" Enter Person number to whom to Deposit Amount : \n");
			    scanf("%d",&num);
			    switch(num)
				{
					case 1:
					   printf("Amount to Deposit :\n");
				       scanf("%d",&dep);
				       tot=(p[0].Balance+dep);
				       printf("\nThe updated balance is %d\n",tot);
				       p[0].Balance=tot;
				       printf("\n");
					   break;
				    case 2:
				    	printf("Amount to Deposit :\n");
				       scanf("%d",&dep);
				       tot=(p[1].Balance+dep);
				       printf("The updated balance is %d\n",tot);
				       p[1].Balance=tot;
				       printf("\n");
					   break;
				    case 3:
				    	printf("Amount to Deposit :\n");
				       scanf("%d",&dep);
				       tot=(p[2].Balance+dep);
				       printf("The updated balance is %d\n",tot);
				       p[2].Balance=tot;
				       printf("\n%d\n",p[2].Balance);
				       printf("\n");
					   break;
				    case 4:
				    	printf("Amount to Deposit :\n");
				       scanf("%d",&dep);
				       tot=(p[3].Balance+dep);
				       printf("The updated balance is %d\n",tot);
				       p[3].Balance=tot;
				       printf("\n");
				       break;
				    case 5:
				        printf("Amount to Deposit :\n");
				       scanf("%d",&dep);
				       tot=(p[4].Balance+dep);
				       printf("The updated balance is %d\n",tot);
				       p[4].Balance=tot;
				       printf("\n");
				       break;
				    default:
				        printf("Invalid Person Number !!");
				        break;
				 }
				 break;
		case 3:
				printf(" Enter Person number to whom to Withdraw Amount : \n");
			    scanf("%d",&num);
			    switch(num)
				{
					case 1:
					   printf("Amount to Withdraw :\n");
				       scanf("%d",&with);
				       tot=(p[0].Balance-with);
				       printf("The updated balance is %d\n",tot);
				       p[0].Balance=tot;
				       printf("\n");
				       break;
				    case 2:
				    	printf("Amount to Withdraw :\n");
				       scanf("%d",&with);
				       tot=(p[1].Balance-with);
				       printf("The updated balance is %d\n",tot);
				       p[1].Balance=tot;
				       printf("\n");
				       break;
				    case 3:
				    	printf("Amount to Withdraw :\n");
				       scanf("%d",&with);
				       tot=(p[2].Balance-with);
				       printf("The updated balance is %d\n",tot);
				       p[2].Balance=tot;
				       printf("\n");
				       break;
				    case 4:
				    	printf("Amount to Withdraw :\n");
				       scanf("%d",&with);
				       tot=(p[3].Balance-with);
				       printf("The updated balance is %d\n",tot);
				       p[3].Balance=tot;
				       printf("\n");
				       break;
				    case 5:
				    	printf("Amount to Withdraw :\n");
				       scanf("%d",&with);
				       tot=(p[4].Balance-with);
				       printf("The updated balance is %d\n",tot);
				       p[4].Balance=tot;
				       printf("\n");
				       break;
				     default:
				             printf("Invalid Person Number !!");
				             break;
				}
				
				break;
		case 4 :
				printf("This is Exit always There to help You out  \n");
				break;
		default:
				printf("Invalid option \n");
				break;		
	}
    }
    }
    
	printf("This the End of code !!");
}


