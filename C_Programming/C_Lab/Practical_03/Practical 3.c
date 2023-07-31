# include<stdio.h>
int main()
{
    //Practical 03

    //Q1

//    int num1,num2;
//    printf("Enter two numbers: ");
//    scanf("%d %d",&num1,&num2);
//
//    if(num1>num2)
//        printf("The highest number is %d",num1);
//    else
//        printf("The highest number is %d",num2);

    //===============================================================================
    // Q2

//    int num1,num2,num3,h_value,l_value;
//
//    printf("Enter three integer numbers:\n");
//    scanf("%d %d %d",&num1,&num2,&num3);
//
//    if((num1>num2)&&(num1>num3))//highest
//        h_value = num1;
//    else if
//        ((num2>num1)&&(num2>num3))
//        h_value = num2;
//    else
//        h_value = num3;
//
//    if((num1<num2)&&(num1<num3))//lowest
//        l_value = num1;
//    else if
//        ((num2<num1)&&(num2<num3))
//        l_value = num2;
//    else
//        l_value = num3;
//
//    printf("Highest value is: %d \n",h_value);
//    printf("Lowest value is: %d",l_value);

    //=======================================================================================

    //Q3

//    int Bsala,Nsala,incre,Tsala;
//    char name[20];
//
//    printf("Enter your name: ");
//    scanf("%s",&name);
//    printf("Enter your current salary: ");
//    scanf("%d",&Bsala);
//
//    if(Bsala<5000)
//        Nsala = (Bsala/100)*5;
//    else if((10000>Bsala)||(Bsala>=5000))
//        Nsala = (Bsala/100)*10;
//    else if(Bsala>=10000)
//        Nsala = (Bsala/100)*15;
//    else
//        printf("Error");
//
//    Tsala = Nsala+Bsala;
//    printf("Hello %s \n",name);
//    printf("Your New salary is:%d",Tsala);

//===============================================================================================
    //Q4

//    float dia,cir,area,radius,num1,pie;
//
//    printf("Enter the Radius:");
//    scanf("%f",&radius);
//
//    pie = 3.14159;
//
//    dia = radius*2;
//    cir = radius*2*pie;
//    num1 = pow(radius,2);
//    area = pie*num1;
//
//    printf("Circle's diameter      =%.2f \n",dia);
//    printf("Circle's circumference =%.2f \n",cir);
//    printf("Circle's area          =%.2f",area);

//================================================================================================

    //Q5

//    int num1,num2;
//    float num2_M;
//
//    printf("Enter First number: ");
//    scanf("%d",&num1);
//    printf("Enter Second number: ");
//    scanf("%d",&num2);
//
//    num2_M = num1/num2;
//
//    if(num2_M == 0)
//        printf("The first number is a multiple of the second number.");
//    else
//        printf("The first number is not a multiple of the second number.");


//==================================================================================================

    //Q6

//    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14;
//
//    num1 = 'A';
//    num2 = 'a';
//    num3 = 'B';
//    num4 = 'b';
//    num5 = 'C';
//    num6 = 'c';
//    num7 = '0';
//    num8 = '1';
//    num9 = '2';
//    num10 = '$';
//    num11 = '+';
//    num12 = '*';
//    num13 = '/';
//    num14 = ' ';
//
//
//    printf("The integer equivalent of \"A\" is: %d \n",num1);
//    printf("The integer equivalent of \"a\" is: %d \n",num2);
//    printf("The integer equivalent of \"B\" is: %d \n",num3);
//    printf("The integer equivalent of \"b\" is: %d \n",num4);
//    printf("The integer equivalent of \"C\" is: %d \n",num5);
//    printf("The integer equivalent of \"c\" is: %d \n",num6);
//    printf("The integer equivalent of \"0\" is: %d \n",num7);
//    printf("The integer equivalent of \"1\" is: %d \n",num8);
//    printf("The integer equivalent of \"2\" is: %d \n",num9);
//    printf("The integer equivalent of \"$\" is: %d \n",num10);
//    printf("The integer equivalent of \"+\" is: %d \n",num11);
//    printf("The integer equivalent of \"*\" is: %d \n",num12);
//    printf("The integer equivalent of \"/\" is: %d \n",num13);
//    printf("The integer equivalent of the blank character is: %d \n",num14);


//===========================================================================================

//      Q7


//    float b_sala,new_sala,exp_bounce,loca_bounce,general_bounce;
//    int time,loca2;
//    char name[30];
//    char loca;
//
//
//
//    printf("Enter you'r name: ");
//    scanf("%s",name);
//    printf("Enter your current salary amount: ");
//    scanf("%f",&b_sala);
//    printf("Are you working in Colombo?(Press \"C\" for Yes, Press \"N\" for No): ");
//    scanf(" %c",&loca);
//    printf("Service time(in Years): ");
//    scanf("%d",&time);
//
//
//
//    if(time>5)
//        exp_bounce= b_sala*0.1;
//    else
//        exp_bounce = 0;
//
//
//    if((loca == 66)||(loca == 99))
//        loca_bounce+= 2500;
//    else
//        loca_bounce = 0;
//
//
//    if(b_sala>= 50000)
//        general_bounce = b_sala*0.15;
//    else if(b_sala>=25000)
//        general_bounce = b_sala*0.12;
//    else
//        general_bounce = b_sala*0.1;
//
//
//    new_sala = b_sala+exp_bounce+loca_bounce+general_bounce;
//
//    printf("\n\nSalesmen name:%s \n",name);
//    printf("You'r new salary is %.2f",new_sala);


//=========================================================================================

//    char loca[2];
//    int num1,num2;
//
//    printf("Are you working in Colombo?(Press \"C\" for Yes, Press \"N\" for No): ");
//    scanf("%s",&loca);
//
//    if(loca == 'c')
//        num1= 2500;
//    else
//        num1 = 0;
//
//    printf("%d",num1);


//=================================================================
//int num1,num2,num3,h_value,l_value;
//
//    printf("Enter three integer numbers:\n");
//    scanf("%d %d %d",&num1,&num2,&num3);
//
//    if((num1>num2)&&(num1>num3))//highest
//        h_value = num1;
//    else if
//        ((num2>num1)&&(num2>num3))
//        h_value = num2;
//    else
//        h_value = num3;
//
//    if((num1<num2)&&(num1<num3))//lowest
//        l_value = num1;
//    else if
//        ((num2<num1)&&(num2<num3))
//        l_value = num2;
//    else
//        l_value = num3;
//
//    printf("Highest value is: %d \n",h_value);
//    printf("Lowest value is: %d",l_value);


//=============================================================
// Q6

//    char c;
//
//    printf("Enter a character:");
//    scanf(" %c",&c);
//    //printf("%d",c);
//
//    printf("The integer equivalent of \"%c\" is %d",c,c);
//



//
//
//}
