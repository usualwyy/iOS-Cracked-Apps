//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDSInitProcessPorotocol.h"

@class NSArray, NSString;

@interface ACDSDBInitor : NSObject <ACDSInitProcessPorotocol>
{
    _Bool _executing;
    NSArray *_tables;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool executing; // @synthesize executing=_executing;
@property(retain, nonatomic) NSArray *tables; // @synthesize tables=_tables;
- (void).cxx_destruct;
- (void)fireDBDataChecker:(CDUnknownBlockType)arg1;
- (id)createTableSQL:(id)arg1;
- (void)createTableIFNotExists:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)createTable:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkAndCreateDatabase:(CDUnknownBlockType)arg1;
- (void)process:(CDUnknownBlockType)arg1;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

