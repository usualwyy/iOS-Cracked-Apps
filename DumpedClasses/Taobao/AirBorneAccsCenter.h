//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AirBorneAccsCenter : NSObject
{
    id <AirBorneAccsCenterDelegate> _delegate;
    NSMutableArray *_offlineDataArray;
}

+ (id)object2Json:(id)arg1;
+ (id)fakeData;
+ (id)sharedInstance;
@property(retain) NSMutableArray *offlineDataArray; // @synthesize offlineDataArray=_offlineDataArray;
@property __weak id <AirBorneAccsCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)praseAccsData:(id)arg1;
- (void)bind;

@end

