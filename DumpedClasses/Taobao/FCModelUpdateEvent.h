//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface FCModelUpdateEvent : NSObject
{
    long long _updateEventType;
    NSMutableSet *_updatePropertys;
    NSMutableArray *_subEventsSequence;
}

@property(retain, nonatomic) NSMutableArray *subEventsSequence; // @synthesize subEventsSequence=_subEventsSequence;
@property(retain, nonatomic) NSMutableSet *updatePropertys; // @synthesize updatePropertys=_updatePropertys;
@property(nonatomic) long long updateEventType; // @synthesize updateEventType=_updateEventType;
- (void).cxx_destruct;
- (id)init;

@end

