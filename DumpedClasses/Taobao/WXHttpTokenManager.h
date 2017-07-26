//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface WXHttpTokenManager : NSObject
{
    id <WXHttpTokenManagerDelegate> _delegate;
    NSString *_userId;
    NSMutableArray *_tokenObjects;
    NSMutableArray *_completionBlocks;
}

+ (id)tokenName4Type:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSMutableArray *tokenObjects; // @synthesize tokenObjects=_tokenObjects;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) __weak id <WXHttpTokenManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tokenObjectsUserDefaultsKey;
- (void)didRequestToken:(id)arg1 withType:(long long)arg2 remainingTime:(id)arg3 userInfo:(id)arg4;
- (void)requestTokenWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)integerValue4TokenType:(long long)arg1;
- (id)updateDate4Type:(long long)arg1;
- (id)expirationDate4Type:(long long)arg1;
- (id)tokenKey4Type:(long long)arg1;
- (id)token4Type:(long long)arg1;
- (void)initCompletionBlocks;
- (void)initTokenObjects;
- (id)init;

@end

