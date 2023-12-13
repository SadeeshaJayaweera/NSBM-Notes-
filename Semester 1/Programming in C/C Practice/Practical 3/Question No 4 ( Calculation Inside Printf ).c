#include <stdio.h>
int main()
{
  float radius, diameter;
  float constantValue, circumference, area;

  printf( "Radius of the circle: \n" );
  scanf( "%f", &radius );

  diameter = radius * 2;
  printf( "The diameter is %f\n", diameter );

  constantValue = 3.14159;
  circumference = constantValue * diameter;
  printf( "The circumference is %f\n", circumference );

  area = constantValue * radius * radius;
  printf("The area of the circle is %f\n", area );

  return 0;
}
