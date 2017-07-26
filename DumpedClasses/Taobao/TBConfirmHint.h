//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIView;

@interface TBConfirmHint : NSObject
{
    NSMutableArray *_messages;
    UIView *_hintView;
    UIView *_lastView;
}

+ (void)addToast:(id)arg1 withConfrimationTitle:(id)arg2 andCancelString:(id)arg3 andConfirmation:(CDUnknownBlockType)arg4 toView:(id)arg5;
+ (void)addToast:(id)arg1 andConfirmation:(CDUnknownBlockType)arg2 toView:(id)arg3;
+ (id)sharedManager;
@property(retain, nonatomic) UIView *lastView; // @synthesize lastView=_lastView;
@property(retain, nonatomic) UIView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)popLastObject;
- (void)dismiss;
- (void)delayDisplay;
- (void)confirm:(id)arg1;
- (void)toast:(id)arg1 withConfrimationTitle:(id)arg2 andCancelString:(id)arg3 andConfirmation:(CDUnknownBlockType)arg4 toView:(id)arg5;
- (id)init;

@end

