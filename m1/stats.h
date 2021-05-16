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
 * @file stats.h 
 * @brief Header file
 *
 * The stats.h header file includes declarations and documentation for the 
 * functions from the stats.c file. 
 *
 *
 * @author Devika Nair
 * @date 15-05-2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char arr[], unsigned int length);
/**
 * @brief Prints statistics
 *
 * A function that prints the statistics of an array : minimum, maximum, mean, and median.
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param unsigned arr <A unsigned char pointer to an n-element data array whose mean value is to be computed>
 * @param length <the length of the input array>
 *
 *
 * @return void
 */
 

 
 
  void print_array(unsigned char arr[], unsigned int length);
 /**
 * @brief Prints the array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param unsigned arr <A unsigned char pointer to an n-element data array whose mean value is to be computed>
 * @param length <the length of the input array>

 *
 * @return void
 */
 
 
 
 
 unsigned char find_median(unsigned char arr[], unsigned int length);
 /**
 * @brief Returns the median value
 *
 * Given an array of data and the length of the array, this function returns the median value.
 *
 * @param arr <A unsigned char pointer to an n-element data array whose median value is to be computed>
 * @param length <the length of the input array>

 *
 * @return the median of the input array
 */
 
 
  
  
  unsigned char find_mean(unsigned char arr[], unsigned int length);
  /**
 * @brief Returns the mean value
 *
 * Given an array of data and the length of the array, this function returns the mean value.
 *
 * @param arr <A unsigned char pointer to an n-element data array whose mean value is to be computed>
 * @param length <the length of the input array>

 *
 * @return the mean of the input array
 */
 
 
 
 
  unsigned char find_maximum(unsigned char arr[], unsigned int length);
  /**
 * @brief Returns the maximum value
 *
 * Given an array of data and the length of the array, this function returns the maximum value from the data.
 *
 * @param arr <A unsigned char pointer to an n-element data array of which the maximum value is returned>
 * @param length <the length of the input array>

 *
 * @return the maximum value of the input array
 */
 
 
  
  
 unsigned char find_minimum(unsigned char arr[], unsigned int length);
  /**
 * @brief Returns the minimum value
 *
 * Given an array of data and the length of the array, this function returns the smallest value from the data.
 *
 * @param arr <A unsigned char pointer to an n-element data array of which the smallest value is returned>
 * @param length <the length of the input array>

 *
 * @return the smallest value of the input array
 */



 void sort_array(unsigned char arr[], unsigned int length);
 /**
 * @brief Sorts an array from the largest to the smallest value
 *
 * Given an array of data and a length, this functions sorts the array from largest 
 * to smallest. (The zeroth Element should be the largest value, and the last 
 * element (n-1) should be the smallest value. )
 *
 * @param arr <A unsigned char pointer to an n-element data array>
 * @param length <the length of the input array>

 *
 * 
 */


 


#endif /* __STATS_H__ */
