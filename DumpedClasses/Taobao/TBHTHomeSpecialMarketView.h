//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, TBHTHomeTaoQiangGouModel;

@interface TBHTHomeSpecialMarketView : UIView
{
    NSArray *_data;
    TBHTHomeTaoQiangGouModel *_taoQiangGou;
    NSArray *_favoriteImages;
    NSMutableArray *_itemViewList;
}

@property(retain, nonatomic) NSMutableArray *itemViewList; // @synthesize itemViewList=_itemViewList;
@property(retain, nonatomic) NSArray *favoriteImages; // @synthesize favoriteImages=_favoriteImages;
@property(retain, nonatomic) TBHTHomeTaoQiangGouModel *taoQiangGou; // @synthesize taoQiangGou=_taoQiangGou;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

