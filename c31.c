#include <stdio.h>
#include<stdlib.h>
struct product
{
    float price;
    float discount;
};
float discount(struct product p)
{
     float d=(p.price*p.discount)/100;
     return p.price-d;
}
void update(struct product *p,int new)
{
    p->price=new;
}

int main()
{
    struct product p;
    printf("Enter the price Amount:");
    scanf("%f",&p.price);
    printf("\nEnter the discount:");
    scanf("%f",&p.discount);
    float  finalamount=discount(p);
    printf("%.2f",finalamount);
    printf("Enter the new price\n");
    float new;
    scanf("%f",&new);
    
    update(&p,new);
    printf("%f",p.price);
    
    return 0;
}
