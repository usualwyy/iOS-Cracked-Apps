//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomRecord, NSMutableArray;

@protocol MomToolRecordServiceDelegate <NSObject>

@optional
- (void)updateRecordDidFinish:(MomRecord *)arg1;
- (void)deleteRecordDidFinish:(MomRecord *)arg1;
- (void)addRecordDidFinish;
- (void)queryRecordsDidFinish:(NSMutableArray *)arg1;
@end

