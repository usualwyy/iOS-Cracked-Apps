//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBTakeoutNewFilterModel, TBTakeoutNewFilterView, UILabel;

@interface TBTakeoutNewFilterCell : UITableViewCell
{
    TBTakeoutNewFilterModel *_filterModel;
    CDUnknownBlockType _onClickedBlock;
    UILabel *_filterTilteLabel;
    TBTakeoutNewFilterView *_filterView;
}

@property(retain, nonatomic) TBTakeoutNewFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UILabel *filterTilteLabel; // @synthesize filterTilteLabel=_filterTilteLabel;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
@property(retain, nonatomic) TBTakeoutNewFilterModel *filterModel; // @synthesize filterModel=_filterModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

