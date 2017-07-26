//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBAppendMainRatePicInfo>, NSString;

@interface TBAppendMainRateItemInfo : TBJSONModel
{
    _Bool _firstRate;
    int _anony;
    NSString *_tradeId;
    NSString *_catId;
    NSString *_ratedUid;
    NSString *_ratedUserNick;
    NSString *_raterUid;
    NSString *_raterUserNick;
    NSString *_gmtTradeFinished;
    NSString *_aucNumId;
    NSString *_auctionTitle;
    NSString *_auctionPicUrl;
    NSString *_feedback;
    NSString *_rate;
    NSString *_gmtCreate;
    NSArray<TBAppendMainRatePicInfo> *_ratePics;
    NSString *_diffTime;
    NSString *_reply;
}

@property(retain, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSString *diffTime; // @synthesize diffTime=_diffTime;
@property(retain, nonatomic) NSArray<TBAppendMainRatePicInfo> *ratePics; // @synthesize ratePics=_ratePics;
@property(nonatomic) _Bool firstRate; // @synthesize firstRate=_firstRate;
@property(retain, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(nonatomic) int anony; // @synthesize anony=_anony;
@property(retain, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSString *auctionPicUrl; // @synthesize auctionPicUrl=_auctionPicUrl;
@property(nonatomic) NSString *auctionTitle; // @synthesize auctionTitle=_auctionTitle;
@property(retain, nonatomic) NSString *aucNumId; // @synthesize aucNumId=_aucNumId;
@property(retain, nonatomic) NSString *gmtTradeFinished; // @synthesize gmtTradeFinished=_gmtTradeFinished;
@property(retain, nonatomic) NSString *raterUserNick; // @synthesize raterUserNick=_raterUserNick;
@property(retain, nonatomic) NSString *raterUid; // @synthesize raterUid=_raterUid;
@property(retain, nonatomic) NSString *ratedUserNick; // @synthesize ratedUserNick=_ratedUserNick;
@property(retain, nonatomic) NSString *ratedUid; // @synthesize ratedUid=_ratedUid;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
- (void).cxx_destruct;

@end

