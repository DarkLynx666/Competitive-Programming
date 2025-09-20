#include<stdio.h>
int main()
{
    int n;
    printf("enter queue size: ");
    scanf("%d",&n);

    int qw[n];
    int option;
    int item;
    int f=-1,r=-1;

    while(1)
    {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is full\n4 to check the Queue is empty\n5 to display queue\n0 to exit\n");
        printf("enter option: \n");
        scanf("%d",&option);

        if(option == 1)
        {
            if((f==0 && r==n-1) || (f==r+1))
            {
                printf("overflow (queue is full)\n");
            }
            else
            {
                printf("enqueue value: \n");
                scanf("%d",&item);

                if(f==-1 && r==-1)
                {
                    f=0;
                    r=0;
                    qw[r]=item;
                  printf("enqueued %d\n",item);
                }
                else if(r==n-1 && f!=0)
                {
                    r = 0;
                    qw[r]=item;
                     printf("enqueued %d\n",item);
                }
                else
                {
                    r++;
                    qw[r] = item;
                     printf("enqueued %d\n",item);
                }

            }
        }

        else if(option == 2)
        {
            if(f==-1)
            {
                printf("underflow");
            }
            else if(f==r)
            {
                f=-1;
                r=-1;
            }
            else if(f==n-1)
            {
                qw[f]=NULL;
                f=0;
            }
            else
            {
                printf("dequeued element %d",qw[f]);
                qw[f]= NULL;
                f++;
            }

        }

        else if(option==3)
        {
            if((f==0 && r==n-1) || (f==r+1))
            {
                printf("overflow (queue is full)\n");
            }
            else
            {
                printf("queue is not full\n");
            }
        }

        else if(option==4)
        {
            if(f==-1)
            {
                printf("underflow");
            }
            else
            {
                printf("queue is not empty\n");
            }
        }
          else if(option==5){
                int i=f;
                if(f==-1 && r==-1){
                    printf("overflow");
                }
                else{
                    while(i!=r){
                        printf("%d",qw[i]);
                        i++;
                    }
                     printf("%d",qw[r]);
                }

          }

        else if(option==0)
        {
            break;
        }

    }
    return 0;
}