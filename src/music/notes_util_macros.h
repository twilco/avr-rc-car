#ifndef NOTES_UTIL_MACROS_H_
#define NOTES_UTIL_MACROS_H_

#define MS_IN_SECOND 1000

/*
   Calculates the OCR value necessary to play the specified frequency with PWM in CTC mode.
   Check the datasheet for your microcontroller, the equation might be different here.
*/
#define CALC_CTC_FREQ(clock_freq, prescaler, note_freq_hz) ( (uint32_t) clock_freq / ( (uint16_t) note_freq_hz * (uint16_t) prescaler * 2) - 1)
#define CALC_TIMER_OVERFLOWS(clock_freq, prescaler, duration_ms, timer_resolution) (uint32_t) ( clock_freq * ( (float) duration_ms / (float) MS_IN_SECOND ) / prescaler / timer_resolution )

#endif /* NOTES_UTIL_MACROS_H_ */