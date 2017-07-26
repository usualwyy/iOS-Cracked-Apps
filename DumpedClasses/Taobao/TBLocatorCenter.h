//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBLocatorCenter : NSObject
{
    _Bool _destroyed;
    id <TBLocatorEventLocatorProtocol> _locatorEventDelegate;
    id <TBLocatorEventActionProtocol> _actionEventDelegate;
    id <TBLocatorEventOpenUrlProtocol> _openUrlEventDelegate;
    NSMutableDictionary *_locatorInfos;
    NSString *_domainString;
    CDUnknownBlockType _completion;
}

+ (void)destroyInstanceByToken:(id)arg1;
+ (id)instanceByToken:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *domainString; // @synthesize domainString=_domainString;
@property(retain, nonatomic) NSMutableDictionary *locatorInfos; // @synthesize locatorInfos=_locatorInfos;
@property(nonatomic) _Bool destroyed; // @synthesize destroyed=_destroyed;
@property(nonatomic) __weak id <TBLocatorEventOpenUrlProtocol> openUrlEventDelegate; // @synthesize openUrlEventDelegate=_openUrlEventDelegate;
@property(nonatomic) __weak id <TBLocatorEventActionProtocol> actionEventDelegate; // @synthesize actionEventDelegate=_actionEventDelegate;
@property(nonatomic) __weak id <TBLocatorEventLocatorProtocol> locatorEventDelegate; // @synthesize locatorEventDelegate=_locatorEventDelegate;
- (void).cxx_destruct;
- (id)locatorInfoWithLocatorId:(id)arg1;
- (id)findLocatorWithLocatorId:(id)arg1 prefix:(id)arg2 paths:(id)arg3;
- (void)autoLocator:(id)arg1;
- (id)getContainor:(id)arg1 index:(int)arg2;
- (id)getContainor:(id)arg1 index:(int)arg2 forContainer:(id)arg3;
- (void)findWithJsonObject:(id)arg1;
- (void)findWithLocatorName:(id)arg1 locatorActionName:(unsigned long long)arg2 params:(id)arg3;
- (void)removeLocatorId:(id)arg1;
- (void)removeAllLocator;
- (void)registWithLocatorId:(id)arg1 parentId:(id)arg2 data:(id)arg3;

@end

