#pragma once
/* Eyelash corne (new corne)   42 KEY + Left Encoder + Right 5-way MATRIX / LAYOUT MAPPING

  ╭────────────────────────────┬──────────────────────────────────────╮
  │  0   1   2   3   4   5     │        6       7   8   9  10  11  12 │
  │ 13  14  15  16  17  18     │   19  20  21  22  23  24  25  26  27 │
  │ 28  29  30  31  32  33  34 │       35      36  37  38  39  40  41 │
  ╰───────────╮     42  43  44 │           45  46  47 ╭───────────────╯
              ╰────────────────┴──────────────────────╯
  ╭────────────────────────────┬──────────────────────────────────────╮
  │ LT5 LT4 LT3 LT2 LT1 LT0    │       RE1     RT0 RT1 RT2 RT3 RT4 RT5│
  │ LM5 LM4 LM3 LM2 LM1 LM0    │   RE4 RE0 RE2 RM0 RM1 RM2 RM3 RM4 RM5│
  │ LB5 LB4 LB3 LB2 LB1 LB0 LEC│       RE3     RB0 RB1 RB2 RB3 RB4 RB5│
  ╰───────────╮     LH2 LH1 LH0│           RH0 RH1 RH2╭───────────────╯
              ╰────────────────┴──────────────────────╯

*/

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11
#define RT5 12

#define LM0 13  // left-middle row
#define LM1 14
#define LM2 15
#define LM3 16
#define LM4 17
#define LM5 18

#define RM0 22  // right-middle row
#define RM1 23
#define RM2 24
#define RM3 25
#define RM4 26
#define RM5 27

#define LB0 28  // left-bottom row
#define LB1 29
#define LB2 30
#define LB3 31
#define LB4 32
#define LB5 33

#define LEC 34  // left encoder key

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH0 44  // left thumb keys
#define LH1 43
#define LH2 42

#define RH0 45  // right thumb keys
#define RH1 46
#define RH2 47

