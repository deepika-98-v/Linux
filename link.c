#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *first,*temp,*temp2,*temp3,*newnode;
int ch=0,pos=0,size=0;
int main()
{
    do 
    {
        menu();
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertAtEnd();break;
            case 2:insert_at_pos();break;
            case 3:print();break;
            case 4:print_size();break;
            case 5:exit(1);break;
            default :printf("worng choice\n");
        }
    }while(ch);
}
void insertAtEnd()
{
	if(first==NULL)
	{
		first = (ll*)malloc(sizeof(ll));
		printf("Enter Data ");
		scanf("%d",&first->data);
		first->link = NULL;
		++size;
		printf("inserted At End\n");
		return;
	}
temp = first ;
	while(temp->link != NULL)
	{
		temp=temp->link;
	}
temp2 = (ll*)malloc(sizeof(ll)); // New Last Node
printf("Enter Data ");
scanf("%d",&temp2->data);
temp2->link = NULL; // NULL because it is going to be Last Node
temp->link=temp2;
++size;
}
void print()
{
temp = first;
	while(temp!=NULL)
	{
		printf("[%d %u]",temp->data,temp->link);
		temp = temp ->link;
	}
}
void menu()
{
 printf("\n1 Insert\n2 Insert at pos \n3 Print \n4 print_size\n5 Exit \n"); 
}
void insert_at_pos()
{
    if(first==NULL)
    insertAtEnd();
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos<=0 || pos>size+2)
    {
    printf("node cannot be inserted\n");
    return;
    }
    if(pos==1)
    {
    insertbeg();
    return;
    }
    temp=first;
    for(int i=0;i<=pos-2;i++)
    {
        temp=temp->link;
    }
    temp3=(ll*) malloc(sizeof(ll));
    printf("New node is created\n");
    printf("Enter the data\n");
    scanf("%d",&temp3->data);
    temp3->link=temp->link;
    temp->link=temp3;
    ++size;
        
}
void insertbeg()
{
    if(first==NULL)
    {
       first = (ll*)malloc(sizeof(ll));
		printf("Enter Data ");
		scanf("%d",&first->data);
		printf("First node is created\n");
    }
    else
    {
        newnode=(ll*)malloc(sizeof(ll));
        printf("Enter Data ");
		scanf("%d",&newnode->data);
		newnode->link=first;
		first=newnode;
    }
}
void print_size()
{
    printf("The size is %d\n",size);
}
