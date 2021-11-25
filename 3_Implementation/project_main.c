
#include "Sorting.h"
/**
 * @brief The main logic, menu of the project
 * 
 */
// Status of the operation requested
#define VALID   (1)
#define INVALID (0)

//operation requested by user
unsigned int choice = 0;
//int array_size;
//int* array_ptr;

// Valid operations 
enum operations{ bubbleSort=1, EXIT };

// Display the menu of operations supported 
void Sorting_menu(void);
// Verifies the requested operations validity 
int valid_operation(int operation);
int total_points();


typedef struct Sorting
{
  int array_size;
  int*array_ptr;
}Sort;


void Sorting_menu(void)
{
    Sort sort;

    printf("\nFantasy Points Sorting\n");
    printf("\n1. Bubble Sort\n2. Exit");
    printf("\n\tEnter your choice\n");
   
   
    scanf("%d", &choice);

    if(EXIT == choice)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(choice))
    {
        printf("\n\tEnter the No of Points you applying\n");
        scanf("%d",&sort.array_size);
        if(sort.array_size<=0)
         {
             printf("Check the possibility of the number\n");
             return ;
         }
        sort.array_ptr=(int*)malloc(sort.array_size * sizeof(int));
        printf("Enter the Points\n");
        for(int i=0;i<sort.array_size;i++)
        scanf("%d", &sort.array_ptr[i]);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(choice)
    {
        case bubbleSort:
            printf("Time Complexity of Bubble Sort: O(n*n)\n");
            sort.array_ptr=BubbleSort(sort.array_ptr, sort.array_size);
            getchar();
            break;
        
        case EXIT:
            exit(0);
            break;
        default:
            printf("\n\t---END---\n");
    }
    printf("The Sorted Points: ");
    Display(sort.array_ptr,sort.array_size);
}

int valid_operation(int operation)
{
    // Check if the operation is a valid operation 
    return ((bubbleSort <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}

int total_points()
{
  printf("Calculating total fantasy points by a player");
  scanf("\nPoints Scored :%d",&p1);
  scanf("\nRebounds :%f",&p2);
  scanf("\nAssists :%f",&p3);
  scanf("\nSteals :%d",&p4);
  scanf("\nBlocks :%d",&p5);
  scanf("\nTurn Overs :%d",&p6);
  float points = p1+p2+p3+p4+p5+p6;
  printf("Final Points By the Player :%d",%f);
}
  
  
