//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, WXHttpTokenManager;

@interface WXHttpManager : NSObject
{
    NSString *_identifier;
    NSString *_userId;
    NSString *_version;
    WXHttpTokenManager *_tokenManager;
    id <WXHttpManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <WXHttpManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WXHttpTokenManager *tokenManager; // @synthesize tokenManager=_tokenManager;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *requestServerUTCTime;
@property(readonly, nonatomic) NSString *requestHost;
- (void)setUserId:(id)arg1 version:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

