//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKTBizConfig.h"

@class NSString;

@interface TBIMBizConfig : NSObject <MKTBizConfig>
{
}

- (_Bool)needUserCustomItemUrlForGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowNoticeBarForGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canCustomFunctionalMenuWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canEditGroupAnnouncementWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowQRCodeItemWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowGroupNameWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowDeleteEntranceWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)canShowAddEntranceWithGroupInfo:(id)arg1 groupUser:(id)arg2;
- (_Bool)isNeedCheckJoinConditionWithGroupInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

