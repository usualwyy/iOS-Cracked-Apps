//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBBaseShareHandler.h"

#import "TaoPasswordShareActionDelegate.h"
#import "TaoPasswordShareDelegate.h"

@class NSString, TBTaoPasswordShareView, TPShareHandler, UIWindow;

@interface TBTaoPasswordShareHandler : TBBaseShareHandler <TaoPasswordShareDelegate, TaoPasswordShareActionDelegate>
{
    _Bool _isLoading;
    TPShareHandler *_handler;
    unsigned long long _type;
    NSString *_currentTarget;
    TBTaoPasswordShareView *_taopasswordView;
    UIWindow *_keyWindow;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(retain, nonatomic) TBTaoPasswordShareView *taopasswordView; // @synthesize taopasswordView=_taopasswordView;
@property(copy, nonatomic) NSString *currentTarget; // @synthesize currentTarget=_currentTarget;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TPShareHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)dismiss;
- (void)taopassworddidShareFailed:(id)arg1 toTarget:(unsigned long long)arg2;
- (void)taopasswordDidShare:(id)arg1 toTarget:(unsigned long long)arg2;
- (id)targetWithType:(unsigned long long)arg1;
- (unsigned long long)targetType:(id)arg1;
- (_Bool)taoPasswordIsValid:(id)arg1;
- (void)didPasswordRequestFinished:(id)arg1 afterHandler:(id)arg2;
- (_Bool)canShare;
- (void)shareToTarget:(id)arg1 withInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

