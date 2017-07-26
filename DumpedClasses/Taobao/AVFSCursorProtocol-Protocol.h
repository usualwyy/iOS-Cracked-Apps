//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol AVFSCursorProtocol <NSObject>
- (int)columnCount;
- (NSDictionary *)resultDictionary;
- (id)objectForColumnIndex:(int)arg1;
- (id)objectForColumn:(NSString *)arg1;
- (NSString *)columnNameForIndex:(int)arg1;
- (int)columnIndexForName:(NSString *)arg1;
- (int)typeForColumnIndex:(int)arg1;
- (int)typeForColumn:(NSString *)arg1;
- (NSData *)dataForColumnIndex:(int)arg1;
- (NSData *)dataForColumn:(NSString *)arg1;
- (NSString *)stringForColumnIndex:(int)arg1;
- (NSString *)stringForColumn:(NSString *)arg1;
- (double)doubleForColumnIndex:(int)arg1;
- (double)doubleForColumn:(NSString *)arg1;
- (long long)longLongForColumnIndex:(int)arg1;
- (long long)longLongForColumn:(NSString *)arg1;
- (long long)longForColumnIndex:(int)arg1;
- (long long)longForColumn:(NSString *)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(NSString *)arg1;
- (_Bool)next;
- (void)close;
@end

