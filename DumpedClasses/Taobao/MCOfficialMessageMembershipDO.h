//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialMessageBaseDO.h"

#import "MCOfficialMessageMembershipDOProtocol.h"

@class NSString;

@interface MCOfficialMessageMembershipDO : MCOfficialMessageBaseDO <MCOfficialMessageMembershipDOProtocol>
{
}

- (id)openUrl;
- (id)tipText;
- (id)content;
- (id)imageUrl;
- (id)title;
- (id)initWithDictionary:(id)arg1;
- (id)summary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isRetry;
@property(nonatomic) unsigned long long sendStatus;
@property(readonly) Class superclass;

@end

