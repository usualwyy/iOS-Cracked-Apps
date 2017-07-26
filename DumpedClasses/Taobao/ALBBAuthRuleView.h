//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView;

@interface ALBBAuthRuleView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    double spacing;
    _Bool seeMoreStyle;
    double width;
    double height;
    double _tableHeight;
    CDUnknownBlockType _protocolHandle;
    CDUnknownBlockType _authAndLogin;
    NSArray *_dataArray;
    NSMutableArray *_modelArray;
    UITableView *_mainTable;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *mainTable; // @synthesize mainTable=_mainTable;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType authAndLogin; // @synthesize authAndLogin=_authAndLogin;
@property(copy, nonatomic) CDUnknownBlockType protocolHandle; // @synthesize protocolHandle=_protocolHandle;
@property(nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
- (void).cxx_destruct;
- (void)confrimAuthAndLogin;
- (void)setFrame:(struct CGRect)arg1;
- (void)seeMoreAction;
- (void)showAuthProtocol;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)getTableViewFooterCell:(id)arg1;
- (id)getTableViewCell:(id)arg1 withData:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadRuleModel;
- (void)refreshViewWithAuthorityList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

