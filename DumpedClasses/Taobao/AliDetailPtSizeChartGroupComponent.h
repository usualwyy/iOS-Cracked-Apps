//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailPtSizeChartGroupComponentModel, NSString, UIView;

@interface AliDetailPtSizeChartGroupComponent : AliProductDetailComponent
{
    UIView *_buttonSuperView;
    NSString *_buttonText;
    AliDetailPtSizeChartGroupComponentModel *_fullModel;
}

+ (double)tailHeightForObject:(id)arg1;
+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) AliDetailPtSizeChartGroupComponentModel *fullModel; // @synthesize fullModel=_fullModel;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) UIView *buttonSuperView; // @synthesize buttonSuperView=_buttonSuperView;
- (void).cxx_destruct;
- (_Bool)needShowMoreInfoByModel:(id)arg1;
- (_Bool)getIsOpen;
- (void)loadMoreButton:(id)arg1;
- (void)createLoadMoreButtonWithStartY:(double)arg1;
- (double)createChildComponentWithFrame:(struct CGRect)arg1 childModel:(id)arg2;
- (void)setObject:(id)arg1;

@end

