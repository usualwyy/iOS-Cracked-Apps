//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TBFavoriteAlertView;

@interface TBFavoriteToast : NSObject
{
    NSMutableArray *_alerts;
    _Bool _active;
    TBFavoriteAlertView *_alertView;
    struct CGRect _alertFrame;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)orientationWillChange:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)postAlertWithMessage:(id)arg1;
- (void)postAlertWithMessage:(id)arg1 image:(id)arg2;
- (void)animationStep3;
- (void)animationStep2;
- (void)showAlerts;
- (void)dealloc;
- (id)init;

@end

