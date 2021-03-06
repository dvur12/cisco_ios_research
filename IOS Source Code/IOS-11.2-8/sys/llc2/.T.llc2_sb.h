
llc2_sb.h,1943
#define __LLC2_SB_H__55,1821
#define AKMAX_DEFAULT 64,1903
#define AKDELAY_DEFAULT 65,1932
#define IDLE_DEFAULT 66,1964
#define LOC_WIND_DEFAULT 67,2001
#define REM_WIND_DEFAULT 68,2030
#define N2_DEFAULT 69,2061
#define T1_DEFAULT 70,2091
#define LLC1_T_DEFAULT 71,2126
#define TBUSY_DEFAULT 72,2164
#define TREJ_DEFAULT 73,2199
#define TPF_DEFAULT 74,2233
#define XID_NEG_TIME 75,2268
#define XID_RTRY_TIME 76,2297
#define EXPLORER_TIME 78,2333
#define EXPLORER_RETRY 79,2411
#define XID_TIME 80,2489
#define XID_RETRY 81,2567
#define ADM_TIMER_DEFAULT 83,2646
#define L3_PID 85,2685
#define TXQ_MAX_DEFAULT 86,2763
#define FRAME_RELAY_DWC_DEFAULT 93,2896
#define FRAME_RELAY_DWC_0 94,2932
#define FRAME_RELAY_DWC_1 95,3012
#define FRAME_RELAY_DWC_2 96,3048
#define FRAME_RELAY_DWC_3 97,3084
#define FRAME_RELAY_DWC_4 98,3120
#define DYNWIND_NW_DEFAULT 99,3157
struct llc_sb_t_ llc_sb_t_107,3257
llc_sb_t *llc_create_sb 148,5222
llc_sb_t *llc_get_sb 216,6919
llc_sb_t *llc_get_or_create_sb 230,7166
boolean llc_destroy_sb 248,7428
boolean llc_sb_copy 279,7903
ulong llc_sb_get_wind 338,9816
ulong llc_sb_get_akmax 348,9996
ulong llc_sb_get_akdelay_time 358,10175
ulong llc_sb_get_n2 368,10370
ulong llc_sb_get_T1_time 378,10540
ulong llc_sb_get_trej_time 388,10720
ulong llc_sb_get_tpf_time 398,10906
ulong llc_sb_get_tbusy_time 408,11089
ulong llc_sb_get_idle_time 418,11278
ulong llc_sb_get_txQ_max 428,11464
ulong llc_sb_get_xid_time 438,11649
ulong llc_sb_get_xid_retry 448,11829
ulong llc_sb_get_xid_rtry_time 458,12012
ulong llc_sb_get_xid_neg_val_time 468,12207
ulong llc_sb_get_explorer_time 478,12407
ulong llc_sb_get_explorer_retry 488,12592
ulong llc_sb_get_l3_pid 498,12790
boolean llc_sb_get_dynwind 508,12964
ulong llc_sb_get_llc2_nw 518,13141
ulong llc_sb_get_fr_dwc 528,13324
sap_registry_t *llc_sb_get_sap_registry 545,13592
boolean llc_sb_set_sap_registry 561,13889
