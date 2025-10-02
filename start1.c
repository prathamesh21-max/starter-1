 // this is my first line of code
// working on arithmetic codes
// #DAY 1
//  how to find area and perimeter of rectangle
// 1.finding area of rectangle in C
    #include <stdio.h>
    int main()  {
    int area,length,breadth;
    printf("enter length of rectangle=");
    scanf("%d",&length);
    printf("enter breadth of rectangle=");
    scanf("%d",&breadth);
    area = length*breadth;
    printf("the area of rectangle is = %d",area);
    
    // 2.finding perimeter of rectangle in C
    
    int l,b,perimeter;
    printf("\nenter l of rectangle=");
    scanf("%d",&l);
    printf("enter b of rectangle=");
    scanf("%d", &b);
    perimeter = 2*(l+b);
    printf("the perimeter of reactangle is = %d",perimeter);


    // 3.finding area of circle in C
    float radius,A;
    printf("\nenter radius of circle=");
    scanf("%f",&radius);
    A = 3.14*radius*radius;
    printf("the area of circle is = %f", A);

    // 4.convert temprature in farenheit to celsius
    float celsius,farenheit;
    printf("enter value in celsius =");
    scanf("%f", &celsius);
    return 0;
    }


