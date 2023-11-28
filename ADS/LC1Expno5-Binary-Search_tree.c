
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left_child;
	struct node *right_child;
};

struct node* new_node(int x){
	struct node *p;
	p = malloc(sizeof(struct node));
	p->data = x;
	p->left_child = NULL;
	p->right_child = NULL;
	return p;
}

struct node* insert(struct node* root,int x){
	if(root==NULL){
		return new_node(x);
	}
	else if(x > root->data){
		root->right_child =  insert(root->right_child,x);
	}
	else{
		root->left_child = insert(root->left_child,x);
	}
	return root;
}

struct node* search(struct node* root,int x){
	if(root==NULL){
		printf("Value is not there\n");
	}
	else if(root->data==x){
		printf("Value is there\n");
	}
	else if(x > root->data){
		return search(root->right_child,x);
	}
	else{
		return search(root->left_child,x);
	}
}

struct node* Findmin(struct node* root){
	if (root->left_child != NULL){
		return Findmin(root->left_child);
	}
	else{
		return root;
	}
}

struct node* Delete(struct node *root, int x)
{
    if(root==NULL)
        return NULL;
    if (x>root->data)
        root->right_child = Delete(root->right_child, x);
    else if(x<root->data)
        root->left_child = Delete(root->left_child, x);
    else
    {
        if(root->left_child==NULL && root->right_child==NULL)
        {
            free(root);
        }

        else if(root->left_child==NULL || root->right_child==NULL)
        {
            struct node *temp;
            if(root->left_child==NULL)
                temp = root->right_child;
            else
                temp = root->left_child;
            free(root);
            return temp;
        }

        //Two Children
        else{
            struct node *temp =Findmin(root->right_child);
            root->data = temp->data;
            root->right_child=Delete(root->right_child, temp->data);
        }
    }
    return root;
}

void printtree(struct node *root)
{
    if(root!=NULL)
    {
        printtree(root->left_child);
        printf(" %d ", root->data);
        printtree(root->right_child);
    }
}

int main(){
	int option,val;
	struct node* root=NULL;
	printf("select Option:\n");
	printf("1)Insert a new node\n");
	printf("2)Search a value from binary tree\n");
	printf("3)Delete a node\n");

	printf("4)Print the binary tree\n");
	printf("5)Exit");



	do{
		printf("\nEnter the option : ");
		scanf("%d",&option);
		switch(option){
			case 1: printf("Enter the value you want to insert : ");
					scanf("%d",&val);
					root = insert(root,val);
					printf("Value inserted\n");
					break;
			case 2: printf("Enter the value you want to search : ");
					scanf("%d",&val);
					search(root,val);
					break;
			case 3: printf("Enter the value you want to delete : ");
					scanf("%d",&val);
					root = Delete(root,val);
					printf("Node is deleted");
					break;

			case 4: printtree(root);
					break;
			case 5: printf("EXIT");
					exit(0);
			default: printf("Incorrect option. Please try again\n");
		}
	}while(option != 6);


}


