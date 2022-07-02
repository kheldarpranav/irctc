#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    
    int c,Reservation(),Platform(),TicketforGeneral(),dw;
     printf("\n ***************************--IRCTC--***********************************");
do{
    printf("\n 1.Platform \n 2.Reservation \n 3.General \n 4.Track Your Train \n ");
    scanf("%d",&c);

 
    switch(c)
    {
        case 1:Platform();
        break;

        case 2:Reservation();
        break;

        case 3:TicketforGeneral();
        break;

        case 4:
        break;
    }
       printf("\n Enter 1 To Continue:-");
    scanf("%d",&dw);
}while(dw==1); 
return 0;
getch();
    
    
}
 

 int Reservation()
 {
     int TT,TicketforGeneral(),TicketforSlepper(),TicketforAC3(),TicketforAC2(),TicketforAC1();

     printf(" \n 1.Slepper \n 2.AC3 \n 3.AC2 \n 4.AC1 \n");
     scanf(" \n %d",&TT);

     switch(TT)
     {
         case 1:TicketforSlepper();
         break;

         case 2:TicketforAC3();
         break;

         case 3:TicketforAC2();
         break;

         case 4:TicketforAC1();
         break;

     }
     
       printf("\n ***************************--Happy Journey--***********************************");


 }

 int TicketforGeneral()
 {
     int ss,np,tf;
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    printf("\n Select Following Journy:- \n\t 1.Shegaon To Akola \t 2.Shegaon To Malkapur \t 3.Shegaon To Amravati \t 4.Shegaon To Bhusaval \n\t 5.Akola To Shegaon \t 6.Malkapur To Shegaon \t 7.Amravati To Shegaon \t 8.Bhusaval To Shegaon \n");
    scanf("%d",&ss);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    switch(ss)
    {
        case 1:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=50*np;
        printf("\n Amount is:%d",tf);
        break;

        case 2:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=40*np;
        printf("\n Amount is:%d",tf);
        break;

        case 3:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 4:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=90*np;
        printf("\n Amount is:%d",tf);
        break;

        case 5:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=50*np;
        printf("\n Amount is:%d",tf);
        break;

        case 6:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=40*np;
        printf("\n Amount is:%d",tf);
        break;

        case 7:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 8:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        tf=90*np;
        printf("\n Amount is:%d",tf);
        break;
    }
 }

 int TicketforSlepper()
 {
    int ss,np,tf,arr1[30],i,tn,day,month,year;
    char arr[30],p;
    printf("\n Enter Train Number:-");
    scanf("%d",&tn);
    printf("\n Enter Journey Date:-");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    printf("\n Select Following Journy:- \n\t 1.Shegaon To Akola \t 2.Shegaon To Malkapur \t 3.Shegaon To Amravati \t 4.Shegaon To Bhusaval \n\t 5.Akola To Shegaon \t 6.Malkapur To Shegaon \t 7.Amravati To Shegaon \t 8.Bhusaval To Shegaon \n");
    scanf("%d",&ss);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    switch(ss)
    {
        case 1:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);

        break;

        case 2:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 3:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 4:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;

        case 5:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);
        break;

        case 6:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 7:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 8:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;
    }
            printf("\n Enter 'P' To Print:-");
    scanf("%s",&p);
    if(p=='p'|| p=='P')
    {
        printf("\n **************************************--IRCTC--******************************************");
        printf("\n PNR Number:-           Train Number:-%d            Date of Journey:-%d/%d/%d     ",tn,day,month,year);
        printf("\n Class:-Sleeper                From:-                    Destination:-         ");
        printf("\n ------------------------------------------------------------------------------------------");
        for( i = 1; i < np+1; i++)
        {
            printf("\n Name of Passengers:-%s",arr+i);
            printf("\n Age of Passenger:-%d",arr1+i);
        }
        printf("\n-------------------------------------------------------------------------------------------");
        printf("\n Amount:-%d",tf);

    }

}

 int TicketforAC3()
 {
     int ss,np,tf,arr1[30],i,day,month,year,tn;
    char arr[30],p;
    printf("\n Enter Train Number:-");
    scanf("%d",&tn);
    printf("\n Enter Journey Date:-");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    printf("\n Select Following Journy:- \n\t 1.Shegaon To Akola \t 2.Shegaon To Malkapur \t 3.Shegaon To Amravati \t 4.Shegaon To Bhusaval \n\t 5.Akola To Shegaon \t 6.Malkapur To Shegaon \t 7.Amravati To Shegaon \t 8.Bhusaval To Shegaon \n");
    scanf("%d",&ss);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    switch(ss)
    {
        case 1:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=150*np;
        printf("\n Amount is:%d",tf);
        
        break;

        case 2:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=130*np;
        printf("\n Amount is:%d",tf);
        break;

        case 3:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=210*np;
        printf("\n Amount is:%d",tf);
        break;

        case 4:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=230*np;
        printf("\n Amount is:%d",tf);
        break;

        case 5:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=150*np;
        printf("\n Amount is:%d",tf);
        break;

        case 6:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=130*np;
        printf("\n Amount is:%d",tf);
        break;

        case 7:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=210*np;
        printf("\n Amount is:%d",tf);
        break;

        case 8:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=230*np;
        printf("\n Amount is:%d",tf);
        break;
    }
    printf("\n Enter 'P' To Print:-");
    scanf("%d",&p);
    if(p=='p' || p=='P')
    {
        printf("\n **************************************--IRCTC--******************************************");
        printf("\n PNR Number:-           Train Number:-%d            Date of Journey:-%d/%d/%d     ",tn,day,month,year);
        printf("\n Class:-AC3                From:-                    Destination:-         ");
        printf("\n ------------------------------------------------------------------------------------------");
        for( i = 1; i < np+1; i++)
        {
            printf("\n Name of Passengers:-%s",arr+i);
            printf("\n Age of Passenger:-%d",arr1+i);
        }
        printf("\n-------------------------------------------------------------------------------------------");
        printf("\n Amount:-%d",tf);

    }

 }

 int TicketforAC2()
 {
     int ss,np,tf,arr1[30],i,day,month,year,tn;
    char arr[30],p;
        printf("\n Enter Train Number:-");
    scanf("%d",&tn);
    printf("\n Enter Journey Date:-");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    printf("\n Select Following Journy:- \n\t 1.Shegaon To Akola \t 2.Shegaon To Malkapur \t 3.Shegaon To Amravati \t 4.Shegaon To Bhusaval \n\t 5.Akola To Shegaon \t 6.Malkapur To Shegaon \t 7.Amravati To Shegaon \t 8.Bhusaval To Shegaon \n");
    scanf("%d",&ss);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    switch(ss)
    {
        case 1:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);
        break;

        case 2:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 3:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 4:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;

        case 5:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);
        break;

        case 6:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 7:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 8:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;
    }
                printf("\n Enter 'P' To Print:-");
    scanf("%d",&p);
    if(p=='p'|| p=='P')
    {
        printf("\n **************************************--IRCTC--******************************************");
        printf("\n PNR Number:-           Train Number:-%d            Date of Journey:-%d/%d/%d     ",tn,day,month,year);
        printf("\n Class:-AC2                From:-                    Destination:-         ");
        printf("\n ------------------------------------------------------------------------------------------");
        for( i = 1; i < np+1; i++)
        {
            printf("\n Name of Passengers:-%s",arr+i);
            printf("\n Age of Passenger:-%d",arr1+i);
        }
        printf("\n-------------------------------------------------------------------------------------------");
        printf("\n Amount:-%d",tf);

    }

 }

 int TicketforAC1()
 {
    int ss,np,tf,arr1[30],i,day,month,year,tn;
    char arr[30],p;
        printf("\n Enter Train Number:-");
    scanf("%d",&tn);
    printf("\n Enter Journey Date:-");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    printf("\n Select Following Journy:- \n\t 1.Shegaon To Akola \t 2.Shegaon To Malkapur \t 3.Shegaon To Amravati \t 4.Shegaon To Bhusaval \n\t 5.Akola To Shegaon \t 6.Malkapur To Shegaon \t 7.Amravati To Shegaon \t 8.Bhusaval To Shegaon \n");
    scanf("%d",&ss);
    printf("\n ---------------------------------------------------------------------------------------------------------------------");
    switch(ss)
    {
        case 1:printf("\n Enter Number of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);
        break;

        case 2:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 3:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 4:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;

        case 5:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=100*np;
        printf("\n Amount is:%d",tf);
        break;

        case 6:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=80*np;
        printf("\n Amount is:%d",tf);
        break;

        case 7:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=160*np;
        printf("\n Amount is:%d",tf);
        break;

        case 8:printf("\n Number Of Passengers:-");
        scanf("%d",&np);
        for ( i = 1; i < np+1; i++)
        {
            printf("\n Name Of Passenger-%d:-",i);
            scanf("%s",arr+i);
            printf("\n Age of Passenger-%d:-",i);
            scanf("%d",arr1+i);
        }
        tf=180*np;
        printf("\n Amount is:%d",tf);
        break;
    }
                printf("\n Enter 'P' To Print:-");
    scanf("%d",&p);
    if(p=='p'|| p=='P')
    {
        printf("\n **************************************--IRCTC--******************************************");
        printf("\n PNR Number:-           Train Number:-%d            Date of Journey:-%d/%d/%d     ",tn,day,month,year);
        printf("\n Class:-AC                From:-                    Destination:-         ");
        printf("\n ------------------------------------------------------------------------------------------");
        for( i = 1; i < np+1; i++)
        {
            printf("\n Name of Passengers:-%s",arr+i);
            printf("\n Age of Passenger:-%d",arr1+i);
        }
        printf("\n-------------------------------------------------------------------------------------------");
        printf("\n Amount:-%d",tf);

    }
    else
    {

    }
 }

 int Platform()
 {
    
    int np,a,p;
    printf("\n Number of Tickets:-");
    scanf("%d",&np);
    a=10*np;
    printf("\n Amount is:-%d",a);
    if(p=='p'|| p=='P')
    {
        printf("\n **************************************--IRCTC--******************************************");
        
        printf("\n ------------------------------------------------------------------------------------------");
        
        printf("\n-------------------------------------------------------------------------------------------");
        printf("\n Amount:-%d",a);

    }
 }