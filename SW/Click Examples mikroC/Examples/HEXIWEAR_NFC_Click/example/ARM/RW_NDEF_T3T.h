/****************************************************************************
* Title                 :   ADC Application
* Filename              :   adc_app.h
* Author                :   RBL
* Origin Date           :   06/07/2012
* Notes                 :   None
*****************************************************************************/
/**************************CHANGE LIST **************************************
*
*    Date    Software Version    Initials   Description
*  20/02/16    XXXXXXXXXXX         RBL      Interface Created.
*
*****************************************************************************/
/** @file file_here.h
 *  @brief What is does
 *
 *  @date 20 Feb 2016
 *  @author Richard Lowe
 *  @copyright GNU Public License
 *
 *  @version .1 - Initial testing and verification
 *
 *  @note Test configuration:
 *   MCU:             STM32F107VC
 *   Dev.Board:       EasyMx Pro v7
 *   Oscillator:      72 Mhz internal
 *   Ext. Modules:    GPS Click
 *   SW:              ARM 4.5.2
 *
 */
#ifndef RW_NDEF_T3T_H_
#define RW_NDEF_T3T_H_

/******************************************************************************
* Includes
*******************************************************************************/
#include <stdint.h>

/******************************************************************************
* Preprocessor Constants
*******************************************************************************/


/******************************************************************************
* Configuration Constants
*******************************************************************************/


/******************************************************************************
* Macros
*******************************************************************************/



/******************************************************************************
* Typedefs
*******************************************************************************/


/******************************************************************************
* Variables
*******************************************************************************/


/******************************************************************************
* Function Prototypes
*******************************************************************************/
#ifdef __cplusplus
extern "C"{
#endif

/**
 * @brief rw_ndef_t3t_reset
 */
void rw_ndef_t3t_reset( void );

/**
 * @brief rw_ndef_t3t_set_id_m
 * @param p_id_m
 */
void rw_ndef_t3t_set_id_m( uint8_t *p_id_m );

/**
 * @brief rw_ndef_t3t_read_next
 * @param p_cmd
 * @param cmd_size
 * @param rsp
 * @param p_rsp_size
 */
void rw_ndef_t3t_read_next( uint8_t *p_cmd, uint16_t cmd_size,
                            uint8_t *rsp, uint16_t *p_rsp_size );

#ifdef __cplusplus
} // extern "C"
#endif

#endif /*File_H_*/

/*** End of File **************************************************************/

