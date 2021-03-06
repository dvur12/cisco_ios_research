
if_les_tms380.h,2485
typedef struct tms380_instance tms380_instance_t;tms380_instance_t64,2462
#define C16_SPEED_SET_BIT	88,3157
#define C16_SPEED_SELECT_BIT	89,3215
#define TMS380_NUM_BUF(TMS380_NUM_BUF98,3449
#define TMS380_NUM_CACHE(TMS380_NUM_CACHE99,3514
#define TMS380_LARGE_BUF_SIZE 101,3564
#define TMS380_2RNIM_BURST_MODE 104,3639
#define MAX_FRAME	212,7637
#define MIN_FRAME	213,7673
#define FM_BUF_ALIGN	214,7694
#define USE_TRANSMIT_DESC 239,9086
struct fm_receive_t_ fm_receive_t_241,9120
#define MADGE_LONG_ALIGN(MADGE_LONG_ALIGN255,9620
struct fm_transmit_t_ fm_transmit_t_258,9716
#define FM_TX_SPACE 260,9800
#define TIME_BASE 278,10446
#define BEG_TIME_380(BEG_TIME_380293,10823
#define END_TIME_380(END_TIME_380303,11134
#define MSG_TIME_380(MSG_TIME_380313,11445
#define ENTER_380(ENTER_380323,11749
#define ENTER_RSRB(ENTER_RSRB332,12023
#define TIME_BASE343,12307
#define BEG_TIME_380(BEG_TIME_380345,12326
#define END_TIME_380(END_TIME_380346,12351
#define MSG_TIME_380(MSG_TIME_380347,12376
#define ENTER_380(ENTER_380348,12403
#define ENTER_RSRB(ENTER_RSRB349,12424
#define DBG_BASE(DBG_BASE359,12533
#define DBGBEG(DBGBEG361,12575
#define DBGELSE 362,12619
#define DBGEND 363,12644
#define DTRACE(DTRACE365,12662
#define DBG(DBG369,12798
#define DBG0(DBG0372,12869
#define DBG1(DBG1375,12939
#define DBG2(DBG2378,13015
#define DBG3(DBG3381,13097
#define DBG4(DBG4384,13185
#define DBG8(DBG8387,13279
#define DBG_BASE(DBG_BASE393,13417
#define DBGBEG(DBGBEG395,13439
#define DBGELSE 396,13473
#define DBGEND 397,13498
#define DTRACE(DTRACE399,13516
#define DBG(DBG400,13538
#define DBG0(DBG0401,13557
#define DBG1(DBG1402,13576
#define DBG2(DBG2403,13598
#define DBG3(DBG3404,13623
#define DBG4(DBG4405,13650
#define DBG8(DBG8406,13680
#define DBG_TRACE 410,13743
#define DBG_PAK 411,13772
#define DBG_ADAPT 412,13801
#define DBG_MADGE 413,13830
#define DBG_MADGE_IN 414,13859
#define DBG_MADGE_OUT 415,13888
#define DBG_SRB 416,13917
#define DBG_ARB 417,13946
#define DBG_ADAPT_CHK 418,13975
#define DBG_CRC 419,14004
#define DBG_FST 420,14033
#define DBG_RSRB 421,14062
#define DBG_MADGE_TX 423,14092
#define DBG_TIMER 424,14121
#define DBG_XX 425,14150
#define DBG_2RNIM 426,14179
#define DBG_NOREM 428,14209
#define DBG_NOLOC 429,14242
#define DBG_DLSW 430,14275
enum TXRV TXRV435,14345
    TXRV_DROPPED,436,14357
    TXRV_QUEUE_IT,437,14396
    TXRV_SENT	438,14440
