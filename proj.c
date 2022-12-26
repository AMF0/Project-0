#include "proj.h"


#define MAX 50

void sum_2matrics()
{
    char ch;
    int n = 1,i,j,x,y;
    while (n == 1) {
        system("cls");
        printf("\n  please enter number of row :");
        scanf("%d", &x);
        printf("\n\n  please enter number of col :");
        scanf("%d", &y);
        printf("\n\n  please enter the first matrix ::\n");
        printf("  ------------------------------\n\n");
    float array1[x][y],array2[x][y],sum_arr[x][y];
    for ( i = 0; i < x; i++)
      for ( j = 0; j < y; j++)
      {
        printf("  value of [%d][%d] = ", i + 1, j + 1);
        scanf("%f", &array1[i][j]);
      }

        printf("\n\n  please enter the second matrix ::\n");
        printf("  -------------------------------\n\n");

   for ( i = 0; i < x; i++)
     for ( j = 0; j < y; j++)
      {
        printf("  value of [%d][%d] = ", i + 1, j + 1);
        scanf("%f", &array2[i][j]);
      }

   for ( i = 0; i < x; i++)
     for ( j = 0; j < y; j++)
        sum_arr[i][j] = array1[i][j] + array2[i][j];

        printf(" \n\n  the result sum of two matrices is ::\n");
        printf("  ------------------------------------\n\n");

   for ( i = 0; i < x; i++)
   {
     for ( j = 0; j < y; j++)
      {
        printf("\t\t%.2f", sum_arr[i][j]);
      }
        printf("\n\n");
   }

        printf("  Do you want to do sum process again (y or n) ?  ");
        ch = getche();
    if (ch == 'y') n = 1;
       else        n = 0;
 }

        printf("\n\n >> enter 0 to back : ");
        scanf("%d", &i);
  if (i == 0)
        summation();

}

void add_more_2m()
{
int n1=1,k;
    while(n1==1){
                system("cls");
	            printf("\n You can add any number of matrices\n\n");
int r,c,k;
                printf("  please enter number of row :");
                scanf("%d",&r);
                printf("\n  please enter number of col :");
                scanf("%d",&c);
	            printf("\n\n");
	            printf("  enter the matric \n  ----------------\n\n");
float arr_sum[r][c];int i,j;
    for(i=0;i<r;i++)
       for(j=0;j<c;j++)
                arr_sum[i][j]=0;
int n=1;
   for(;;)
   {
     if(n==1)
        {
           float arr_input [r][c];
            for(i=0;i<r;i++)
            	for(j=0;j<c;j++)
            	  {
            		printf("  value of [%d][%d] = ",i+1,j+1);
            		scanf("%f",&arr_input[i][j]);
				  }

            for(i=0;i<r;i++)
               for(j=0;j<c;j++)
                   arr_sum[i][j]=arr_sum[i][j]+arr_input[i][j];
        }
        else{
                   printf("\n  the sum_matrix is \n\n");
              for(i=0;i<r;i++){
               for(j=0;j<c;j++)
                {
                    printf("\t%.2f",arr_sum[i][j]);}
                    printf("\n\n");
                }
        break;
            }
                    printf("\n  to add another matrix press 1 to print the sum press 0:");
                    scanf("%d",&n);
                    printf("  ---------------------------------------------------------\n");
    }
char ch1;
                    printf("  Do you want to do sum process again (y or n) ?  ");
                    ch1=getche();
            if (ch1=='y')
                    n1=1;
            else
                    n1=0;
    }
                   printf("\n\n >> enter 0 to back : ");
                   scanf("%d",&k);
            if (k==0)
                   summation();
}
void summation()
{
    int x, o = 1, p;
       system("cls");
       printf("\n");
       printf("\t\t\t\t\t\t     -----------\n");
       printf("\t\t\t\t\t\t    | summation |\n");
       printf("\t\t\t\t\t\t     -----------\n");
       printf("\n\n");
       printf("\n Please choose from the following list:\n\n");
       printf("\t\t\t\t\t  1-sum 2 matrices\n\n");
       printf("\t\t\t\t\t  2-more than 2 matrices\n\n");
       printf("\t\t\t\t\t  3-Back");
    while(o==1){
       printf("\n\n >> your choose is : ");
       scanf("%d",&x);
 switch (x)
  {
   case 1:
       sum_2matrics();
   	   break;
   case 2:
       add_more_2m();
    break;
   case 3:
       Math_operation();
    break;
   default:
   {
        printf("\n\n sorry, some thing wrong .\n ");
        o=1;
   }
  }//end of switch.

 }// end of while.
}

void Math_operation()
{
    int check,b=1;
        system("cls");
        printf("\n\t\t\t\t          ------------------------\n");
	    printf("\t\t\t\t         | Mathimatical operation |\n");
	    printf("\t\t\t\t          ------------------------\n\n");
	    printf(" by using this calcuator you can add,subtract and mltiply matrices\n");
	    printf ("\n choose from the following list :\n");
	    printf("\n\t\t\t\t ------------------\t\t\t --------------------");
	    printf("\n\t\t\t\t|  1-Summtion      |\t\t\t|  6-Determinant 3X3 |\n");
	    printf("\t\t\t\t ------------------\t\t\t --------------------\n");
	    printf("\n\t\t\t\t ------------------\t\t\t --------------------");
	    printf("\n\t\t\t\t|  2-Subtracting   |\t\t\t|      7-Inverse     |\n");
	    printf("\t\t\t\t ------------------\t\t\t --------------------\n");
	    printf("\n\t\t\t\t ------------------\t\t\t --------------------");
	    printf("\n\t\t\t\t|  3-Multiplying   |\t\t\t|      8-Back        |  ");
	    printf("\n\t\t\t\t ------------------\t\t\t --------------------");
	    printf("\n\n\t\t\t\t ------------------");
	    printf("\n\t\t\t\t|  4-Transpose      |\n");
	    printf("\t\t\t\t ------------------\n");
	    printf("\n\t\t\t\t ------------------");
	    printf("\n\t\t\t\t|5-Determinant 2x2 |\n");
	    printf("\t\t\t\t ------------------\n");
	    while (b==1){
	    printf("\n >> your choice is :  ");
	    scanf("%d",&check);
	    switch (check){
    case 1:
          summation();
    break;
    case 2:
          subtractting();
    break;
    case 3:
          producting();
    break;
    case 4:
            traspose();
    break;
    case 5:
          determinant2_2();
    break;
    case 6:
           determinant3_3();
    break;
    case 7:
            invers ();
    break;
    case 8:
            Home ();
    break;
    default :
         {
        printf("\n\n sorry, some thing wrong .\n ");
           b=1;
         }
         break;
     }
}
}
void subtractting()
{
 int x, v = 1, p;
       system("cls");
       printf("\n");
       printf("\t\t\t\t\t\t     -------------\n");
       printf("\t\t\t\t\t\t    | subtracting |\n");
       printf("\t\t\t\t\t\t     -------------\n");
       printf("\n\n");
       printf("\n Please choose from the following list:\n\n");
       printf("\t\t\t\t\t  1-subtract 2 matrices\n\n");
       printf("\t\t\t\t\t  2-subtract any number of matrices\n\n");
       printf("\t\t\t\t\t  3-Back");

    while(v==1)
    {
       printf("\n >> your choose is : ");
       scanf("%d",&x);
 switch (x)
 {
 case 1:
       sub_2m();

    break;
 case 2:
       sub_more_2m();
    break;
 case 3:
       Math_operation();
    break;
 default:
 {
       printf("\n\n sorry, some thing wrong .\n ");
       v==1;
 }//end of while.

 }//end of switch.
}
}

void sub_more_2m()
{
    int n1=1,r,c,k;
    while(n1==1){
                system("cls");
	            printf("\n You can add any number of matrices\n\n");
                printf("  please enter nomber of row :");
                scanf("%d",&r);
                printf("\n  please enter nomber of col :");
                scanf("%d",&c);
	            printf("\n\n");
	            printf("  enter the matric \n  ----------------\n\n");
    float arr_sub[r][c];int i,j;
     for(i=0;i<r;i++)
       for(j=0;j<c;j++)
                arr_sub[i][j]=0;
    int n=1;
     for(;;)
     {
      if(n==1)
      {
       float arr_input [r][c];
         for(i=0;i<r;i++)
          for(j=0;j<c;j++)
           {
                 printf("  value of [%d][%d] = ",i+1,j+1);
                 scanf("%f",&arr_input[i][j]);
           }

          for(i=0;i<r;i++)
           for(j=0;j<c;j++)
                 arr_sub[i][j]=arr_sub[i][j]-arr_input[i][j];
      }//end of if.

      else{
                 printf("\n  the sub_matrix is \n\n");
        for(i=0;i<r;i++)
         {
         for(j=0;j<c;j++)
           {
                 printf("\t%.2f",arr_sub[i][j]);
           }
                 printf("\n\n");
         }
         break;
          }//end of else.

                 printf("\n  to sup another matrix press 1 to print the sum press 0:");
                 scanf("%d",&n);
                 printf("  ---------------------------------------------------------\n");
    }//end of infinit for.
  char ch1;
                 printf("  Do you want to do sub process again (y or n) ?  ");
                 ch1=getche();
        if (ch1=='y')
              n1=1;
        else
              n1=0;
    }//end of while.
                  printf("\n\n >> enter 0 to back : ");
                  scanf("%d",&k);
        if (k==0)
                  subtractting();
}

void sub_2m()
{
    char ch;
    int n = 1,i,j,x,y;
    while (n == 1) {
        system("cls");
        printf("\n  please enter number of row :");
        scanf("%d", &x);
        printf("\n\n  please enter number of col :");
        scanf("%d", &y);
    float array1[x][y],array2[x][y],sub_arr[x][y];
        printf("\n\n  please enter first matrices ::\n");
        printf("  ------------------------------\n\n");

    for ( i = 0; i < x; i++)
      for ( j = 0; j < y; j++)
      {
        printf("  value of [%d][%d] = ", i + 1, j + 1);
        scanf("%f", &array1[i][j]);
      }

        printf("\n\n  please enter second matrices ::\n");
        printf("  -------------------------------\n\n");

   for ( i = 0; i < x; i++)
     for ( j = 0; j < y; j++)
      {
        printf("  value of [%d][%d] = ", i + 1, j + 1);
        scanf("%f", &array2[i][j]);
      }

   for ( i = 0; i < x; i++)
     for ( j = 0; j < y; j++)
        sub_arr[i][j] = array1[i][j] - array2[i][j];

        printf(" \n\n  the result sub of two matrices is ::\n");
        printf("  ------------------------------------\n\n");

   for ( i = 0; i < x; i++)
   {
     for ( j = 0; j < y; j++)
      {
        printf("\t\t%.2f", sub_arr[i][j]);
      }
        printf("\n\n");
   }

        printf("  Do you want to do sub process again (y or n) ?  ");
        ch = getche();
    if (ch == 'y') n = 1;
       else        n = 0;
 }

        printf("\n\n >> enter 0 to back : ");
        scanf("%d", &i);
  if (i == 0)
        subtractting();
}

void muliply()
{
    system("cls");
    int i,j=1;
          printf("\n");
          printf("\t\t\t\t\t\t     ----------------\n");
          printf("\t\t\t\t\t\t    | multiplication |\n");
          printf("\t\t\t\t\t\t     ----------------\n");
          printf("\n\n please choose from the following list :- \n\n\n\n");
          printf("\t\t\t\t\t\t   1-Multply 2 Matrices\n\n ");
          printf("\t\t\t\t\t\t   2-Back");

    while(j==1){

          printf("\n\n >> Your choose is : ");
          scanf("%d",&i);

    switch (i)
    {
      case 1:
          mult_2mat();
          break;

      case 2:
          producting();
          break;
      default:
        {
          printf("\n\n sorry, some thing wrong .\n ");
            j=1;
        }
    }
 }
}
void mult_2mat()
{
    int r1 = 0 , c1 = 0 ,r2 = 0, c2 = 0, tmp = 0,xo=1,z;
    char ch;
    while(xo==1){
    float mat1[MAX][MAX];
    float mat2[MAX][MAX];
    float resMat[MAX][MAX];
        system("cls");
        printf("\n Matrix 1 :: \n");
        printf(" -----------\n\n");
        printf(" Please enter the number of rows    : ");  //receive the number of rows for first matrix
        scanf("%d", &r1);
        printf("\n Please enter the number of columns : ");  //receive the number of columns for first matrix
        scanf("%d", &c1);
        printf("\n Matrix 2 :: \n");
        printf(" -----------\n\n");
        printf(" Please enter the number of rows : ");  //receive the number of rows for second matrix
        scanf("%d", &r2);
        printf("\n Please enter the number of columns : ");  //receive the number of columns for second matrix
        scanf("%d", &c2);

    if(c1 == r2)  //checking matrix multiplication conditions.
    {
        printf("\n Please enter the elements of matrix A\n");   //matrix a elements
        printf(" -------------------------------------\n\n");

        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                printf(" element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat1[i][j]);
            }
        }

        printf("\n Please enter the elements of matrix B\n");  //matrix b elements
        printf(" -------------------------------------\n\n");

        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf(" element = [%d][%d] : ", i + 1, j + 1);
                scanf("%f",&mat2[i][j]);
            }
        }
        //performing multiplication.
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                tmp = 0;
                for(int k = 0; k < c1; k++)
                {
                    tmp += mat1[i][k] * mat2[k][j];
                }
                resMat[i][j] = tmp;
                tmp = 0;

            }
        }

        printf("\n The product of two matrices is :: \n");
        printf(" ---------------------------------\n\n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("\t%.f\t", resMat[i][j]);
            }

        printf("\n\n");
        }
    }

    else
        printf("\n Can't multiply matrices\n\n");

        printf("  Do you want to do mult process again (y or n) ?  ");
        ch=getch();

   if (ch=='y') xo=1;
   else xo=0;
  }
        printf("\n\n  >> enter 0 to back :  ");
        scanf("%d",&z);
    if (z==0)
        muliply();

}

void producting()
{

 int x,y=1;
        system("cls");
        printf("\n");
        printf("\t\t\t\t\t\t     --------------\n");
        printf("\t\t\t\t\t\t    | Multiplaying |\n");
        printf("\t\t\t\t\t\t     --------------\n");
        printf("\n\n");
        printf("\n Please choose from the following list:\n\n");
        printf("\t\t\t\t\t  1-product  matrix\n\n");
        printf("\t\t\t\t\t  2-multiply_num_in_Matrix\n\t\t\t\t\t  >> (to devide matrix on number product it in the inverse)\n");
        printf ("\t\t\t\t\t -> Ex:matrix /4 =(0.25 should be in fraction)*Matrix\n\n");
        printf("\t\t\t\t\t  3-Back");
  while(y==1){
         printf("\n\n  >>  your choice is :  ");
        scanf("%d",&x);
 switch (x)
 {
   case 1:
   	    muliply();
   	   break;
    case 2:
    	multiply_num_in_Matrix();
    	break;

   case 3:
     	Math_operation();
    break;
   default:
       {
        printf("\n\n sorry, some thing wrong .\n ");
        y=1;
       }

  }//end of switch.
 }//end of while.
}
void Home()
{
    int m=1,g,a;
  char ch0;
	   system("cls");
       system("color B0");
	   printf("\n \t\t\t\t\t       -------------------\n");
	   printf("\t\t\t\t\t      | Matrix Calculator |\n");
	   printf("\t\t\t\t\t       -------------------\n\n");
	   printf(" Welcome you in COM \" Calculator of Matrix \"\n\n");
       printf("  please choose from the following list :\n\n\n");
	   printf(" \t\t\t\t\t --------------------------------\n");
	   printf("\t\t\t\t\t| 1-  Mathimatical operation     |\n");
       printf("\t\t\t\t\t --------------------------------\n\n");
	   printf(" \t\t\t\t\t --------------------------------\n");
	   printf("\t\t\t\t\t| 2- characteristics of a Matrix |\n");
	   printf("\t\t\t\t\t --------------------------------\n\n");
	   printf("\t\t\t\t\t --------------------------------\n");
	   printf("\t\t\t\t\t|            3-Exit              |\n");
       printf("\t\t\t\t\t --------------------------------\n");
  while(m==1){
	   printf("\n\n >> your choice is :  ");
       scanf("%d",&a);
 switch (a){
  case 1:
       Math_operation();
    break;
  case 2:
       characteristics_of_Matrix();
    break;
  case 3:
      {
       printf("\n  are you sure you want to exit COM (y or n) ?  ");
       ch0=getche();
      if (ch0=='y')
      {

          printf("\n\n  \t\t\t\t         ---------------------------------\n");
          printf("\t\t\t\t        | thank you for using the COM ^_^ |\n");
          printf("\t\t\t\t         ---------------------------------\n\n\n");
          break;
      }
      else
          Home();
      }
      break;
  default:

    {
      printf("\n\n sorry, some thing wrong .\n ");
      m=1;
    }
 }//end of switch.
}//end of while.
}
void characteristics_of_Matrix()
{
 char ch;
 int a=1,d, row ,col,i,j,Trace=0,sum_above=0,sum_below=0,E,b,max=0,min=0;

 while (a==1){
        system("cls");
        printf("\n >> Note : number of row must be equal nember of col.");
	    printf("\n\n >> Enter Rows :: ");
	    scanf("%d",&row);
	    printf("\n >> Enter Col  :: ");
	    scanf("%d",&col);
 int arr[row][col];
	    printf("\n Enter items of the Matrix ::\n ----------------------------\n");
  for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
    {
        printf("\n >> Enter item [%d][%d] : ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
  }
	if(row==col)
	{
     for(i=0;i<row;i++)
      for(j=0;j<col;j++)
      {
       if(i==j)
          Trace+=arr[i][j];
       if(i<j)
          sum_above+=arr[i][j];
       if(i>j)
          sum_below+=arr[i][j];
      }
		  printf("\n ----------------------");
		  printf("\n\n The entered Matrix is \n\n");
    for(i=0;i<row;i++)
      {
     for(j=0;j<col;j++)
       {
          printf("\t%d",arr[i][j]);
       }
          printf("\n\n");
      }
    for(i=0;i<row;i++)
     for(j=0;j<col;j++)
      if (max<arr[i][j])
          max=arr[i][j];
      min=arr[0][0];
    for(i=0;i<row;i++)
     for(j=0;j<col;j++)
      if (min>arr[i][j])
          min=arr[i][j];

          printf("\n Characteristics of the entered Matrix are :: \n");
          printf(" --------------------------------------------\n");
          printf("\n The maximum value in matric = [%d]\n",max);
          printf(" ---------------------------------\n\n ");
          printf("\n The minimum value in matric = [%d]\n",min);
          printf(" ---------------------------------\n\n ");
		  printf("\n Trace of the Matrix = [%d]\n",Trace);
		  printf(" --------------------------\n\n");
		  printf("\n Sum of elements above tha main = [%d]\n",sum_above);
		  printf(" -------------------------------------\n\n");
		  printf("\n Sum of elements below tha main = [%d]\n",sum_below);
		  printf(" -------------------------------------\n\n");
	}//end of firist if.

	else
          printf("\n  number of rows should equal number of columns\n  --------------------------------------------- ");

          printf("\n\n >> Do you want to do this process again (y or n) ?  ");
          ch = getche();
    if (ch == 'y') a = 1;
       else        a = 0;
 }
          printf("\n\n >>  enter 0 to back :  ");
          scanf("%d", &d);
     if (d == 0)
          Home();

}

void multiply_num_in_Matrix()
{
char ch;
 int row ,col,i,j,n,b=1;
 while (b==1){
 float num;
        system("cls");
	    printf("\n\n >> Enter Rows  ::  ");
	    scanf("%d",&row);
	    printf("\n >> Enter Col   ::  ");
	    scanf("%d",&col);
 float arr[row][col];
	    printf("\n Enter items of the Matrix ::\n ----------------------------\n");
  for(i=0;i<row;i++)
	{
     for(j=0;j<col;j++)
     {
        printf("\n >> Enter item [%d][%d] : ",i+1,j+1);
        scanf("%f",&arr[i][j]);
     }
	}

	    printf("\n\n >> Enter num to muliplay is the matrix :");
	    scanf("%f",&num);

  for(i=0;i<row;i++)
	{
     for(j=0;j<col;j++)
     {
        arr[i][j]=arr[i][j]*num;

     }
	}
 	    printf("\n The Matrix afte process is ::\n");
        printf(" -----------------------------\n\n");
  for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
    {
        printf("\t%0.2f",arr[i][j]);
    }
		printf("\n\n");
  }
        printf("  Do you want to do mult process again (y or n) ?  ");
        ch=getch();

   if (ch=='y') b=1;
   else b=0;
 }

        printf("\n\n  >> enter 0 to back :  ");
        scanf("%d",&n);
    if (n==0)
        producting();
}
void traspose()
{
char ch;
  int row,col,i,j,Q,b=1,v;
  while (b==1){
        system("cls");
        printf("\t\t\t\t\t\t     --------------\n");
        printf("\t\t\t\t\t\t    |   Transpose   |\n");
        printf("\t\t\t\t\t\t     --------------\n");
        printf("\n >> Enter number of rows :: ");
        scanf("%d",&row);
        printf("\n >> Enter number of col  :: ");
        scanf("%d",&col);
        printf("\n\n Enter the matric ::\n");
        printf(" -------------------\n");
  float arr [row][col],traspose[col][row];

   for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
        printf("\n >> Enter item [%d][%d] :: ",i+1,j+1);
        scanf("%f",&arr[i][j]);
    }

   for(i=0;i<col;i++)
    for(j=0;j<row;j++)
    {
        traspose[i][j]=arr[j][i];
    }
        printf("\n\n The transpose  Matrix is :: \n");
        printf(" --------------------------\n\n");

   for(i=0;i<col;i++)
   {
    for(j=0;j<row;j++)
     {
        printf("\t%0.2f",traspose[i][j]);
     }
        printf("\n");
   }

        printf("\n  Do you want to do this process again (y or n) ?  ");
        ch=getch();

   if (ch=='y') b=1;
   else b=0;
}
        printf("\n\n  >> enter 0 to back  :  ");
        scanf("%d",&v);
    if (v==0)
       Math_operation();
}
void determinant2_2()
{
char ch;
 int i,j,Q,b=1,n;
 while (b==1){
 float array[2][2];
        system("cls");
        printf("\t\t\t\t\t\t     -----------------\n");
        printf("\t\t\t\t\t\t    | Determinant 2x2 |\n");
        printf("\t\t\t\t\t\t     -----------------\n");
        printf(" >> Enter Matrix ::\n ------------------\n\n");

  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
        printf("\n >> Enter item[%d][%d] :: ",i+1,j+1);
        scanf("%f",&array[i][j]);
    }
  }

        printf("\n The matrix is ::\n ----------------\n\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
        printf("\t%.2f",array[i][j]);
    }
    printf("\n\n");
  }


  float determinant= (array[0][0]*array[1][1])-(array[0][1]*array[1][0]);
        printf("\n\n Determinant = %0.2f\n -------------------\n",determinant);

         printf("\n\n  Do you want to do this process again (y or n) ?  ");
        ch=getch();

   if (ch=='y') b=1;
   else b=0;

 }
        printf("\n\n  >> enter 0 to back :  ");
        scanf("%d",&n);
    if (n==0)
       Math_operation();
}

void determinant3_3()
{
char ch;
 int i,j, Q,b=1,n;
 while (b==1){
 float determinant,array[3][3];
        system("cls");
        printf("\t\t\t\t\t\t     -----------------\n");
        printf("\t\t\t\t\t\t    | Determinant 3x3 |\n");
        printf("\t\t\t\t\t\t     -----------------\n");
	    printf("\n Enter The Matrix ::\n -------------------\n\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   {
	   	printf("\n >> Enter item [%d][%d]:: ",i+1,j+1);
	   	scanf("%f",&array[i][j]);
   }
        printf("\n The matrix is ::\n ---------------- \n\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
        printf("\t%.2f",array[i][j]);
   }
        printf("\n\n");
 }

	  float det_1=array[0][0]*small_determinant(array[1][1],array[1][2],array[2][1],array[2][2]);
	  float  det_2=array[0][1]*small_determinant(array[1][0],array[1][2],array[2][0],array[2][2]);
	  float det_3=array[0][2]*small_determinant(array[1][0],array[1][1],array[2][0],array[2][1]);
	  determinant=det_1-det_2+det_3;


	   printf("\n\n >> Determinant for the entered Matrix = %0.2f",determinant);
       printf("\n ----------------------------------------------");

         printf("\n\n  Do you want to do this process again (y or n) ?  ");
        ch=getch();

   if (ch=='y') b=1;
   else b=0;
}
        printf("\n\n  >> enter 0 to back :  ");
        scanf("%d",&n);
    if (n==0)
       Math_operation();
}
float small_determinant(float n1,float n2,float n3,float n4)
{
  float det=(n1*n4)-(n2*n3);
  return det;
}
void invers ()
{

 int x, v = 1, p;
       system("cls");
       printf("\n");
       printf("\t\t\t\t\t\t     -------------\n");
       printf("\t\t\t\t\t\t    |   Inverse   |\n");
       printf("\t\t\t\t\t\t     -------------\n");
       printf("\n\n");
       printf("\n Please choose from the following list:\n\n");
       printf("\t\t\t\t\t  1-Inverse matrix n * n \n\n");
       printf("\t\t\t\t\t  2-Back");
  while(v==1){
       printf("\n\n >> your choice is : ");
       scanf("%d",&x);

 switch (x)
 {
 case 1:
       inverse ();

    break;

 case 2:
       Math_operation();
    break;
 default:
   {
       printf("\n\n sorry, some thing wrong .\n ");
       v=1;
   }
  }//end of switch.

 }//end of while.
}
void inverse ()
{

  float a[25][25], k, d;
  int i, j,v=1,l;
  char ch;
  while(v==1){
        system("cls");
        printf("\n\n >> Enter the order of the square Matrix :: ");
        scanf("%f", &k);
        printf("\n  The elements of %.0fX%.0f Matrix :: \n  -----------------------------\n", k, k);
  for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
      {
        printf("\n  >> Enter value [%d][%d] :: ",i+1,j+1);
        scanf("%f", &a[i][j]);
      }
    }

        printf("\n\n  Matrix befor inverse is ::\n ---------------------------\n\n");
  for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
     {
        printf("\t%.2f",a[i][j]);
     }
        printf("\n\n");
    }

        d = determinant(a, k);
  if (d == 0)
        printf("\n Inverse of Entered Matrix is not possible.\n");
  else
        cofactor(a, k);

        printf("  Do you want to do this process again (y or n) ? ");
        ch = getche();
  if (ch == 'y')
        v = 1;
  else
        v = 0;
}
        printf("\n\n >> enter 0 to back : ");
        scanf("%d", &l);
  if (l == 0)
        invers ();

}

float determinant(float a[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[0][0]);
    }
  else
    {
         det = 0;

     for (c = 0; c < k; c++)
     {
         m = 0;
         n = 0;

     for (i = 0;i < k; i++)
      {
      for (j = 0 ;j < k; j++)
       {
         b[i][j] = 0;
         if (i != 0 && j != c)
         {
            b[m][n] = a[i][j];
            if (n < (k - 2))
               n++;
            else
             {
                n = 0;
                m++;
             }
         }
       }//end of third for

      }//end of socend for
           det = det + s * (a[0][c] * determinant(b, k - 1));
           s = -1 * s;
     }//end of first for.

   }//end of else.

    return (det);
}

void cofactor(float num[25][25], float f)
{
  float b[25][25], fac[25][25];
  int p, q, m, n, i, j;

   for (q = 0;q < f; q++)
   {
    for (p = 0;p < f; p++)
    {
       m = 0;
       n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
       {
         if (i != q && j != p)
         {
            b[m][n] = num[i][j];
          if (n < (f - 2))
             n++;
          else
           {
               n = 0;
               m++;
           }
         }
       }//end of four for

     }//end of third for

      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }//end of socend for

  }//end of first for.
      transpose(num, fac, f);
}

void transpose(float num[25][25], float fac[25][25], float r)
{
  int i, j;
  float b[25][25], inverse[25][25], d;

  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
       }
    }

         d = determinant(num, r);

  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         inverse[i][j] = b[i][j] / d;
       }
    }

         printf("\n\n\n The inverse of matrix is ::\n ---------------------------\n\n");

   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%.3f", inverse[i][j]);
       }
         printf("\n\n");
    }
}
