//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol TBFavSDKContentServiceProtocol <NSObject>
- (void)isConentFavWithOutItemId:(NSString *)arg1 bizId:(NSString *)arg2 block:(void (^)(_Bool, TBFavSDKError *))arg3;
- (void)removeConentFavWithOutItemId:(NSString *)arg1 bizId:(NSString *)arg2 block:(void (^)(_Bool, TBFavSDKError *))arg3;
- (void)addConentFavWithOutItemId:(NSString *)arg1 bizId:(NSString *)arg2 title:(NSString *)arg3 note:(NSString *)arg4 picUrl:(NSURL *)arg5 contentUrl:(NSURL *)arg6 block:(void (^)(_Bool, TBFavSDKError *))arg7;
@end

