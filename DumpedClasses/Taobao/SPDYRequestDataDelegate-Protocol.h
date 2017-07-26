//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSURLRequest, NSURLResponse;

@protocol SPDYRequestDataDelegate <NSObject>
- (void)didFailWithError:(NSError *)arg1 resp:(NSDictionary *)arg2;
- (void)didloadFinishing;
- (void)didLoadData:(NSData *)arg1;
- (void)didReceiveResponse:(NSURLResponse *)arg1 info:(NSDictionary *)arg2;
- (NSURLRequest *)willSendRequest:(NSURLRequest *)arg1 redirectResponse:(NSURLResponse *)arg2;

@optional
- (void)didLoadLog:(NSDictionary *)arg1;
@end

