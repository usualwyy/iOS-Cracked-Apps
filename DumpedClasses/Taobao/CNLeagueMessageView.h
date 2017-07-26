//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CNLogisticOrderListItem, CNLogisticsItemView, TBRCommand, UIViewController;

@interface CNLeagueMessageView : UIView
{
    UIViewController *_viewController;
    CNLogisticOrderListItem *_bagItem;
    CNLogisticsItemView *_itemView;
    TBRCommand *_command;
}

@property(retain, nonatomic) TBRCommand *command; // @synthesize command=_command;
@property(nonatomic) __weak CNLogisticsItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) __weak CNLogisticOrderListItem *bagItem; // @synthesize bagItem=_bagItem;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setupView;
- (void)league;
- (void)goGuoguo;
- (id)initWithY:(float)arg1 addView:(id)arg2 bagItem:(id)arg3;
- (_Bool)isShowView;
- (double)getHeight;
- (void)bindViewController:(id)arg1;

@end

