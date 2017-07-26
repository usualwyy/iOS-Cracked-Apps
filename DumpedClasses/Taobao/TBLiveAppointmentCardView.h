//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

#import "TBLiveCountDownDelegate.h"

@class NSMutableArray, NSString, TBLiveCountDown, TBLiveFeedCardHeaderView;

@interface TBLiveAppointmentCardView : TBLiveTableViewCell <TBLiveCountDownDelegate>
{
    NSMutableArray *_dataSource;
    long long _dataCount;
    TBLiveFeedCardHeaderView *_headerView;
    NSMutableArray *_miniCellArray;
    TBLiveCountDown *_countDown;
}

+ (double)cardCellHeight;
+ (double)headerViewHeight;
+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) TBLiveCountDown *countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) NSMutableArray *miniCellArray; // @synthesize miniCellArray=_miniCellArray;
@property(retain, nonatomic) TBLiveFeedCardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long dataCount; // @synthesize dataCount=_dataCount;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)updateTimeCount:(long long)arg1 atIndex:(long long)arg2;
- (void)stopCountDown;
- (void)startCountDown;
- (void)refreshWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

