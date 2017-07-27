//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMFadeInOutViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ESPRestaurant, NSArray, NSString, NVMBlurView, NVMTableView, UIButton, UIImageView, UILabel;

@interface ESPPromotionDetailViewController : NVMFadeInOutViewController <UITableViewDataSource, UITableViewDelegate>
{
    NVMBlurView *_blurView;
    UILabel *_titleLabel;
    UIImageView *_ratingBackgroundView;
    UIImageView *_ratingForegroundView;
    NVMTableView *_contentView;
    UIButton *_closeButton;
    NSArray *_cellDatas;
    ESPRestaurant *_restaurant;
}

+ (double)widthForMaskByRating:(double)arg1;
@property(retain, nonatomic) ESPRestaurant *restaurant; // @synthesize restaurant=_restaurant;
@property(copy, nonatomic) NSArray *cellDatas; // @synthesize cellDatas=_cellDatas;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NVMTableView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *ratingForegroundView; // @synthesize ratingForegroundView=_ratingForegroundView;
@property(retain, nonatomic) UIImageView *ratingBackgroundView; // @synthesize ratingBackgroundView=_ratingBackgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NVMBlurView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadCloseButton;
- (void)loadContentView;
- (void)loadRatingView;
- (void)loadTitleLabel;
- (void)loadBlurView;
- (void)loadSubviews;
- (void)prepareData;
- (id)initWithRestaurant:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
