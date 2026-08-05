#include <stdio.h>

void add_products(){
    printf("Enter Product ID : ");
    scanf("%d",&id);
    printf("Enter Product Price : ");
    scanf("%d",&price);
    printf("Enter Product Quantity : ");
    scanf("%d",&quantity);
}

void display_products(){
    for(int i = 0; i < n;i++){
        printf("Product ID : %d\n",id[i]);
        printf("Product Price : %d\n",price[i]);
        printf("Product Quantity : %d\n",quantity[i]);
    }
}

void search_product(){
    printf("Enter Product ID : ");
    scanf("%d",&search_id);
    for(int i = 0; i < n;i++){
        if(id[i] == search_id){
            printf("Product ID : %d\n",id[i]);
            printf("Product Price : %d\n",price[i]);
            printf("Product Quantity : %d\n",quantity[i]);
        }
    }
}

void delete_product(){
    printf("Enter Product ID : ");
    scanf("%d",&delete_id);
    for(int i = 0; i < n;i++){
        if(id[i] == delete_id){
            id[i] = 0;
            price[i] = 0;
            quantity[i] = 0;
        }
    }
}

int main(){

    printf("WELCOME TO SUPERMARKET PRODUCT SALES ANALYSIS SYSTEM");
    printf("1. Add products\n");
    printf("2. Display products\n");
    printf("3. Search product by ID\n");
    printf("4. Delete products\n");
    printf("5. Exit\n\n");

    int choice;
    int id[100];
    int price[100];
    int quantity[100];
    int n;

    printf("Enter your choice : ");
    scanf("%d",&choice);

    while (choice != 5){
        switch(choice){
            case 1:
                printf("Enter number of products : ");
                scanf("%d",&n);
                
                add_products(id,price,quantity,n);
                break;

            case 2:
                display_products(id,price,quantity,n);
                break;

            case 3:
                search_product(id,price,quantity,n);
                break;

            case 4:
                delete_product(id,price,quantity,n);
                break;

            case 5:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}