//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBTakeoutStoreItemCountHelper : NSObject
{
}

+ (id)sharedInstance;
- (id)getUserId;
- (id)getStoreCountKey:(id)arg1;
- (id)getItemCountByStoreId:(id)arg1;
- (void)updateStoreItemCount:(id)arg1 itemCount:(long long)arg2;

@end

