#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *next;
};
int count(struct st *ptr){
    int c=0;
    while(ptr!=0){
        c++;
        ptr=ptr->next;
    }
    return c;
}
void add_end(struct st **ptr){
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data");
	scanf("%d",&temp->data);
	if(*ptr==NULL){
		temp->next=NULL;
		*ptr=temp;
	}
	else{
		struct st*last=*ptr;
		while(last->next!=NULL){
			last=last->next;
		}
		temp->next=last->next;
		last->next=temp;
	}
}
void sort_list(struct st *ptr){
	int c=count(ptr),i,j;
	struct st **p=(struct st**)malloc(c*sizeof(struct st*));
			struct st *temp_ptr=ptr;
			int temp;
			int size=sizeof(struct st)-sizeof(struct st*);

		for(i=0;i<c;i++){
			p[i]=temp_ptr;
			temp_ptr=temp_ptr->next;
			}

			for(i=0;i<c;i++){
				for(j=i+1;j<c;j++){
					if(p[i]->data>p[j]->data){
						temp=p[i]->data;
						p[i]->data=p[j]->data;
						p[j]->data=temp;
			}
		}
	}
}

struct st* duplicate_sorted(struct st *ptr){
    struct st *curr=ptr;
    struct st *dup;
    while(curr!=0&&curr->next!=0){
        if(curr->data==curr->next->data){
            dup=curr->next;
            curr->next=curr->next->next;
            free(dup);
        }
        else{
            curr=curr->next;
        }
    }
}
void print(struct st *ptr){
	while(ptr!=0){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	int op;
	struct st *hptr=NULL;
	do{
		add_end(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
	sort_list(hptr);
	printf("\n");
	duplicate_sorted(hptr);
	print(hptr);
}
