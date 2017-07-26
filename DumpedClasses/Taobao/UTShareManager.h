//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, UTShareShortenAdapter;

@interface UTShareManager : NSObject
{
    int _sharetype;
    UIViewController *_rootViewController;
    UTShareShortenAdapter *_shorten;
}

+ (id)urlForBackFlow:(id)arg1 businessId:(id)arg2 platform:(id)arg3;
+ (void)encodeShortUrl:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)setShortenAdapter:(id)arg1;
+ (void)shareContent:(id)arg1 type:(int)arg2 needShortenUrl:(_Bool)arg3 viewController:(id)arg4 onStarted:(CDUnknownBlockType)arg5 onFinished:(CDUnknownBlockType)arg6;
+ (void)shareContent:(id)arg1 type:(int)arg2 delegate:(id)arg3;
+ (void)shareContent:(id)arg1 type:(int)arg2 viewController:(id)arg3 onStarted:(CDUnknownBlockType)arg4 onFinished:(CDUnknownBlockType)arg5;
+ (_Bool)didAuthorizedWithType:(int)arg1;
+ (void)authorizeWithType:(int)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)hasAuthorizedWithType:(int)arg1;
+ (void)authWithType:(int)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenURL:(id)arg1;
+ (void)connectDingTalkWithAppId:(id)arg1;
+ (void)connectMomoWithAppId:(id)arg1;
+ (void)connectAliPayWithAppId:(id)arg1;
+ (void)connectAliWxWithAppKey:(id)arg1;
+ (void)connectSinaWeiboWithAppKey:(id)arg1 appSecret:(id)arg2 redirectUri:(id)arg3;
+ (_Bool)hasInstalledWithType:(int)arg1;
+ (_Bool)canShare:(int)arg1;
+ (id)shareManager;
@property(retain, nonatomic) UTShareShortenAdapter *shorten; // @synthesize shorten=_shorten;
@property int sharetype; // @synthesize sharetype=_sharetype;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)utAnalytics:(id)arg1;
- (id)urlForBackFlow:(id)arg1 businessId:(id)arg2 platform:(id)arg3;
- (id)targetByShareType:(int)arg1;
- (id)urlEscapedWithUrlString:(id)arg1;
- (void)encodeShortUrl:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)setShortenAdapter:(id)arg1;
- (void)doShareWithContent:(id)arg1 viewController:(id)arg2 onStarted:(CDUnknownBlockType)arg3 onFinished:(CDUnknownBlockType)arg4;
- (void)shareContent:(id)arg1 type:(int)arg2 needShortenUrl:(_Bool)arg3 viewController:(id)arg4 onStarted:(CDUnknownBlockType)arg5 onFinished:(CDUnknownBlockType)arg6;
- (void)authorizeWithType:(int)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)handleOpenURL:(id)arg1;

@end

