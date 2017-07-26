//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomAddRecordDelegate, MomDeleteRecordDelegate, MomQueryLastRecordDelegate, MomQueryRecordsDelegate, MomUpdateRecordDelegate;

@interface MomToolRecordService : NSObject
{
    id <MomToolRecordServiceDelegate> _delegate;
    MomQueryLastRecordDelegate *_queryLastRecordDelegate;
    MomAddRecordDelegate *_addRecordDelegate;
    MomQueryRecordsDelegate *_queryRecordsDelegate;
    MomDeleteRecordDelegate *_deleteRecordDelegate;
    MomUpdateRecordDelegate *_updateRecordDelegate;
}

@property(retain, nonatomic) MomUpdateRecordDelegate *updateRecordDelegate; // @synthesize updateRecordDelegate=_updateRecordDelegate;
@property(retain, nonatomic) MomDeleteRecordDelegate *deleteRecordDelegate; // @synthesize deleteRecordDelegate=_deleteRecordDelegate;
@property(retain, nonatomic) MomQueryRecordsDelegate *queryRecordsDelegate; // @synthesize queryRecordsDelegate=_queryRecordsDelegate;
@property(retain, nonatomic) MomAddRecordDelegate *addRecordDelegate; // @synthesize addRecordDelegate=_addRecordDelegate;
@property(retain, nonatomic) MomQueryLastRecordDelegate *queryLastRecordDelegate; // @synthesize queryLastRecordDelegate=_queryLastRecordDelegate;
@property(nonatomic) __weak id <MomToolRecordServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateRecord:(id)arg1;
- (void)deleteRecord:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)queryRecordsByParams:(id)arg1;
- (void)queryLastRecordByBabyId:(id)arg1 withTypes:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

