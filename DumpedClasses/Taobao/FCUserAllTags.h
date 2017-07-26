//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCModel.h"

@class NSDictionary, NSString;

@interface FCUserAllTags : NSObject <FCModel>
{
    id <FCModelDelegate> _delegate;
    NSDictionary *_tags;
    NSDictionary *_allTags;
}

@property(retain, nonatomic) NSDictionary *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id <FCModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithData:(id)arg1;
- (void)joinFetchWithModel:(id)arg1;
- (void)fetchNext;
- (void)fetch;
- (void)updateUserTags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

