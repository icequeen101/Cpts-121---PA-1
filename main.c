/*******************************************************************************************

* Programmer: Liana Wu                                                                        *

* Class: CptS 121, Fall 2019; Lab Section 03                                               *

* Programming Assignment: 1                                                      *

* Date: September 1, 2019                                                                            *

* Description: Write a C program that evaluates the equations provided below.       *

*******************************************************************************************/

#include <stdio.h> 
#include <math.h>
#define PI 3.14

int main(void)
{
	/* Total Series Resistance */
	int R1 = 0, R2 = 0, R3 = 0;	//variables
	double series_resistance = 0.0;
	
	printf("Please enter the values of 3 resistors (all integers) connected in series: "); //user input
	scanf(" %d%d%d", &R1, &R2, &R3);

	series_resistance = R1 + R2 + R3; //calculations
	printf("Total Series Resistance: series_resistance = R1 + R2 + R3 = %d + %d + %d = %lf\n", R1, R2, R3, series_resistance); //display

	/* Sales Tax */
	double total_sales_tax = 0.0, sales_tax_rate = 0.0, item_cost = 0.0;
	
	printf("Enter sales tax rate & item cost: "); 
	scanf(" %lf%lf", &sales_tax_rate, &item_cost);

	total_sales_tax = sales_tax_rate * item_cost;
	printf("Total Sales Tax: total_sales_tax = sales_tax_rate * item_cost = %lf * %lf = %lf\n", sales_tax_rate, item_cost, total_sales_tax);

	/* Volume */
	double volume_pyramid = 0.0, l = 0.0, w = 0.0, h = 0.0;
	
	printf("Enter length, width, & height of the right rectangular pyramid: ");
	scanf(" %lf%lf%lf", &l, &w, &h);

	volume_pyramid = (l * h * w) / 3;
	printf("Volume Of Pyramid: volume_pyramid = (l * w * h) / 3 = (%lf * %lf * %lf) / 3 = %lf\n", l, w, h, volume_pyramid);

	/* Total Parallel Resistance */
	double parallel_resistance = 0.0; 

	printf("Enter new values of R1, R2, & R3: ");
	scanf(" %d%d%d", &R1, &R2, &R3);
	
	parallel_resistance = 1 / ((1 / (double)R1) + ((1 / (double)R2)) + ((1 / (double)R3)));
	printf("Parallel Resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) = 1 / (1 / %d + 1 / %d + 1 / %d)  = %lf\n", R1, R2, R3, parallel_resistance);

	/* Character Encoding */
	char encoded_character = '/0', plaintext_character = '/0';
	int shift = 0;

	printf("Enter a character and a shift value: ");
	scanf(" %c%d", &plaintext_character, &shift);

	encoded_character = (plaintext_character - 'a') + 'A' - shift;
	printf("Character Encoding: encoded_character = (plaintext_character - 'a') + 'A' - shift = (%c - 'a') + 'A' - %d = %c\n", plaintext_character, shift, encoded_character);
	
	/* Distance Between 2 Points */
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, distance = 0.0;

	printf("Enter a x1, y1, x2, y2: ");
	scanf(" %lf%lf%lf%lf", &x1, &y1, &x2, &y2);

	distance = sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)));
	printf("Distance: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) = square root of ((%lf - %lf)^2 + (%lf - %lf)^2) = %lf\n", x1, x2, y1, y2, distance);
	
	/* General Equation */
	double y = 0.0, z = 0.0, x = 0.0;
	int a = 0;

	printf("Enter y, z, x, a: ");
	scanf(" %lf%lf%lf%d", &y, &z, &x, &a);

	printf("Distance: y = y / (3 / 17) - z + x / (a %% 2) + PI =  %lf / (3 / 17) - %lf + %lf / (%d %% 2) + PI = ", y, z, x, a);
	y = y / ((double)3 / (double)17) - z + x / (a % 2) + PI;
	printf("%lf\n", y);

	return 0;
}