#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node N;
N *getnode();
void push(N **, int);
int pop(N **);
void display(N *);
main()
{
    int item, choice, save;
    N *first = NULL;
    while (1)
    {
        printf("\nEnter 1:push\n2:pop\n3:display\n4:exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter item\n");
            scanf("%d", &item);
            push(&first, item);
            break;
        case 2:
            save = pop(&first);
            if (save == 0)
                printf("Nothing to delete\n");
            else
                printf("%d is deleted\n", save);

            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(0);
        }
    }
}

void display(N* first)
{N* new;
    if(first==NULL)
    printf("Nothing to display\n");
    
   
    else
    {
   
    new=first;
    while(new!=NULL)
    {
       printf("%d\t",new->info);
       new=new->link;
       
    }
  
    }
 
 int pop(N** first)
{int saver;
    N* new;
    new=*first;
    if(*first==NULL)
    {
       return 0;}
   else  if((*first)->link==NULL)
    {
        saver=(*first)->info;
        *first=NULL;
        return saver;
    }
    else
    {N* prev=NULL;
        while(new->link!=NULL)
        {prev=new;
            new=new->link;
            
        }
        saver=new->info;
        prev->link=NULL;
        free(new);
        return saver;
    }
    
}
}
