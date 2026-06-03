#include <stdio.h>
#include<stdlib.h>
struct customer
{
   int id;
   char name[250];
};
struct Item
{
    int It;
    char itemname[250];
    int price;
};
struct order
{
    struct customer cust;
    struct Item item;
    int q;
};
void print(struct order o)
{
  printf("the customerid");
    printf("%d\n",o.cust.id);
    printf(" the customer name");
    printf("%s\n",o.cust.name);
    printf(" the it");
    printf("%d\n",o.item.It);
    printf(" the item name:");
    printf("%s\n",o.item.itemname);
    printf("price %d\n",o.item.price);
    printf("the quantity:");
    printf("%d\n",o.q);
    printf(" total amaout %d", o.item.price * o.q);
    
    }

int main()
{
    struct order o;
    printf("Enter the customerid\n");
    scanf("%d",&o.cust.id);
    printf("Enter the customer name\n");
    scanf("%s",o.cust.name);
    printf("Enter the it\n");
    scanf("%d",&o.item.It);
    printf("Enter the item name:\n");
    scanf("%s",o.item.itemname);
    printf("Enter the price");
    scanf("%d",&o.item.price);
    printf("Enter the quantity:\n");
    scanf("%d",&o.q);
    print(o);
    return 0;
}
