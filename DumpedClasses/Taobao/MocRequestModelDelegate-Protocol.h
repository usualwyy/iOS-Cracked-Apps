//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBJSONModel;

@protocol MocRequestModelDelegate <NSObject>
- (void)modelDidFailLoad:(id <TBSDKErrorRule>)arg1;
- (void)modelDidSuccessLoad:(TBJSONModel *)arg1;
- (void)modelDidStartLoad;
@end

