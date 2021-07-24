/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#define INTMODULE_HEARTBEAT_EXTI_IRQn_PRIO          0
#define TELEMETRY_TIMER_IRQn_PRIO                   0
#define TELEMETRY_EXTI_IRQn_PRIO                    0

#define TIM8_BRK_TIM12_IRQn                         2

#define PWM_IRQn_PRIO                               3

#define BT_USART_IRQn_PRIO                          6
#define EXTMODULE_USART_IRQn_PRIO                   6
#define INTMODULE_USART_IRQn_PRIO                   6
#define TELEMETRY_EXTI_IRQn_PRIO                    6
#define TELEMETRY_USART_IRQn_PRIO                   6

#define AUDIO_TIM_IRQn_PRIO                         7
#define AUDIO_DMA_Stream_IRQn_PRIO                  7
#define AUX_SERIAL_USART_IRQn_PRIO                  7
#define AUX2_SERIAL_USART_IRQn_PRIO                 7
#define EXTMODULE_TIMER_DMA_STREAM_IRQn_PRIO        7
#define EXTMODULE_TIMER_CC_IRQn_PRIO                7
#define INTMODULE_DMA_STREAM_IRQn_PRIO              7
#define INTMODULE_TIMER_CC_IRQn_PRIO                7
#define INTERRUPT_xMS_IRQn_PRIO                     7
#define ROTARY_ENCODER_TIMER_IRQn_PRIO              7
#define TRAINER_DMA_IRQn_PRIO                       7
#define TRAINER_MODULE_CPPM_TIMER_IRQn_PRIO         7
#define TRAINER_TIMER_IRQn_PRIO                     7
#define TELEMETRY_DMA_TX_Stream_IRQ_PRIO            7
#define TRAINER_DMA_IRQn_PRIO                       7
#define TRAINER_TIMER_IRQn_PRIO                     7

#define MIXER_SCHEDULER_TIMER_IRQn_PRIO             8

#define PWM_IRQn_PRIO                               10

#define OTG_FS_IRQn_PRIO                            11