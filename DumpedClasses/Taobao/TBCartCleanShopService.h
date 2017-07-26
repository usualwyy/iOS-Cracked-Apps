//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TBCartCleanShopDataSource;

@interface TBCartCleanShopService : NSObject
{
    NSDictionary *_origResult;
    TBCartCleanShopDataSource *_dataSource;
    NSDictionary *_exParams;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *exParams; // @synthesize exParams=_exParams;
@property(retain, nonatomic) TBCartCleanShopDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *origResult; // @synthesize origResult=_origResult;
- (void).cxx_destruct;
- (id)combineArrayToString:(id)arg1;
- (id)mergeReuslt:(id)arg1 with:(id)arg2;
- (id)parseHierarchy:(id)arg1 key:(id)arg2;
- (id)parseData:(id)arg1;
- (void)addfavorItems:(id)arg1 source:(id)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)deletebagItems:(id)arg1 source:(id)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)querybagIsFirstPage:(_Bool)arg1 source:(id)arg2 isAfterModify:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;

@end

