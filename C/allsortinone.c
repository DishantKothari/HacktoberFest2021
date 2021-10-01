#include<stdio.h>
#include<stdlib.h>

//function prototypes
void bubble(int *,int);
void selection(int *,int);
void insertion(int *,int);


int main()
{
  int count=0;           //size of array
  int choice=0,ch=0;    //variables used to store user choice
  int check=0;          //used to check status 
  int i=0;             //loop variable

  
  printf("Enter the size of the list: ");
  scanf("%d",&count);

//creating array of appropriate size
  int list[count];


  //filling in the array
  for(i=0;i<count;i++)
  { 
    printf("Enter element %d: ",i+1);
    scanf("%d",&list[i]);
  }

  
//prints the list
 printf("\nNumbers entered: ");
 for(i=0;i<count;i++)
   printf("%d,",list[i]);
 printf("\n");

//Creates Menu for the user 
do{
printf("Menu:\n\n");
printf("1.Bubble sort\n2.Selection Sort\n3.Inserton sort\n4.Exit\nYour choice: ");
scanf("%d",&choice);

switch(choice)
{
  case 1: //performs bubble sort
          bubble(list,count);
          break;

  case 2: //performs selection sort
          selection(list,count);
          break;
  
  case 3: //performs insertion sort
          insertion(list,count);
          break;

  case 4: return 0;

  default: printf("Invalid option\nRetry: ");
           break;


 }
 printf("Do you want to continue(press 1 to continue any other number to exit): ");
 scanf("%d",&ch);
 } while(ch==1);


  return 0;
}


/*   
    Bubble sort
	
Function: bubble(). This function sorts a given integer array in ascending order
          using bubble sort	algorithm.
Input: 1)Integer array
       2)size of the array		  
	  
Returns: This function does not return anything.The sorted array is printed after sorting.	  
*/
void bubble(int *list,int n)
{
 int i,j;
 int c;


 for(i=0;i<n;i++)
   {
     for (j=0;j<n-i-1;j++)
      {
        if (list[j] > list[j+1])
          {
            c=list[j];
            list[j]=list[j+1];
            list[j+1]=c;
          }
      }
   }

  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
    printf("%d,",list[i]);
  printf("\n");
}


/*   
    Selection sort
	
Function: selection(). This function sorts a given integer array in ascending order
          using selection sort	algorithm.
Input: 1)Integer array
       2)size of the array		  
	  
Returns: This function does not return anything.The sorted array is printed after sorting.	  
*/
void selection(int *list,int n)
{

 int i;
 int j,min;
 int k;


 for(j=0;j<n-1;j++)
  {

     min=list[j];
     k=j;
     for(i=j+1;i<n;i++)
      {

       if(list[i]<min)
       {
         min=list[i];
         k=i;
       }

     }

list[k]=list[j];
list[j]=min;

 }

printf("Sorted list is:");

for(i=0;i<n;i++)
{
 printf("%d,",list[i]);
}


printf("\n");

}

/*   
    Insertion sort
	
Function: insertion(). This function sorts a given integer array in ascending order
          using insertions sort	algorithm.
Input: 1)Integer array
       2)size of the array		  
	  
Returns: This function does not return anything.The sorted array is printed after sorting.	  
*/
void insertion(int *list,int n)
{
	int temp;
	int i=0,j=0;

	for(i=1;i<n;i++)
	{
		temp=list[i];
		j=i-1;
		 while((j>=0)&&(list[j]>temp))
		  {
			list[j+1]=list[j];
			j--;
		  }
	list[j+1]=temp;
	}

  printf("Sorted list is: ");
   for(i=0;i<n;i++)
     {
     	printf("%d,",list[i]);
  	 }

	printf("\n");
}
