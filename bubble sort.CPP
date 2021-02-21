#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>

struct node {           //structure for storing the values
   int data;
   struct node *next;
};

struct node *start = NULL;

void insert(int x) {                //inserting the values function
   struct node *t, *temp;
   t = (struct node*)malloc(sizeof(struct node));


   if (start == NULL) {
      start = t;
      start->data = x;
      start->next = NULL;
      return;
   }

   temp = start;

   while (temp->next != NULL)
      temp = temp->next;

   temp->next = t;
   t->data    = x;
   t->next    = NULL;
}

int main()
{
  srand(time(NULL));
  int i,data,j,z,f,m,temp;
  int gd = DETECT, gm;

  initgraph(&gd,&gm, "c:\\TurboC3\\BGI");



    for(i=1;i<=1000;i++)
    {
     data=1+(rand()%1000);
     line(0+i,data,0+i,500);
     insert(data);
     }




	    struct node *t,*g;
	    t=(struct node *)malloc(sizeof(struct node));
	    g=(struct node *)malloc(sizeof(struct node));




	    for(j=1;j<=1000;j++) {
	    g=start;
	    for(f=1;f<=1000-j;f++) {
	    if(j!=1){
	    g=g->next;
	    }
	    if(g->data>g->next->data){         //sorting
	    temp=g->data;
	    g->data=g->next->data;
	    g->next->data=temp;
	    }
	    }
	    }


	    for(i=1;i<=1000;i++)
	    {
	    line(i,start->data,i,500);
	    start=start->next;
	    }


  getch();
  return 0;

}




