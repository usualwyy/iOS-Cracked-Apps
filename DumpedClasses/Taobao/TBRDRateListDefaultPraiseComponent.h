//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class UILabel, UIView;

@interface TBRDRateListDefaultPraiseComponent : TBCBaseComponent
{
    UILabel *_lbText;
    UIView *_iconView;
}

+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *lbText; // @synthesize lbText=_lbText;
- (void).cxx_destruct;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

