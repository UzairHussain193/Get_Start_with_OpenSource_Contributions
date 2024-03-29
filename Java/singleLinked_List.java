 /*********single linked list*********/
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;         //self referential structure
}*head; //global pointer contains address of first node
typedef struct node node;
void addbeg(int num)    //1
{
   node *newnode;
   newnode=(node*)malloc(sizeof(node));
   newnode->data=num;
   newnode->next=NULL;
   if(head==NULL)   // first node to be implemented
   {
   	    head=newnode;
   	    return;
   }
   else 
   {   newnode->next=head;
       head=newnode;
   }
}
void append(int num)
{
	node *newnode, *cur;
	newnode=(node*)malloc(sizeof(node));
   newnode->data=num;
   newnode->next=NULL;
   if(head==NULL)   // first node
   {
   	    head=newnode;
   	    return;
   }
   else
   {
   	    cur=head;      //head is fixed
   	    while(cur->next!=NULL) //traversing 
   	    {
   	    	 cur=cur->next;
		   }
		cur->next=newnode;   
   }
}
void addbet(int loc,int num)
{
	 node *newnode,*cur=head;
     newnode=(node*)malloc(sizeof(node));
     newnode->data=num;
     /*for(int i;i<loc-1;i++)
           cur=cur->next;
     newnode->next=cur->next;
	 cur->next=newnode;
}
 ***2nd approach  */
      node *prev;
      for(int i=1;i<loc;i++)
      {
          prev=cur;
          cur=cur->next;
      }
  newnode->next=cur;
  prev->next=newnode;  	
}  

int c()
{     int p=0;
	  node *cur=head;
	  while(cur!=NULL)
	 {
	 	  p++;
	 	  cur=cur->next;
	 	  
	 }
	 return p;
}
void display()
{
	node *cur=head;
	  while(cur!=NULL)
	 {
	 	  printf("%d ",cur->data);
	 	  cur=cur->next;
     }
}
void search()
{    int num;
	node*cur=head;
	if(head==NULL)
	{
		printf("ERROR 404");
        return;
 	}
 	else
 	{
 		printf("enter the number you want to search");
 		scanf("%d",&num);
    }
 	while(cur!= NULL)
    {
     	if(cur->data==num)
     		{
             	printf("Element found %d",num);
     			return;
		    }
		cur=cur->next; //increment
    }
	printf(" %d is the Element not found in the list",num);
}
void delnode(int num)  //delete the nodes
{
   node *cur=head,*prev;
   while(cur!=NULL)
   {
   	if(cur->data ==num)
   	{
   		if(cur==head)
   		{
   			head=cur->next;
   			free(cur);
   			printf("Element deleted\n");
   	        return;
		   }
		else
		{
			prev->next=cur->next;
			free(cur);
			printf("Element deleted\n");
			return;
		}   
	   }
	else
	{
	   	prev=cur;
	   	cur=cur->next;
	}
   }
	 printf("Element %d not found",num);   
}
void delloc(int loc)
{
	int i;
    node *prev,*cur;
	cur=head;
	if(loc>c() ||loc<=0 || head==NULL)
	{
		printf("\n Deletion is not possible :");
		return;
	}
	if(loc==1)
	{
		head=cur->next;
		printf("%d deleted",cur->data);
		free(cur);
		return;
	}
	else
	{	
		for(i=1;i<loc;i++)
		{
			prev=cur;
			cur=cur->next;
		}
		prev->next=cur->next;
		free(cur);
		return;
	}
}
void reverse()
{
	node *left,*right,*cur;
	cur=head;
	right=NULL;
	while(cur!=NULL)
	{
		left=right;
		right=cur;
		cur=cur->next;
		right->next=left;
	}
	head=right;
}
int main()
{
	int ch,num,loc,k,data;
	node *head=NULL;
	do
	{
		printf("\n Options displayed:\n1)Insert at beginning\n2)Insert at last\n3)Insert at any particular location\n4)Count the nodes\n5)Reverse the nodes\n6)Search any element\n7)Delete the node\n8)Delete the node at any particular location\n9)Display\n");
		printf("Enter your choice:\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: {  printf("Enter the number:");
			          scanf("%d",&num);
			          addbeg(num);
			          break;
			      }
            case 2: { printf("Enter the number:");
			          scanf("%d",&num);
			          append(num);
			          break;
			}	     
			case 3: 
			{       printf("Enter the location");
			        scanf("%d",&loc);
			        if(loc<1 || (loc>c()+1))
			             printf("\n Invalid loc!");
			        else
					{
						printf("Enter the number");
			            scanf("%d",&num);
			            if(loc==1)
			            	  addbeg(num);
					    else if (loc ==c()+1)
					         append(num);
					    else
					        addbet(loc,num);       
			     	}
			    }
		    case 4: { k=c();
			          printf("No. of elements in the list is %d",k);
			          break;
			      }
			case 5: { reverse();
			         printf("list is reversed");
			         break;
			     }
			case 6: {
			        search();
			        break;
				}
			case 7: {printf("Enter the data to be deleted");
			        scanf("%d",data);
			        delnode(data);			            
				    break;
			}	
			case 8: {  printf("Enter the location");
			           scanf("%d",&loc);
			            delloc(loc);
					break;
			        }
			case 9: display();
			        break;
			default : printf("INVALID CHOICE!");        
		     	       break;
		}		     
	}
	   while(ch>0 &&ch<10);
}
