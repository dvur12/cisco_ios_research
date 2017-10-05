
if_aip.h,3870
#define __IF_AIP_H__62,2201
#define AIP_RATEQ_NO 64,2223
#define AIP_MIN_PEAK_RATE 65,2293
#define	AIP_HOLDQ	66,2359
#define VISIBLE_AIP_BANDWIDTH 71,2456
#define	VISIBLE_AIP_BANDWIDTH_SONET 72,2494
#define	VISIBLE_AIP_BANDWIDTH_4B5B 73,2537
#define	VISIBLE_AIP_BANDWIDTH_E3 74,2580
#define	VISIBLE_AIP_BANDWIDTH_DS3 75,2622
#define	AIP_DELAY	80,2707
#define	AIP_SONET_DELAY	81,2763
#define	AIP_4B5B_DELAY	82,2817
#define	AIP_E3_DELAY	83,2870
#define	AIP_DS3_DELAY	84,2919
#define AIP_DS3_FRAMING_DEFAULT	85,2970
#define AIP_E3_FRAMING_DEFAULT 86,3027
#define	AIP_MAX_BURST	88,3090
#define	AIP_CONFIG_DELAY	89,3156
#define AIP_MAX_VPIBITS	95,3316
#define AIP_MAX_VCIBITS	96,3343
#define AIP_TOTAL_VPIVCI_BITS 97,3371
#define	AIP_CMD_SETUP_VC	102,3475
#define	AIP_CMD_TEARDOWN_VC	103,3502
#define	AIP_CMD_CONFIG	104,3532
#define	AIP_CMD_GET_STATS	105,3558
#define	AIP_NOCMD	110,3651
#define	AIP_CONFIG_FAIL	111,3672
#define	AIP_CMD_OK	112,3699
#define	AIP_CMD_FAIL	113,3721
#define	AIP_INVLD_PLIM	114,3745
#define	AIP_STS_OK	119,3833
#define	AIP_STS_NO_VC	120,3880
#define	AIP_STS_BAD_VC	121,3935
#define	AIP_STS_BAD_RATEQ	122,3991
#define	AIP_STS_BAD_VPI	123,4046
#define	AIP_STS_BAD_VCI	124,4101
#define	AIP_STS_BAD_AAL	125,4156
#define	AIP_STS_BAD_CONFIG	126,4208
#define	AIP_STS_CMD_FAIL	127,4264
#define	AIP_STS_CONFIG_FAIL	128,4319
#define	AIP_STS_TIMEOUT	129,4377
#define	AIP_STS_BUSY	130,4438
#define	AIP_COND_CMD	136,4589
#define	AIP_COND_RSVD1	137,4649
#define	AIP_COND_STS_MASK	138,4698
#define	AIP_COND_RSVD2	139,4762
#define	AIP_BAD_RATEQ	141,4819
#define AIP_RATEQ_DELAYED 142,4845
#define	AIP_EVNT_VC_STATS	147,4921
#define	AIP_CMD_WAIT	152,5040
typedef struct aip_cmd_t_ aip_cmd_t_154,5097
} aip_cmd_t;aip_cmd_t157,5160
#define	AIP_DM_PTI	162,5242
#define	AIP_DM_XD_INTT	163,5292
#define	AIP_DM_EOM_EN	164,5323
#define	AIP_DM_APP_CRC32	165,5353
#define	AIP_DM_PKT_AAL34	166,5385
#define	AIP_DM_PKT_AAL5	167,5446
#define	AIP_DM_PKT_OAM_VC	168,5505
#define	AIP_DM_PKT_OAM_DM	169,5569
#define	AIP_RATEQ_RSVD	204,6993
#define	AIP_RATEQ_XOFF_EN	205,7024
#define	AIP_RATEQ_ENABLE	206,7076
#define	AIP_RATEQ_PRESCALE0	207,7133
#define	AIP_RATEQ_PRESCALE1	208,7194
#define	AIP_RATEQ_PRESCALE2	209,7256
#define	AIP_RATEQ_PRESCALE3	210,7318
#define	AIP_RATEQ_PRELOAD	211,7381
typedef struct aip_cmd_cfg_t_ aip_cmd_cfg_t_213,7437
} aip_cmd_cfg_t;aip_cmd_cfg_t216,7542
#define	AIP_VCM_CRC32	222,7667
#define	AIP_VCM_CCMODE_MASK	223,7728
#define	AIP_VCM_RATEQ_MASK	224,7783
#define	AIP_VCM_SWCONG_MASK	225,7835
#define	AIP_VCM_TIQ_MASK	226,7897
#define	AIP_CCMODE_1CELL	228,7962
#define	AIP_CCMODE_2CELL	229,8017
#define	AIP_CCMODE_4CELL	230,8072
#define	AIP_CCMODE_8CELL	231,8127
#define	AIP_CCMODE_16CELL	232,8182
#define	AIP_CCMODE_RSVD	233,8239
#define	AIP_CCMODE_SWCONG	234,8283
#define	AIP_CCMODE_FLUSHVC	235,8347
#define	AIP_SWCONG_NORMAL	237,8411
#define	AIP_SWCONG_50	238,8473
#define	AIP_SWCONG_25	239,8515
#define	AIP_SWCONG_13	240,8557
#define	AIP_SWCONG_6	241,8601
#define	AIP_SWCONG_SEGSUSP	242,8644
#define	AIP_SWCONG_RSVD1	243,8706
#define	AIP_SWCONG_RSVD2	244,8738
#define	AIP_MIN_CQ	246,8771
#define	AIP_MAX_CQ	247,8793
#define	AIP_MIN_TIQ	248,8816
#define	AIP_MAX_TIQ	249,8839
#define AIP_MIN_BURST_SIZE 250,8863
#define	AIP_DEFAULT_CQ	251,8898
#define AIP_MIN_REAK_RATE 252,8963
#define	AIP_RP_COMM_MSG	303,11325
typedef struct aip_cmd_setup_vc_t_ aip_cmd_setup_vc_t_305,11388
} aip_cmd_setup_vc_t;aip_cmd_setup_vc_t319,11944
typedef struct aip_cmd_teardown_vc_t_ aip_cmd_teardown_vc_t_321,11967
} aip_cmd_teardown_vc_t;aip_cmd_teardown_vc_t324,12071
typedef	struct	aip_cmd_getvc_stats_t_ aip_cmd_getvc_stats_t_326,12097
} aip_getvc_stats_t;aip_getvc_stats_t339,12486
typedef struct	vpd_t_ vpd_t_344,12570
} vpd_t;vpd_t347,12672