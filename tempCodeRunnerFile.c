// stack 
#include<stdio.h>
#define n 5
int a[n];
int top = -1,i,ch;

int display()
{
<<<<<<< HEAD
int arr[] = {10,20,30,40,50};
int i; 
    for(i=0;i<5;i++)
    { 
    printf(" %d",arr[i]);
    }
     
        // Position where from the element is
        // going to move here 'python' is moved
        int x = 3;
         
        // Position at which element is to be
        // moved here 'python' is moved to 
        // index 1 which is index of 'Java'
        int pos = 1;
     
        // Store the moved element in a temp
        // variable
        int temp = arr[i];
         
        // shift elements forward
        // int i;
        for (i = x; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
         
        // Insert moved element at position 
        arr[pos] = temp;
     
    printf("\n%d",arr[i]);
}    
=======
    // printf("1. pop:");
    // printf("\n2. push:");
    // scanf("%d",&j);
    for(i=0;i<=top;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int aa()
{
    printf("\n 1.push:");
    printf("\n 2.Pop:");
    scanf("%d",&ch);

switch(ch)
{
    case 1;
    // int push(int val)

    {
        if(top>=n-1)
           printf("Array is full.....\n");
        else{
            ++top;
            a[top] = val;
         }
    }
    break;
    case 2;
    // int pop()
    {
        if(top<0)
            printf("\nArray is Empty..");
        else
            --top;
    }
    break;
    default;
    printf("\n wrong choice:");
    break;
}
}
    
int main()
{
   aa();
   display();

}
>>>>>>> 18656aa158200da637ee89fa3f24989160c4145d
