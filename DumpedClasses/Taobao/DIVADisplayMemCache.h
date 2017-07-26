//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCacheDelegate.h"

@class NSCache, NSString;

@interface DIVADisplayMemCache : NSObject <NSCacheDelegate>
{
    NSCache *_memCache;
}

@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
- (void).cxx_destruct;
- (unsigned long long)maxCostByPhoneRAM;
- (id)imagesFromMemCacheForKey:(id)arg1;
- (void)storeImages:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

