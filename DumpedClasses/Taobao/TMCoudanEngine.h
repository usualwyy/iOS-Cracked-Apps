//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TMCoudanEngine : NSObject
{
}

+ (id)parseBagPriceModel:(id)arg1;
+ (void)queryBagPrice:(id)arg1 client:(id)arg2 userInfo:(id)arg3;
+ (id)parsePvid:(id)arg1;
+ (id)parseScm:(id)arg1;
+ (id)parseRecommendItems:(id)arg1;
+ (void)findRecommendItemsWithParams:(id)arg1 useAppId:(id)arg2 userInfo:(id)arg3;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 FailedBlock:(CDUnknownBlockType)arg2 withAction:(unsigned long long)arg3;
+ (void)registerFailedBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;

@end

