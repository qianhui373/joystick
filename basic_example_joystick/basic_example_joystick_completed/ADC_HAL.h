/*
 * ADC_HAL.h
 *
 *  Created on: Oct 18, 2018
 *      Author: Leyla
 */

#ifndef ADC_HAL_H_
#define ADC_HAL_H_

void initADC();
void startADC();
void initJoyStick();
void getSampleJoyStick(unsigned *X, unsigned *Y);

#endif /* ADC_HAL_H_ */


////////////////////////////////////////////////////////////
#ifndef ADC_HAL_H_
#define ADC_HAL_H_
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
typedef enum  {left, notleft} _joystickleftstates;
///////////////////////////////////
struct _Joystick
{
    int x; //reading of the joystick
    int y;


    _joystickleftstates leftState;
    bool isTappedToLeft;
};
typedef struct _Joystick Joystick;

Joystick Joystick_construct();

void Joystick_refresh(Joystick *);
//bool Joystick_isPressedToLeft(Joystick *);
bool Joystick_isTappedToLeft(Joystick *);






void getSampleJoyStick(unsigned *X, unsigned *Y);

#endif /* ADC_HAL_H_ */
