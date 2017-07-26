//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, TBLIInstance;

@interface TBLInteractiveCenter : NSObject
{
    NSMutableDictionary *_instanceMap;
    NSLock *_instanceLock;
    TBLIInstance *_dwInstance;
}

+ (id)shareInstance;
@property(retain, nonatomic) TBLIInstance *dwInstance; // @synthesize dwInstance=_dwInstance;
@property(retain, nonatomic) NSLock *instanceLock; // @synthesize instanceLock=_instanceLock;
@property(retain, nonatomic) NSMutableDictionary *instanceMap; // @synthesize instanceMap=_instanceMap;
- (void).cxx_destruct;
- (void)responseMsg:(id)arg1;
- (void)cancel:(id)arg1;
- (void)registerInstance:(id)arg1 withData:(id)arg2 callBack:(CDUnknownBlockType)arg3;

@end

