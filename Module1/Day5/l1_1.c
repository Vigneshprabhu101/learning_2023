/*
 Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
*/
#include <stdio.h>
struct Box 
{
    int len;
    int wdh;
    int hgh;
}b;
void VandS(struct Box *b,int *v,int *s) 
{
    *v=b->len * b->wdh * b->hgh;
    *s= 2*(b->len * b->wdh + b->len * b->hgh + b->wdh * b->hgh);
}
int main() 
{
    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%d",&b.len);
    printf("Width: ");
    scanf("%d",&b.wdh);
    printf("Height: ");
    scanf("%d",&b.hgh);
    int v,s;
    VandS(&b,&v,&s);
    printf("Volume of box for given dimension is : %d\n", v);
    printf("And Tttal Surface Area: %d\n", s);
    return 0;
}
