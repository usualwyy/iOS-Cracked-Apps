//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, UILabel;

@interface MCChatTimeView : UIImageView
{
    NSString *_tipText;
    UILabel *_tipLabel;
}

+ (struct CGSize)chatTipViewSizeForTipText:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

