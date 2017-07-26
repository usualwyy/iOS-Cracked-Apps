//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCDataSourceProtocol.h"

@class NSArray;

@protocol MCRecentContactDataSourceProtocol <MCDataSourceProtocol>
- (void)clearSessionUnreadCount:(id <TBIMSessionAdapter>)arg1;
- (_Bool)removeSession:(id <TBIMSessionAdapter>)arg1;
- (void)updateSessions;
- (NSArray *)sessions;
- (void)removeDataSourceDelegate:(id <MCRecentContactDataSourceDelegate>)arg1;
- (void)addDataSourceDelegate:(id <MCRecentContactDataSourceDelegate>)arg1;
@end

