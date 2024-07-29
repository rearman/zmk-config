#pragma once

/* Left Top Row */
#define LT0 0
#define LT1 1
#define LT2 2
#define LT3 3
#define LT4 4
#define LT5 5

/* Left Middle Row */
#define LM0 12
#define LM1 13
#define LM2 14
#define LM3 15
#define LM4 16
#define LM5 17

/* Left Bottom Row */
#define LB0 24
#define LB1 25
#define LB2 26
#define LB3 27
#define LB4 28
#define LB5 29

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
#define LH0 36
#define LH1 37
#define LH2 38

#define LEFT_THUMBS LH0 LH1 LH2

/* Right Thumbs Row */
#define RH0 39
#define RH1 40
#define RH2 41

#define RIGHT_THUMBS RH0 RH1 RH2

#define LEFT_SIDE <LEFT_FINGERS LEFT_THUMBS RIGHT_THUMBS>
#define RIGHT_SIDE <RIGHT_FINGERS LEFT_THUMBS RIGHT_THUMBS>
