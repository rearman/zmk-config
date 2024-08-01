#pragma once

/* Left Top Row */
#define LT0 5
#define LT1 4
#define LT2 3
#define LT3 2 
#define LT4 1
#define LT5 0

/* Left Middle Row */
#define LM0 17
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

/* Left Bottom Row */
#define LB0 29
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

#define LEFT_FINGERS LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5

/* Right Top Row */
#define RT0 6
#define RT1 7
#define RT2 8
#define RT3 9
#define RT4 10
#define RT5 11

/* Right Middle Row */
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

/* Right Bottom Row */
#define RB0 30
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define RIGHT_FINGERS RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5

/* Left Thumbs Row */
#define LH0 38
#define LH1 37
#define LH2 36

#define LEFT_THUMBS LH0 LH1 LH2

/* Right Thumbs Row */
#define RH0 39
#define RH1 40
#define RH2 41

#define RIGHT_THUMBS RH0 RH1 RH2

#define LEFT_SIDE <LEFT_FINGERS LEFT_THUMBS RIGHT_THUMBS>
#define RIGHT_SIDE <RIGHT_FINGERS LEFT_THUMBS RIGHT_THUMBS>
