//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TMMarketCitySelectController;

@interface TMMarketGridCityCell : UITableViewCell
{
    TMMarketCitySelectController *_mainController;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(nonatomic) __weak TMMarketCitySelectController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (struct CGRect)buttonFrameAtIndex:(long long)arg1;
- (void)cityButtonPressed:(id)arg1;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

