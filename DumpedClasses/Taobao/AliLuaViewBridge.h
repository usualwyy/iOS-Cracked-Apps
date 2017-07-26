//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliLuaView, AliUnionViewController, LVBlock, NSDictionary, NSString, NSURL, UIView;

@interface AliLuaViewBridge : NSObject
{
    AliUnionViewController *_unionViewController;
    NSString *_package;
    LVBlock *_loginBlock;
    AliLuaView *_luaview;
    UIView *_luaTitleView;
    NSDictionary *_urlArgs;
    NSDictionary *_jtArgs;
    NSURL *_jtNavUrl;
    NSString *_originalUrl;
}

+ (void)createDataCacheOnce;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(retain, nonatomic) NSURL *jtNavUrl; // @synthesize jtNavUrl=_jtNavUrl;
@property(copy, nonatomic) NSDictionary *jtArgs; // @synthesize jtArgs=_jtArgs;
@property(copy, nonatomic) NSDictionary *urlArgs; // @synthesize urlArgs=_urlArgs;
@property(retain, nonatomic) UIView *luaTitleView; // @synthesize luaTitleView=_luaTitleView;
@property(nonatomic) __weak AliLuaView *luaview; // @synthesize luaview=_luaview;
@property(retain, nonatomic) LVBlock *loginBlock; // @synthesize loginBlock=_loginBlock;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) __weak AliUnionViewController *unionViewController; // @synthesize unionViewController=_unionViewController;
- (void).cxx_destruct;
- (id)luaViewExtVersion;
- (id)sdkBuildDate;
- (void)utSkipPage:(id)arg1;
- (void)utEvent:(id)arg1:(id)arg2;
- (void)utExpose:(id)arg1:(id)arg2:(id)arg3;
- (void)utClick:(id)arg1:(id)arg2:(id)arg3;
- (void)updatePageUrl:(id)arg1:(id)arg2;
- (void)updateNextPage:(id)arg1;
- (void)updatePage:(id)arg1:(id)arg2:(id)arg3;
- (void)utLeavePage:(id)arg1:(id)arg2:(id)arg3;
- (void)utEnterPage:(id)arg1:(id)arg2:(id)arg3;
- (id)processSpmUrlToSpm:(id)arg1;
- (double)navActionBarHeight;
- (void)navHideActionBar:(_Bool)arg1;
- (void)navHideActionBar:(_Bool)arg1:(_Bool)arg2;
- (void)clearJUSPCacheData;
- (id)getJUSPCacheData;
- (void)clearCache;
- (void)updateCacheValue:(id)arg1:(id)arg2;
- (id)getCacheValue:(id)arg1;
- (_Bool)hidesBottomBarWhenPushed;
- (id)netWorkType;
- (void)location:(id)arg1;
- (double)serverTime;
- (id)cookies;
- (id)ssoToken;
- (id)token;
- (id)topSession;
- (id)ecode;
- (id)sid;
- (id)userId;
- (id)nickname;
- (id)userSessionValueForKey:(id)arg1;
- (id)getUserInfo;
- (id)utdid;
- (void)callbackLuaWithLoginInfo:(id)arg1;
- (_Bool)isLogin;
- (void)login:(id)arg1;
- (void)setRefreshContiner:(id)arg1;
- (void)scrollToTop:(id)arg1;
- (void)setScrollToTopScrollView:(id)arg1;
- (void)resetScrollToTop:(id)arg1;
- (_Bool)isDebug;
- (id)buildVersion;
- (id)appVersion;
- (id)initWithLuaView:(id)arg1 URL:(id)arg2 query:(id)arg3;

@end

