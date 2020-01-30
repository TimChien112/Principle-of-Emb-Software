/**
*	@file 			PRG.h
*	@brief 		A function to PRG the data in specific address provided by users
*	
*	@author 		
*	@date 			Feb 24 2019 
*	@version  	1.0
*/
#ifndef  __PRG__
#define __PRG__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"


/**
*	@brief 		Check the parameters provided by users 
*	
*	@param 		param_input		buffer for parameters provided by users
*
*	@return 		res
*	-value = 0		ERROR (invalid parameters)
*	-value = 1		SUCCESS (PRG data with absolute address)
*	-value = 2		SUCCESS (PRG data with block and offset)
*/
INT8_t check_param_PRG(const param* param_input);
/**
*	@brief 		Invert the data in specific address provided by users
*	
*	@param 		param_input		buffer for parameters provided by users
*   
*	If (param_input->param3 == "DASHA")
*	- param_input->param1			Absolute address
*	- param_input->param2			The range in term of words(4-byte)
*	
* 	else
*	- param_input->param1			Index of the block
*	- param_input->param2			Offset to specific address in this block
*	- param_input->param3			The range in term of words(4-byte)	
*	
*	@return void.
*/
void PRG(param* param_input);
void PRG_data(UINT32_t* base,UINT32_t range,UINT64_t seed);

#endif