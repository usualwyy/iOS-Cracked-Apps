//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBSNSTapDetectingView : UIView
{
    id <TBSNSTapDetectingViewDelegate> _tapDelegate;
}

@property(nonatomic) __weak id <TBSNSTapDetectingViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)setupGesture;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

