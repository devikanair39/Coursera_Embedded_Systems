	/******************************************************************************
	 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
	 *
	 * Redistribution, modification or use of this software in source or binary
	 * forms is permitted as long as the files maintain this copyright. Users are 
	 * permitted to modify this and use it to learn about the field of embedded
	 * software. Alex Fosdick and the University of Colorado are not liable for any
	 * misuse of this material. 
	 *
	 *****************************************************************************/
	/**
	 * @file stats.c
	 * @brief Implementation file
	 *
	 * This file contains the function implementations to analyze an array of 
	 * unsigned char data items and report analytics on the maximum, minimum,
	 * mean, and median of the data set.
	 * @author Devika Nair
	 * @date 15-05-2021
	 *
	 */
	
	
	
	#include <stdio.h>
	#include "stats.h"
	#include <math.h>
	
	/* Size of the Data Set */
	#define SIZE (40)
	
	void main() {
	
	  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
	                              114, 88,   45,  76, 123,  87,  25,  23,
	                              200, 122, 150, 90,   92,  87, 177, 244,
	                              201,   6,  12,  60,   8,   2,   5,  67,
	                                7,  87, 250, 230,  99,   3, 100,  90};
	
	  /* Other Variable Declarations Go Here */
	   
	  /* Statistics and Printing Functions Go Here */
      print_statistics(test,SIZE);
		
	  
	}
	
	/* Add other Implementation File Code Here */
	
	void print_statistics(unsigned char arr[], unsigned int length)
	  {
	  	printf("The original array:\n");
		print_array(arr, length);
		sort_array(arr, length);
		printf("The Sorted array:\n");
		print_array(arr, length);
	  	printf("The mean of the input data is : %d \n",find_mean(arr,length));
	  	printf("\n");
	  	printf("The median of the input data is : %d \n",find_median(arr,length));
	  	printf("\n");
	  	printf("The maximum number from the input data is : %d \n",find_maximum(arr,length));
	  	printf("\n");
	  	printf("The minimum number from the input data is : %d \n",find_minimum(arr,length));
	  	printf("\n");

	  }
	 
	  void print_array(unsigned char arr[], unsigned int length)
	  {
	  	int i;                            
	  	int j;                       
	  	for(i = 0; i < SIZE/8; i++)                  //row formatting               
	  	{
	  		for(j = 0; j < SIZE/5; j++)             //column formatting
	  		{
	  			printf("%3d ",arr[8*i + j]);
			}
			printf("\n");
		}
		printf("\n");
	  }
	  
	  unsigned char find_median(unsigned char arr[], unsigned int length)
	  {
	     int n =(length+1)/2 -1;      //-1 because the array indexing starts from -1
	  	 return arr[n];
	  }
	  
	 unsigned char find_mean(unsigned char arr[], unsigned int length)
	 {
	 	int mean;
	 	int sum = 0;
	 	int i;
	 	for(i = 0;i<length;i++)
	 	{
	 		sum += arr[i];	
		}
		mean = round(sum/length);
		return (unsigned char) mean;     //typecasting
	 }
	 
	
	  void sort_array(unsigned char arr[], unsigned int length)
	 {
	 	unsigned char temp;
	 	int i;
	 	int j;
	 	//int max_idx;
	 	for(i = 0; i < length; i++)
	 	{
	 		for(j = i+1; j < length; j++)
	 		{
	 			
	 			if(arr[i] < arr[j])
	 			{
	 				temp = arr[i] ;
					arr[i] = arr[j];
					arr[j] = temp;	
				}
			}
		}
		
	 }
	 
	 unsigned char find_minimum(unsigned char arr[], unsigned int length)
	 {
	 	int i;
	 	int min = arr[0];
	 	for(i = 1; i < length; i++)
	 	{
	 		if(min > arr[i])
	 		{
	 			min = arr[i];
			}
	 		
		}
	 	return (unsigned char)min;
	 }
	 
	 unsigned char find_maximum(unsigned char arr[], unsigned int length)
	 {
	 	int i;
	 	int max = arr[0];
	 	for(i = 1; i < length; i++)
	 	{
	 		if(max < arr[i])
	 		{
	 			max = arr[i];
			}
		}
		return (unsigned char)max;
	 }
	

		


