//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBARDetailGuideView : UIView
{
    CDUnknownBlockType _closeCallback;
    long long _recognitionType;
}

@property(nonatomic) long long recognitionType; // @synthesize recognitionType=_recognitionType;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void).cxx_destruct;
- (void)close;
- (void)setupCloseButton;
- (id)guideWithIcon:(id)arg1 text:(id)arg2;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 recognitionType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

