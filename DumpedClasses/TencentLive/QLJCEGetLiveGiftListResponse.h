//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEActionBarInfo;

@interface QLJCEGetLiveGiftListResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_4_o_freeGiftCount;
    NSString *jcev2_p_1_o_giftTitle;
    NSString *jcev2_p_2_o_giftDes;
    NSArray *jcev2_p_3_o_giftList__b0x9i_VOQLJCELiveGiftItem;
    QLJCEActionBarInfo *jcev2_p_5_o_qzTopicBarInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_qzTopicBarInfo, setter=setJce_qzTopicBarInfo:) QLJCEActionBarInfo *jcev2_p_5_o_qzTopicBarInfo; // @synthesize jcev2_p_5_o_qzTopicBarInfo;
@property(nonatomic, getter=jce_freeGiftCount, setter=setJce_freeGiftCount:) int jcev2_p_4_o_freeGiftCount; // @synthesize jcev2_p_4_o_freeGiftCount;
@property(retain, nonatomic, getter=jce_giftList, setter=setJce_giftList:) NSArray *jcev2_p_3_o_giftList__b0x9i_VOQLJCELiveGiftItem; // @synthesize jcev2_p_3_o_giftList__b0x9i_VOQLJCELiveGiftItem;
@property(retain, nonatomic, getter=jce_giftDes, setter=setJce_giftDes:) NSString *jcev2_p_2_o_giftDes; // @synthesize jcev2_p_2_o_giftDes;
@property(retain, nonatomic, getter=jce_giftTitle, setter=setJce_giftTitle:) NSString *jcev2_p_1_o_giftTitle; // @synthesize jcev2_p_1_o_giftTitle;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
