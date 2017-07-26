//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCRecentContactCustomEventProtocol.h"

@class MCRecentContactModel, NSString;

@interface MCRecentContactCustomEventSubscribe : NSObject <MCRecentContactCustomEventProtocol>
{
    MCRecentContactModel *_model;
}

@property(nonatomic) __weak MCRecentContactModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)deleteCell:(id)arg1 withCellObject:(id)arg2 userInfo:(id)arg3 model:(id)arg4;
- (_Bool)clickCell:(id)arg1 withCellObject:(id)arg2 userInfo:(id)arg3;
- (void)markTableViewRow:(id)arg1 cell:(id)arg2 userInfo:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)delTableViewRow:(id)arg1 cell:(id)arg2 userInfo:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)selectTableViewRow:(id)arg1 cell:(id)arg2 userInfo:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

