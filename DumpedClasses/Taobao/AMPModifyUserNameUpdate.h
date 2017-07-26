//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSString;

@interface AMPModifyUserNameUpdate : AMPDataUpdate
{
    NSString *_userId;
    NSString *_remarkName;
}

@property(retain, nonatomic) NSString *remarkName; // @synthesize remarkName=_remarkName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (void)dbUpdateAfterNet:(id)arg1;
- (void)memoryUpdateAfterNet:(id)arg1;
- (id)generatePacket;
- (id)initWithUserId:(id)arg1 remarkName:(id)arg2;

@end

