#include<stdio.h>
#include<conio.h>
#include<windows.h>
void opone();
void optwo();
int main()
{
int choice;
int s;
ask:while(1){

printf("1.Calculation of profit and loss\n");
printf("2.calculation of electric bill\n");
printf("3.exit\n");

         printf("enter ur choice");
         scanf("%d",&choice);
         switch(choice)
		  {
           case 1:system("cls");opone();break;
           case 2:system("cls");optwo();break;
           case 3:printf("are u sure u want to exit?Press 1 to exit\n");
           scanf("%d",&s);
           if(s==1)
		   exit(0);
		   else
		   goto ask;
           default:printf("enter the choice from 1 to 3 only\n");
		  }
        }
return 0;
getch();
}
 void opone()
{
	int decision;
	int income,sumi=0,sume=0,expend,profit,loss,sum;
 do{
    printf("enter the value of income\n");
     scanf("%d",&income);
     sumi=sumi+income;
       printf("do u want to enter more data for income press 1/0\n?");
        scanf("%d",&decision);
   }while(decision==1);

do{
    printf("enter the value of expeniture\n");
     scanf("%d",&expend);
     sume=sume+expend;
       printf("do u want to enter more data for income press 1or0\n?");
        scanf("%d",&decision);
   }while(decision==1);
   sum=sumi-sume;
   if(sum>=0)
   {
    profit=sum;
    printf("TODAY IS AWESOME DAY WE ARE AT THE PROFIT OF %d RS\n",sum);
    }
    else{
        loss=sum;
        printf("TODAY IS BAAD WE ARE AT THE LOSS OF %d RS\n",sum);
		}
}
void optwo()
{
float un;
float total;
printf("enter the value of unit");
scanf("%f",&un);
if(un>=0.0&&un<=50.0)
total=un*0.50;
else if(un>50&&un<=150)
total=50*0.50+(un-50)*0.75;
else if(un>150&&un<=250)
total=50*0.50+100*0.75+(un-150)*1.20;
else if(un>250)
total=1.50*un;
total=total+0.20*total;
if(total<1000)
printf("WE ARE ABLE TO SAVE ENERGY.BILL AMOUNT %0.3f rs\n",total);
else
printf("SAVE ENERGY,WE HAVE USED TOO MUCH OF ENERGY %0.3f rs\n",total);
}
