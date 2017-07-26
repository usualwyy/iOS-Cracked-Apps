//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMomBaseVController.h"

#import "MomDateTimeBarDelegate.h"
#import "MomToolRecordServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MomDateTimeBar, MomToolRecordService, NSMutableArray, NSString, UITableView, UIView;

@interface MomHistoryVController : TMMomBaseVController <MomToolRecordServiceDelegate, MomDateTimeBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    long long _type;
    long long _babyId;
    MomDateTimeBar *_dateTimeBar;
    UITableView *_tableView;
    NSMutableArray *_historyRecords;
    UIView *_emptyTableView;
    MomToolRecordService *_recordService;
}

@property(retain, nonatomic) MomToolRecordService *recordService; // @synthesize recordService=_recordService;
@property(retain, nonatomic) UIView *emptyTableView; // @synthesize emptyTableView=_emptyTableView;
@property(retain, nonatomic) NSMutableArray *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MomDateTimeBar *dateTimeBar; // @synthesize dateTimeBar=_dateTimeBar;
@property(nonatomic) long long babyId; // @synthesize babyId=_babyId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)pickDateDidFinished:(id)arg1;
- (void)deleteRecordDidFinish:(id)arg1;
- (void)queryRecordsDidFinish:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 middleCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 headCellForRowAtIndexPath:(id)arg2;
- (unsigned long long)getCellTypeAtIndex:(long long)arg1;
- (void)updateData:(id)arg1;
- (void)removeHistoryRecordsAtIndex:(id)arg1;
- (void)hideEmptyTableView;
- (void)showEmptyTableView;
- (void)initTableView:(id)arg1;
- (void)loadData:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

