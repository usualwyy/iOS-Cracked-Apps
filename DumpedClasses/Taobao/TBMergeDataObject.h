//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBMergeDataObject : NSObject
{
    NSString *_mergeTopic;
    long long _mergeLevel;
    NSString *_mergeDesc;
    NSString *_mergeCount;
}

@property(retain, nonatomic) NSString *mergeCount; // @synthesize mergeCount=_mergeCount;
@property(retain, nonatomic) NSString *mergeDesc; // @synthesize mergeDesc=_mergeDesc;
@property(nonatomic) long long mergeLevel; // @synthesize mergeLevel=_mergeLevel;
@property(retain, nonatomic) NSString *mergeTopic; // @synthesize mergeTopic=_mergeTopic;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

