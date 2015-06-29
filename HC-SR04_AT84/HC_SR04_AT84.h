/*
 * HC-SR04_AT84.h
 *
 * Created: 2014-02-15 23:08:56
 *  Author: Wim
 */ 


#ifndef HC_SR04_AT84_H_
#define HC_SR04_AT84_H_

#define TRIGPRT PORTA
#define TRIGDDR DDRA
#define TRIGPIN PA3
#define ECHOPRT PINA
#define ECHODDR DDRA
#define ECHOPIN PA0
#define ECHOPCINT PCINT0

void SONARinit();
uint32_t SONARread();
uint32_t SONARavg();



#endif /* HC_SR04_AT84_H_ */
