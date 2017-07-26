//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TBIMInitServiceAdapter <NSObject>
@property(readonly, nonatomic) _Bool isRecentListAndWangxingFinishInit;
@property(readonly, nonatomic) int initStatus;
- (_Bool)vibrationPromptStatus;
- (_Bool)tingPromptStatus;
- (void)vibrationPromptSetting:(_Bool)arg1;
- (void)tingPromptSetting:(_Bool)arg1;
- (void)stopService;
- (void)startServiceWithConfig:(id <TBIMConfigAdapter>)arg1;
- (void)removeDelegate:(id <TBIMInitServiceDelegate>)arg1;
- (void)addDelegate:(id <TBIMInitServiceDelegate>)arg1;
@end

