//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface MirrorBusinessAlert : UIView
{
    NSString *_type;
    UIView *_vcView;
    id <MirrorBusinessAlertDelegate> _delegate;
}

@property(retain, nonatomic) id <MirrorBusinessAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *vcView; // @synthesize vcView=_vcView;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)show;
- (void)btnClick:(id)arg1;
- (id)getAlertViewWithMsg:(id)arg1 btnArray:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

@end

