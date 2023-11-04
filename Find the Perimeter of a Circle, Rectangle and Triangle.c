#include<stdio.h>
#include<math.h>
int main ()
{
    int length , width , height , radius , x , y , z , w ;
    char c ;
    printf("Choose operation to perform : \n");
    printf("1 - Perimeter of rectangle \n");
    printf("2 - Perimeter of General triangle \n");
    printf("3 - Perimeter of Equilateral triangle \n");
    printf("4 - Perimeter of Right angled triangle \n");
    printf("5 - Perimeter of circle \n");
    c = getchar();
    if (c == '1'){
        printf("Enter the values of length and width :");
        scanf("%d %d" , &length , &width);
        printf("\nPerimeter of rectangle is  %f", 2*(float)(length + width));
    }else if (c == '2'){
        printf("Enter the values of all the sides of the triangle :");
        scanf("%d %d %d" , &x , &y , &z);
        printf("\nPerimeter of general triangle is %f ",(float)x+y+z );
    }else if (c == '3'){
        printf("Enter the value of a side :");
        scanf("%d" , &w);
        printf("\nPerimeter of equilateral triangle is %f" , 3*(float)w);
    }else if (c == '4'){
        printf("Enter values of width and height of a triangle :");
        scanf("%d %d" , &width , &height);
        printf("\nPerimeter of a right angled triangle is %f" , ((width + height)+sqrt(width ^ 2 + height ^ 2)));
    }else {
        printf("Enter the radius of the circle :");
        scanf("%d" , &radius);
        printf("\nPerimeter of the circle is %f" , (2*(3.14159265359)*radius));
    }
}