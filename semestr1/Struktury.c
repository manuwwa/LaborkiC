	

    // stos na bazie list
    #include<stdio.h>
    struct stos{
         int key;
         struct stos*next;};
             
             
             
             struct stos *dodanie(struct stos *head, int kluczyk)
              {
                  struct stos *cze;
                  cze=(struct stos*)malloc(sizeof(struct stos));
                 
                  cze->key=kluczyk;
                  cze->next=head;
                  return cze;
                   
              }
              void wypisz(struct stos *head)
              {
                   printf("%d ",head->key);
              }
          void wipiszcale(struct stos *head)
              {struct stos *cze;
              cze=head;
                   while (cze!=NULL)
                   {
                   wypisz(cze);  
                    cze=cze->next;
                   }
                 
              }
             
              struct stos *usuwanie(struct stos *head)
              { if(head!=NULL)
              {
                   struct stos *cze =head;
                   head=head->next;
                   free(cze);
                   return head;
              }
              }
             
              int main()
              {int i;
                   struct stos *head=NULL;
                   for(i=1;i<20;i++)
                   {
                   head=dodanie(head,i);
              }
             
                   wipiszcale(head);
                    head=usuwanie(head);
                     head=usuwanie(head);
                   head=usuwanie(head);
                   printf("\n");
                   wipiszcale(head);
                   getch();
              }

