//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TBLoginToastView : UIView
{
    NSString *_toastText;
    UILabel *_textLabel;
}

+ (void)presentToastWithInView:(id)arg1 text:(id)arg2 duration:(double)arg3;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *toastText; // @synthesize toastText=_toastText;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1 duration:(double)arg2;
- (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineBreakMode:(long long)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

