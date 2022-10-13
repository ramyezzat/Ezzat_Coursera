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
 * @brief header file for stats functions and main function
 *
 * stats implmentation performing various statiscal functions
 *   and first week introduction-embedded-systems course assignment
 *
 * @author ramy ezzat
 * @date 13/10/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your libraries here */
#include <string.h>

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char * _array, unsigned int _length);
/**
 * @brief prints statistics of an array of unsigned char
 *
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return void
 */

void print_array(char * the_string, unsigned char * _array, unsigned int _length);
/**
 * @brief prints an array of unsigned char
 *
 * @param the_string the name that is associated with the array
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return void
 */

float find_median(unsigned char * _array, unsigned int _length);
/**
 * @brief calculates median value of an unsigned char array
 *
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return float median value of an unsined char array
 */

float find_mean(unsigned char * _array, unsigned int _length);
/**
 * @brief calculates mean value of an unsigned char array
 *
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return float mean value of an unsined char array
 */

unsigned char find_max(unsigned char * _array, unsigned int _length);
/**
 * @brief finds an unsigned char array maximum element
 *
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return unsigned char value of maximum array elemnet
 */

unsigned char find_min(unsigned char * _array, unsigned int _length);
/**
 * @brief finds an unsigned char array minimum element
 *
 * @param _array unsigned char pointer or an array address
 * @param _length array elements length
 *
 * @return unsigned char value of minimum array elemnet
 */

void sort_array(unsigned char * _array, unsigned int _length, char _order);
/**
 * @brief sorts an unsigned char array
 *
 * @param _array unsigned char pointer or an array address
 * @param _length unsigned int array length
 * @param _order char 'a' ascending and 'd' descending, with 'a' as defult if neither was found
 *
 * @return void
 */

void swap(unsigned char * x, unsigned char * y);
/**
 * @brief swaps elements values within a memory address
 *   can be used to swap unsigned char array elements
 * @param x unsigned char first element to be swaped
 * @param y unsigned char second element to be swaped
 * @return void
 */


#endif /* __STATS_H__ */
