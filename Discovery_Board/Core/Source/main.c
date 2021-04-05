/**-----------------------------------------------------------------------------
 * @file    :  main.cpp
 * @author  :  Sohun Patel
 * @date    :  03 April 2021
 * @brief   :  main function
 * -----------------------------------------------------------------------------
 **/

/*----- Includes -------------------------------------------------------------*/
#include "cmsis_os2.h"
#include "main.h"
#include "stdint.h"

void MP3_Decoding_Thread(void *argument);
void MP3_Queueing_Thread(void *argument);

osThreadId_t MP3_Decoding;
osThreadId_t MP3_Queueing;

int main() {    
    MP3_Decoding = osThreadNew(MP3_Decoding_Thread, NULL, NULL);
    MP3_Queueing = osThreadNew(MP3_Queueing_Thread, NULL, NULL);

    /*----- Start scheduler --------------------------------------------------*/    
    osKernelStart();

    while (1);
}