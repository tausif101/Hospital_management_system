#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
int pcount=0,dcount=0,scount=0,phacount=0; /*pcount use for patient input counting,dcount use for doctor input counting,scount use for staff input counting,phacount use for pharmacy input counting*/

struct patient{
        int registrationno;
        char name[30];
        int phno;
        char address[50];
        char guardian[30];
        char sex[7];
        int age;
        char bloodgroup[5];
        char disease[30];
        char refer[30];

}p[100];/*p[100] use for  allocating space in memory for patient data*/
struct doctor{
        int registrationno;
        char name[20];
        int phno;
        char specialist[80];
}d[100];/*d[100] use for  allocating space in memory for doctor data*/
struct staff{
        int registrationno;
        char name[20];
        int phno;
        char grade[20];
        int salary[10];
        char join[20];

}s[100];/*s[100] use for  allocating space in memory for staff all data*/
struct pharmacy{
    int registrationno;
    char name[30];
    char type[20];
    int buy_price;
    int buy;
    int sell;
    int sell_price;

}phar[100];/*phar[100] use for  allocating space in memory for pharmacy all data*/

    void patient();//patient menu
    void p_view();//all patient data view
    void p_search();//patient data search
    void p_delete();//patient data delete
    void p_add();//patient data add

    void doctor();//doctor menu
    void d_view();//all doctor data view
    void d_search();//doctor data search
    void d_delete();//doctor data delete
    void d_add();//doctor data add

    void staff();//staff menu
    void s_view();//all staff data view
    void s_search();//staff data search
    void s_delete();//staff data delete
    void s_add();//staff data add

    void pharmacy();//pharmacy menu
    void pha_view();//all pharmacy data view
    void pha_search();//pharmacy search data
    void pha_delete();//pharmacy data delete
    void pha_add();//pharmacy data add

    void about();//programmers details
    void quit();//use for quit

int main(void)
{
    printf("press any key to continue...");
    getch();
    int choice_number;
    time_t current_time;
    time(&current_time);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tDate: %s\n",ctime(&current_time));

    while(1)
    {


        printf("\t\t\t\t\t\t\t\t:: WELCOME TO EAST WEST HOSPITAL MANAGEMENT SYSTEM  ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              1.Doctor                            ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              2.Patient                           ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              3.Staff                             ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              4.Pharmacy                          ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              5.About Program                     ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::              6.QUIT                              ::\n");Sleep(50);
        printf("\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");Sleep(50);


        printf("\n\t\t\t\tENTER YOUR CHOICE:");
        scanf("%d",&choice_number);
        if(choice_number==1)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWELLCOME TO DOCTOR SECTION");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            doctor();
        }
        else if(choice_number==2)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWELLCOME TO PATIENT SECTION");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            patient();
        }
         else if(choice_number==3)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWELLCOME TO STAFF SECTION");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            staff();
        }
         else if(choice_number==4)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tWELLCOME TO PHARMACY SECTION");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            pharmacy();
        }
         else if(choice_number==5)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELLCOME TO ABOUT");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            about();
        }
        else if(choice_number==6)
        {
           printf("\t::::::::::::::::::::::");
            quit();
           printf("::::::::::::::::::::::\n");
            break;
        }

     }
    getch();

    return 0;
}
//PATIENT SECTION
void patient()
{

            int ch;
            while(1)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.add new patient");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2.search patient information");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3.delete patient");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4.view all patient");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t5.quit");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter your choice(1 to 5):");
                scanf("%d",&ch);
                if(ch==1)
                    {
                     p_add();//add new patient data
                    }
                else if(ch==2)
                    {
                     p_search();//search patient data
                    }
                else if(ch==3)
                    {
                     p_delete();//delete patient data
                    }
                else if(ch==4)
                    {
                     p_view();//all view patient
                    }
                else
                    {
                     break;
                    }
            }

}
//add new patient
void p_add()
{
         char ch;
         int i;
         for(i=0;i<100;i++)
            {
                    printf("\nRegistration no(In number):");
                    scanf("%d",&p[i].registrationno);
                    fflush(stdin);
                    printf("\nPatient name:");
                    scanf("%s",&p[i].name);
                    fflush(stdin);
                    printf("\nGuardian name:");
                    scanf("%s",&p[i].guardian);
                    fflush(stdin);
                    printf("\nSex:");
                    scanf("%s",&p[i].sex);
                    fflush(stdin);
                    printf("\nAge(In number):");
                    scanf("%d",&p[i].age);
                    fflush(stdin);
                    printf("\nPhone number:");
                    scanf("%d",&p[i].phno);
                    fflush(stdin);
                    printf("\nAddress:");
                    scanf("%s",&p[i].address);
                    fflush(stdin);
                    printf("\nBlood group:");
                    scanf("%s",&p[i].bloodgroup);
                    fflush(stdin);
                    printf("\nDisease or problem to treatment:");
                    scanf("%s",&p[i].disease);
                    fflush(stdin);
                    printf("\nRefer doctor:");
                    scanf("%s",&p[i].refer);
                    fflush(stdin);
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                    printf("\nDo you want to add more data(y/n):");
                    scanf("%c",&ch);
                    fflush(stdin);
                    pcount++;
                    if(ch!='y')
                    {
                        break;
                    }

            }

}
//search patient information
void p_search()
{
            int i,regno=0,flag;
            char ch;
            while(1)
              {
                  flag=0;
                  printf("\nRegistration number:");
                  scanf("%d",&regno);
                  for(i=0;i<pcount;i++)
                    {
                     if(regno==p[i].registrationno)
                        {
                            flag=1;
                            printf("\n!!!!!!!!DATA FOUND!!!!!!!!!");
                            printf("\nPatient name:");
                            printf("%s",p[i].name);
                            printf("\nGuardian name:");
                            printf("%s",p[i].guardian);
                            printf("\nSex:");
                            printf("%s",p[i].sex);
                            printf("\nAge(In number):");
                            printf("%d",p[i].age);
                            printf("\nPhone number:");
                            printf("%d",p[i].phno);
                            printf("\nAddress:");
                            printf("%s",p[i].address);
                            printf("\nBlood group:");
                            printf("%s",p[i].bloodgroup);
                            printf("\nDisease or problem to treatment:");
                            printf("%s",p[i].disease);
                            printf("\nRefer doctor:");
                            printf("%s",p[i].refer);
                            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                            }
                    }
                            if(flag==0)
                            {
                                printf("not found!!");
                            }

                        printf("\nDo you want to search more record(y/n):");
                        fflush(stdin);
                        scanf("%c",&ch);
                        if(ch!='y')
                        {
                            break;
                        }
                }

}
//delete patient data
void p_delete()
{
        int i,regno;
        char ch;
        if(pcount!=0)
         {
            while(1)
            {
                printf("enter the registration number:");
                scanf("%d",&regno);
                for(i=0;i<pcount;i++)
                {
                    if(regno==p[i].registrationno)
                    {
                        p[i].registrationno='\0';
                        printf("\nyour record  is deleted\n");
                    }
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDelete another patient data(y/n):");
                fflush(stdin);
                scanf("%c",&ch);
                if(ch!='y')
                 {
                    break;
                 }
            }
          }

            else
                {
                    printf("no data here!entry first");
                }
}
//view all patient data
void p_view()
{
    int i;
    if(pcount!=0)
    {
    for(i=0;i<pcount;i++)
      {
        printf("\nRegistration no:");
        printf("%d",p[i].registrationno);
        printf("\nPatient name:");
        printf("%s",p[i].name);
        printf("\nGuardian name:");
        printf("%s",p[i].guardian);
        printf("\nSex:");
        printf("%s",p[i].sex);
        printf("\nAge(In number):");
        printf("%d",p[i].age);
        printf("\nPhone number:");
        printf("%d",p[i].phno);
        printf("\nAddress:");
        printf("%s",p[i].address);
        printf("\nBlood group:");
        printf("%s",p[i].bloodgroup);
        printf("\nDisease or problem to treatment:");
        printf("%s",p[i].disease);
        printf("\nRefer doctor:");
        printf("%s",p[i].refer);
        printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
      }
    }
    else
    {
        printf("\t\t\tno data here!entry first.");
    }
}
//DOCTOR SECTION
void doctor()
{

            int ch;
            while(1)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.add new doctor");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2.search doctor information");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3.delete doctor");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4.view all doctor");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t5.quit");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\n\t\t\t\t\t\t\t\t\t\tEnter your choice(1 to 5):");
                scanf("%d",&ch);
                if(ch==1)
                    {
                     d_add();//add new  doctor data
                    }
                else if(ch==2)
                    {
                     d_search();//search doctor information data
                    }
                else if(ch==3)
                    {
                     d_delete();//delete doctor data
                    }
                else if(ch==4)
                    {
                     d_view();//view all doctor data
                    }
                else
                    {
                     break;
                    }
            }
}
//add new doctor data
void d_add()
{
         char ch;
         int i;
         for(i=0;i<100;i++)
            {
                printf("\nID number:");
                scanf("%d",&d[i].registrationno);
                fflush(stdin);
                printf("\nname:");
                scanf("%s",&d[i].name);
                fflush(stdin);
                printf("\nphone number:");
                scanf("%d",&d[i].phno);
                fflush(stdin);
                printf("\nspecialist:");
                scanf("%s",&d[i].specialist);
                fflush(stdin);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDo you want to add more record(y/n):");
                scanf("%c",&ch);
                fflush(stdin);
                dcount++;
                if(ch!='y')
                    {
                        break;
                    }
            }
}
//search doctor data
void d_search()
{
                int i,regno,flag;
                char ch;
                while(1)
                {
                    flag=0;
                    printf("\nID number:");
                    scanf("%d",&regno);
                    for(i=0;i<dcount;i++)
                    {
                        if(regno==d[i].registrationno)
                        {
                            flag=1;
                            printf("\n::::::RECORD FOUND::::::");
                            printf("\nNAME:%s",d[i].name);
                            printf("\nPHONE NO:%d",d[i].phno);
                            printf("\nSpecialist:%s",d[i].specialist);
                            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                        }
                    }
                        if(flag==0)
                        {
                            printf("not found.");
                        }
                    printf("\nDo you want to search more record(y/n):");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch!='y')
                        {
                            break;
                        }
                }
}
//delete doctor data
void d_delete()
{
            int i,regno;
            char ch;
            if(dcount!=0)
            {
            while(1)
             {
                printf("ID number:");
                scanf("%d",&regno);
                for(i=0;i<dcount;i++)
                    {
                        if(regno==p[i].registrationno)
                            {
                                p[i].registrationno='\0';
                                printf("\nyour record  is deleted\n");
                            }
                    }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDelete another doctor data(y/n):");
                fflush(stdin);
                scanf("%c",&ch);
                if(ch!='y')
                 {
                    break;
                 }
              }
            }
            else
            {
                printf("\t\t\tno data here!entry first.");
            }
}
//view all doctor data
void d_view()
{
            int i;
            if(dcount!=0)
            {
            for(i=0;i<dcount;i++)
                {
                    printf("\nID number:%d",d[i].registrationno);
                    printf("\nNAME:%s",d[i].name);
                    printf("\nPHONE NO:%d",d[i].phno);
                    printf("\nSpecialist:%s",d[i].specialist);
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                }
            }
            else{
                printf("\t\t\tno data here!entry first.");
            }

}
//staff section
void staff()
{

            int ch;
            while(1)
            {
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.add new staff");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2.search staff information");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3.delete staff");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4.view all staff");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\t5.quit");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::");
                printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter your choice(1 to 5):");
                scanf("%d",&ch);
                if(ch==1)
                    {
                     s_add();//add new staff data
                    }
                else if(ch==2)
                    {
                     s_search();//search staff information data
                    }
                else if(ch==3)
                    {
                     s_delete();//delete staff data
                    }
                else if(ch==4)
                    {
                     s_view();//view all staff data
                    }
                else
                    {
                     break;
                    }
            }
}
//add new staff data
void s_add()
{
         char ch;
         int i;
         for(i=0;i<100;i++)
            {
                printf("\nregistration no:");
                scanf("%d",&s[i].registrationno);
                fflush(stdin);
                printf("\nname:");
                scanf("%s",&s[i].name);
                fflush(stdin);
                printf("\nphone number:");
                scanf("%d",&s[i].phno);
                fflush(stdin);
                printf("\ngrade:");
                scanf("%s",&s[i].grade);
                fflush(stdin);
                printf("\nsalary:");
                scanf("%d",&s[i].salary);
                fflush(stdin);
                printf("\nJoin date:");
                scanf("%s",&s[i].join);
                fflush(stdin);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDo you want to add more record(y/n):");
                scanf("%c",&ch);
                fflush(stdin);
                scount++;
                if(ch!='y')
                    {
                        break;
                    }
            }
}
//search staff data
void s_search()
{
                int i,regno,flag;
                char ch;
                while(1)
                {
                    flag=0;
                    printf("\nRegistration nmuber: ");
                    scanf("%d",&regno);
                    for(i=0;i<scount;i++)
                    {
                        if(regno==s[i].registrationno)
                        {
                            flag=1;
                            printf("\n::::::RECORD FOUND::::::");
                            printf("\nNAME:");
                            printf("%s",s[i].name);
                            printf("\nPHONE NO:");
                            printf("%d",s[i].phno);
                            printf("\nGrade:");
                            printf("%s",s[i].grade);
                            printf("\nsalary:");
                            printf("%d",s[i].salary);
                            printf("\njoining date:");
                            printf("%s",s[i].join);
                            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                        }
                    }
                    if(flag==0)
                            {
                             printf("not found!!");
                            }
                    printf("\nDo you want to search more record(y/n):");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch!='y')
                        {
                            break;
                        }
                }
}
//delete staff data
void s_delete()
{
        int i,regno;
        char ch;
        if(scount!=0)
        {
            while(1)
            {
                printf("ID number:");
                scanf("%d",&regno);
                for(i=0;i<dcount;i++)
                    {
                        if(regno==p[i].registrationno)
                            {
                                p[i].registrationno='\0';
                                printf("\nyour record  is deleted\n");
                            }
                    }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDelete another staff data(y/n):");
                fflush(stdin);
                scanf("%c",&ch);
                if(ch!='y')
                 {
                    break;
                 }
            }
        }
        else
        {
            printf("\t\t\tno data here!entry first.");
        }
}
//view all staff data
void s_view()
{
            int i;
            if(scount!=0){
            for(i=0;i<scount;i++)
                {
                    printf("\nID number:%d",s[i].registrationno);
                    printf("\nNAME:%s",s[i].name);
                    printf("\nPHONE NO:%d",s[i].phno);
                    printf("\nGrade:%s",s[i].grade);
                    printf("\nsalary:%d taka",s[i].salary);
                    printf("\njoining date:%s",s[i].join);
                    printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                }
            }
            else
            {
                printf("\t\t\tno data here!entry first");
            }
}
//pharmacy section
void pharmacy()
{
    int ch;
    while(1)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t1.add new product");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t2.search product information");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t3.delete product");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t4.view all product");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\t5.quit");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t\tEnter your choice(1 to 5):");
            scanf("%d",&ch);
            if(ch==1)
                {
                    pha_add();
                }
            else if(ch==2)
                {
                    pha_search();
                }
            else if(ch==3)
                {
                    pha_delete();
                }
            else if(ch==4)
                {
                    pha_view();
                }
            else
                {
                    break;
                }
        }
}
//pharmacy add new data
void pha_add()
{
        char ch;
         int i;
         for( i=0;i<100;i++)
            {
                printf("\nproduct Serial no:");
                scanf("%d",&phar[i].registrationno);
                fflush(stdin);
                printf("\nproduct Type:");
                scanf("%d",&phar[i].type);
                fflush(stdin);
                printf("\nproduct name:");
                scanf("%s",&phar[i].name);
                fflush(stdin);
                printf("\nproduct quantity of buy(In number):");
                scanf("%d",&phar[i].buy);
                fflush(stdin);
                printf("\nproduct buy price:");
                scanf("%d",&phar[i].buy_price);
                fflush(stdin);
                printf("\nproduct quantity of sell(In number):");
                scanf("%d",&phar[i].sell);
                fflush(stdin);
                printf("\nproduct sell price:");
                scanf("%d",&phar[i].sell_price);
                fflush(stdin);
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDo you want to add more record(y/n):");
                scanf("%c",&ch);
                fflush(stdin);
                phacount++;
                if(ch!='y')
                    {
                        break;
                    }
            }

}
//pharmacy search data
void pha_search()
{
    int i,regno,flag;
    char ch;
    while(1)
    {

        flag=0;
        printf("\nproduct serial number:");
        scanf("%d",&regno);
        for(i=0;i<phacount;i++)
            {
                if(regno==phar[i].registrationno)
                {
                    flag=1;
                    printf("\nproduct name:%s",phar[i].name);
                    printf("\nproduct Type:%d",phar[i].type);
                    printf("\nproduct quantity of buy(In number):%d piece",phar[i].buy);
                    printf("\nproduct buy price:%d taka",phar[i].buy_price);
                    printf("\nproduct quantity of sell(In number):%d piece",phar[i].sell);
                    printf("\nproduct sell price:%d taka",phar[i].sell_price);
                }
            }
                if(flag==0){
                    printf("not found!!");
                }
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("\nDo you want to search more record(y/n):");
            fflush(stdin);
            scanf("%c",&ch);
            if(ch!='y')
                {
                    break;
                }
    }
}
//pharmacu all data view
void pha_view()
{
     int i,regno;
    char ch;
    if(phacount!=0)
    {
     for(i=0;i<phacount;i++)
        {
            printf("\nserial number:%d",phar[i].registrationno);
            printf("\nproduct name:%s",phar[i].name);
            printf("\nproduct Type:%d",phar[i].type);
            printf("\nproduct quantity of buy(In number):%d piece",phar[i].buy);
            printf("\nproduct buy price:%d taka",phar[i].buy_price);
            printf("\nproduct quantity of sell(In number):%d piece",phar[i].sell);
            printf("\nproduct sell price:%d taka",phar[i].sell_price);
            printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        }
    }
    else{
        printf("\t\t\tno data here!entry first.");
    }
}
//pharmacy data delete
void pha_delete()
{
        int i,regno;
        char ch;
        if(phacount!=0)
        {
            while(1)
            {
                printf("product serial number:");
                scanf("%d",&regno);
                for(i=0;i<pcount;i++)
                {
                    if(regno==p[i].registrationno)
                    {
                        p[i].registrationno='\0';
                        printf("\nyour record  is deleted\n");
                    }
                }
                printf("\n\t\t\t\t\t\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
                printf("\nDelete another product data(y/n):");
                fflush(stdin);
                scanf("%c",&ch);
                if(ch!='y')
                 {
                    break;
                 }
            }
        }
        else
        {
            printf("\t\t\tno data here!entry first.");
        }
}
//welcome to about
void about()
{

    int i;
    char str[]={"\n\t\t\t\t\t\t\t\t\t\t\t\t1.name:Rahatur Rahman""\n\t\t\t\t\t\t\t\t\t\t\t\t  Id:2016-2-68-048\n"
                "\n\t\t\t\t\t\t\t\t\t\t\t\t2.name:kamruzzaman leeon""\n\t\t\t\t\t\t\t\t\t\t\t\t  Id:2018-1-60-252\n"
                "\n\t\t\t\t\t\t\t\t\t\t\t\t3.name:Rafiuzzaman""\n\t\t\t\t\t\t\t\t\t\t\t\t  Id:2018-1-60-005\n\n\n\n\n\n\n\n"
                };

    while(1)
    {
     for(i=0;i<strlen(str);i++)
        {
        printf("%c",str[i]);
        Sleep(80);
        }
        printf("To leave press any key");
        getch();
        break;
    }
}
//quit
void quit()
{
    int i;
    char str[]={"THANK YOU FOR VISITING EAST WEST HOSPITAL MANAGEMENT SYSTEM"};
    while(1)
    {
     for(i=0;i<strlen(str);i++)
        {
        printf("%c",str[i]);
        Sleep(50);
        }

        break;
    }
}
