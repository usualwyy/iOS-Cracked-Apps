//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AliDetailTreeBranchModel, NSString;

@interface AliDetailAreaItemPage : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasSpecial;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _specialSelectBlock;
    NSString *_currentAreaId;
    AliDetailTreeBranchModel *_branchModel;
    NSString *_selectAreaId;
}

@property(copy, nonatomic) NSString *selectAreaId; // @synthesize selectAreaId=_selectAreaId;
@property(nonatomic) _Bool hasSpecial; // @synthesize hasSpecial=_hasSpecial;
@property(retain, nonatomic) AliDetailTreeBranchModel *branchModel; // @synthesize branchModel=_branchModel;
@property(copy, nonatomic) NSString *currentAreaId; // @synthesize currentAreaId=_currentAreaId;
@property(copy, nonatomic) CDUnknownBlockType specialSelectBlock; // @synthesize specialSelectBlock=_specialSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

