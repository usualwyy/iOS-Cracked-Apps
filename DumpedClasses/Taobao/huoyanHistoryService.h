//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSCache;

@interface huoyanHistoryService : NSObject
{
    AVFSCache *_historyCache;
}

@property(retain, nonatomic) AVFSCache *historyCache; // @synthesize historyCache=_historyCache;
- (void).cxx_destruct;
- (id)historyForKey:(id)arg1;
- (void)removeAllHistorys;
- (id)historyKeys;
- (unsigned long long)historyTotalCount;
- (id)getScanCodeResult:(id)arg1;
- (void)saveScanCodeResult:(id)arg1;
- (_Bool)isValidUrl:(id)arg1 forHost:(id)arg2;
- (_Bool)isURLString:(id)arg1;
- (void)saveDefaultHuoyanResult:(id)arg1;
- (id)init;

@end

