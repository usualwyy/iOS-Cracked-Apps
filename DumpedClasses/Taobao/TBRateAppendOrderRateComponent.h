//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;

@interface TBRateAppendOrderRateComponent : TBJSONModel
{
    NSString *_affirmTime;
    NSString *_from;
    NSString *_sellerId;
    NSString *_tradeId;
    NSMutableArray *_appendRateList;
    NSMutableArray *_mainRateList;
}

@property(retain, nonatomic) NSMutableArray *mainRateList; // @synthesize mainRateList=_mainRateList;
@property(retain, nonatomic) NSMutableArray *appendRateList; // @synthesize appendRateList=_appendRateList;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *affirmTime; // @synthesize affirmTime=_affirmTime;
- (void).cxx_destruct;
- (void)transformComponent:(id)arg1;
- (id)init;

@end

