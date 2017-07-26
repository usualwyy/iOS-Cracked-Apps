//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ALIBaseJoint : NSObject
{
    NSMutableDictionary *_implMap;
    NSMutableDictionary *_implClassMap;
}

+ (id)sharedInstance;
+ (id)pullToRefreshImpl;
+ (id)aliPayImpl;
+ (id)popupsImpl;
+ (id)themeImpl;
+ (id)navigationCtrlImpl;
+ (id)webviewCtrlImpl;
+ (id)navigatorImpl;
+ (id)tipsImpl;
+ (id)configImpl;
+ (id)loginImpl;
+ (id)detailSKUImpl;
+ (id)userTrackImpl;
- (void).cxx_destruct;
- (id)implementWithProtocol:(id)arg1 isSingle:(_Bool)arg2;
- (id)implementWithProtocol:(id)arg1;
- (void)registerImplement:(id)arg1 forProtocol:(id)arg2;
- (void)registerImplementClass:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

