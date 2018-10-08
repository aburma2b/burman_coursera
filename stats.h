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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

/**
 * @brief Function prints statistics of array
 *
 * Function iterates over array and prints out statistics such as
 * minimum, maximum, mean, and median.
 *
 * @param array passing array to be computed on by reference
 * @param len the length of array
 *
 * @return returns 0
 */

 void print_statistics(unsigned char *array, int len);


/**
 * @brief Function prints contents of array
 *
 * Function iterates over array and prints out all its contents
 *
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns 0
 */

 void print_array(unsigned char *array, int len);


/**
 * @brief Function finds the median
 *
 * Function finds median of all the values held in the array
 * 
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns median
 */

 int find_median(unsigned char *array, int len);


/**
 * @brief Function finds the mean
 *
 * Function finds mean of all the values held in the array
 * 
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns mean
 */

 int find_mean(unsigned char *array, int len);


/**
 * @brief Function finds the maximum
 *
 * Function finds maximum our of all the values held in the array
 * 
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns maximum
 */

 int find_maximum(unsigned char *array, int len);

 
 /**
 * @brief Function finds the minimum
 *
 * Function finds minimum out of all the values held in the array
 * 
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns minimum
 */

 int find_minimum(unsigned char *array, int len);


/**
 * @brief Function sorts the array 
 *
 * Function sorts the array from largest to smallest
 * 
 * @parm array passing array by reference
 * @parm len passing the length of the array as an int
 *
 * @return returns 0
 */

 void sort_array(unsigned char *array, int len);


#endif /* __STATS_H__ */
