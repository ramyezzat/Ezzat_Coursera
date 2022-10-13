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
 * @brief stats implmentation performing various statiscal functions
 *        and first week introduction-embedded-systems course assignment
 *
 * this file will contain
 * main function that will run the program and contain all sub-functions
 * print_statistics function that will print statistics
 * print_array function that will print an array
 * find_median function that will find a median of an array of unsigned char type
 * find_mean function that find the mean of an array of unsigned char
 * find_max function that find the max element in an array of unsigned char
 * find_min function that find the min element in an array of unsigned char
 * sort_array function that will sort an array of unsined char
 * swap function that will swap element inside an array of unsined char
 *
 * @author ramy ezzat
 * @date 13/10/2022
 *
 */



#include <stdio.h>
#include "stats.h"

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
  
}

/* Add other Implementation File Code Here | functions defined in the header*/

void print_statistics(unsigned char * _array, unsigned int _length){
  /* @brief  function that prints the statistics of an array including minimum, maximum, mean, and median
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return null
  */
  
}

void print_array(char * the_string, unsigned char * _array, unsigned int _length){
  /* @brief prints the array to the screen
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return null
  */
  
}

float find_median(unsigned char * _array, unsigned int _length){
  /* @brief calculates median value
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return float median value
  */
  
}

float find_mean(unsigned char * _array, unsigned int _length){
  /* @brief calculates mean value
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return float mean value
  */
  
}


unsigned char find_max(unsigned char * _array, unsigned int _length){
  /* @brief finds an array maximum element
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return unsigned char value of maximum array elemnet
  */
  
}

unsigned char find_min(unsigned char * _array, unsigned int _length){
  /* @brief inds an array minimum element
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @return unsigned char value of minimum array elemnet
  */
  
}

void sort_array(unsigned char * _array, unsigned int _length, char _order){
  /* @brief sorts an unsigned char array
     @param _array unsigned char pointer or an array address
     @param _length unsigned int array length
     @param _order char 'a' ascending and 'd' descending, with 'a' as defult
            if neither was found
     @return null
  */
  
}


void swap(unsigned char * x, unsigned char * y){
  /* @brief swaps elements values within a memory address
            can be used to swap unsigned char array elements
     @param x unsigned char first element to be swaped
     @param y unsigned char second element to be swaped
     @return null
  */
  
}
