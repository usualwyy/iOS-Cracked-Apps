//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBVRPromptWidget;

@interface TBVRPromptView : UIView
{
    TBVRPromptWidget *_leftPromptWidget;
    TBVRPromptWidget *_rightPromptWidget;
}

@property(retain, nonatomic) TBVRPromptWidget *rightPromptWidget; // @synthesize rightPromptWidget=_rightPromptWidget;
@property(retain, nonatomic) TBVRPromptWidget *leftPromptWidget; // @synthesize leftPromptWidget=_leftPromptWidget;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setText:(id)arg1 iconFont:(id)arg2 animated:(_Bool)arg3;
- (void)setText:(id)arg1 iconFont:(id)arg2;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

