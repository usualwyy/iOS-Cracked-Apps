//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MomHistoryTableCell.h"

@class UILabel;

@interface MomHistoryTableHeadCell : MomHistoryTableCell
{
    UILabel *_year;
    UILabel *_monthAndDay;
}

@property(retain, nonatomic) UILabel *monthAndDay; // @synthesize monthAndDay=_monthAndDay;
@property(retain, nonatomic) UILabel *year; // @synthesize year=_year;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)createDecorationView;

@end

