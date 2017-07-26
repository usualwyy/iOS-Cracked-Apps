//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDetailEventBaseSubscriber.h"

@class AliDetailHotSpotAnswerService;

@interface TBDetailTradeSubscriber : TBDetailEventBaseSubscriber
{
    AliDetailHotSpotAnswerService *_answerService;
}

@property(retain, nonatomic) AliDetailHotSpotAnswerService *answerService; // @synthesize answerService=_answerService;
- (void).cxx_destruct;
- (void)showSkuViewForAddToCart;
- (_Bool)needSelectSku;
- (void)popSkuview:(unsigned long long)arg1;
- (id)createRemindDicBySourceid:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3 remind:(id)arg4;
- (_Bool)checkContractInfoSelect;
- (void)showSkuViewForBuyNow;
- (id)handleBuyNowEvent:(id)arg1;
- (void)addSMCartFailed:(id)arg1 utArgs:(id)arg2 itemId:(id)arg3 token:(id)arg4;
- (void)addSMCartSuccess;
- (id)handleAddToCartCSEvent:(id)arg1;
- (id)handleAddToCartEvent:(id)arg1;
- (id)handleSeckillSucceedEvent:(id)arg1;
- (id)handleSeckillEvent:(id)arg1;
- (id)handleCheckHotSpotEvent:(id)arg1;
- (id)AddHotSpotNotifacation:(id)arg1;
- (id)handleGotoQuetion:(id)arg1;
- (id)addTimingShelves:(id)arg1;
- (id)checkTimingShelves:(id)arg1;
- (struct _NSRange)eventRange;
- (id)handleEvent:(id)arg1;

@end

