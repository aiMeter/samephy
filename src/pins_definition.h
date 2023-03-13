#ifndef PINS_H
#define PINS_H
#include<Arduino.h>
#ifdef ESP32
#ifdef ARDUINO_ESP32_DEV

#define S0   		            21
#define S1   		            22
#define S2   		   		    19
#define S3   		   		    18
#define S4   		   		    5
#define S5   		   		    16
#define S6   		   		    2
#define S7   		   		    12
#define S8   		   		    14

#define S15  		   		    3
#define S16  		   		    1
#define S17  		   		    23
#define S18  		   		    17
#define S19  		   		    4
#define S20  		   		    13
#define S21  		   		    15
#define S22  		   		    27

#define S28  		   		    34
#define S29  		   		    35
#define S30  		   		    32
#define S31  		   		    33
#define S32  		   		    25
#define S33  		   		    26

//Alternative pin-specific nomenclature

#define LED_BUILTIN	   		    2
#define BUILTIN_LED   		    LED_BUILTIN // backward compatibility
#define HOST_SIM_RX   		    13
#define HOST_SIM_TX   		    27
#define HOST_LORA_RX	   		18
#define HOST_LORA_TX	   		19

#endif // ARDUINO_ESP32_DEV

#ifdef ARDUINO_ESP32S3_DEV

#define S42  		   		    11
#define S43  		   		    9
#define S44  		   		    37
#define S45  		   		    36
#define S46  		   		    8
#define S47  		   		    18
#define S48  		   		    4
#define S49  		   		    35
#define S50  		   		    2

#define S54  		   		    48
#define S55  		   		    0
#define S56		       		    10


#define S58  		   		    36
#define S59		       		    37
#define S60  		   		    16
#define S61  		   		    38
#define S62  		   		    1
#define S63  		   		    39

#define S69  		   		    47


#define S73  		   		    35
#define S74  		   		    17
#define S75  		   		    15
#define S76  		   		    7
#define S77  		   		    40
#define S78  		   		    6

//Alternative pin-specific nomenclature

#define LED_BUILTIN	   		    48
#define BUILTIN_LED    		    LED_BUILTIN // backward compatibility
#endif // ARDUINO_ESP32S3_DEV

#endif // ESP32

//sim
#define S9   
#define S10  
#define S11  
#define S12  
#define S13  
#define S14  

#define S23  
#define S24  
#define S25  
#define S26  
#define S27  
//lora
#define S34  
#define S35  
#define S36  
#define S37  
#define S38  
#define S39  
#define S40  
#define S41 

#define S51  
#define S52  
#define S53  

#define S57  

#define S64  	
#define S65  	
#define S66  
#define S67  
#define S68  

#define S70  
#define S71  
#define S72 
 
#endif // PINS_DEFINITION_H
