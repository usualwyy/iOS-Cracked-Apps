//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMeasureARBottomButton, UIView;

@interface TBMeasureARBottomAreaControl : NSObject
{
    UIView *_parentView;
    unsigned long long _state;
    CDUnknownBlockType _resetBlock;
    CDUnknownBlockType _confirmBlock;
    TBMeasureARBottomButton *_confirmButton;
    TBMeasureARBottomButton *_resetButton;
}

@property(retain, nonatomic) TBMeasureARBottomButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) TBMeasureARBottomButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType resetBlock; // @synthesize resetBlock=_resetBlock;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)changeConfirmStyleFor:(_Bool)arg1;
- (void)addContentIfNeccesary;
- (void)layoutWhenEditing;
- (void)layoutWhenShooting;
- (void)confirmButtonClicked:(id)arg1;
- (void)resetButtonClicked:(id)arg1;
- (id)initWithParentView:(id)arg1 state:(unsigned long long)arg2;

@end

