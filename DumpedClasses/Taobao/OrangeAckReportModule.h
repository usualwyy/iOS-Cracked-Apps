//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OrangeSafeMutableDictionary;

@interface OrangeAckReportModule : NSObject
{
    OrangeSafeMutableDictionary *_needUpdateConfigDict;
    OrangeSafeMutableDictionary *_updatedConfigDict;
}

+ (void)reportNamespaceUpdateAck:(id)arg1 ipStrategy:(id)arg2 checkTimeCnt:(int)arg3;
+ (void)reportNamespaceUpdateAck:(id)arg1;
+ (void)reportIndexUpdateAck:(id)arg1 ipStrategy:(id)arg2 checkTimeCnt:(int)arg3;
+ (void)reportIndexUpdateAck:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) OrangeSafeMutableDictionary *updatedConfigDict; // @synthesize updatedConfigDict=_updatedConfigDict;
@property(retain, nonatomic) OrangeSafeMutableDictionary *needUpdateConfigDict; // @synthesize needUpdateConfigDict=_needUpdateConfigDict;
- (void).cxx_destruct;

@end

