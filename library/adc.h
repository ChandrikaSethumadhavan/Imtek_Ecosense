/*!
 *  \file       adc.h
 *
 *  \brief      Provides functions to configure the system adc
 *
 *  \date       03.02.2023
 *
 *  \author     Uttunga Shinde (IMTEK)
 */
#ifndef ADC_H
#define ADC_H

#include "stdint.h"
#include "am_util_delay.h"

static void timer3a_init(void);

//extern void *g_ADCHandle;
/*
void adc_init_Cap(void);

void adc_init_PAM(void *);

void adc_deconfig(void);

void adc_config_dma(void *);

void am_adc_isr(void);

void adcGetValue(uint32_t *adcReturn);

void adcTriggerInterrupt();

float getAdcTemperature();

float getAdcSample();

static void timer3a_init(void);

void takePAMsamples(uint32_t sampleBuffer[]);

*/
#endif