//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "AMPGroupBiz.h"

@class NSString;

@interface AMPGroupBiz : MKTMsgBusHelp <AMPGroupBiz>
{
    double _groupInfoExpiredTime;
    id <AMPModuleManager> _moduleManager;
}

@property(retain, nonatomic) id <AMPModuleManager> moduleManager; // @synthesize moduleManager=_moduleManager;
- (void).cxx_destruct;
- (void)ampSyncDataCheckGroupUserInfo:(id)arg1 userId:(id)arg2 modifyTime:(id)arg3;
- (void)ampSyncDataCheckGroupInfo:(id)arg1 modifyTime:(id)arg2;
- (void)ampFriendUpdated:(id)arg1 userId:(id)arg2;
- (void)groupUsersUpdated:(id)arg1;
- (void)groupInfoUpdated:(id)arg1;
- (void)joinedVGroupList;
- (void)joinedGroupList;
- (void)saveGroupUserInfoList:(id)arg1 needNotify:(_Bool)arg2;
- (void)saveGroupUserInfoList:(id)arg1;
- (void)saveGroupInfoDirect:(id)arg1;
- (void)chooseSubGroupInfoByVGroupId:(id)arg1;
- (void)groupQRCodeInGroupWithGroupUserInfo:(id)arg1 ccode:(id)arg2 QRCodeKey:(id)arg3;
- (void)getGroupQRCodeInfoWithCcode:(id)arg1;
- (void)invalidatesGroupInfo:(id)arg1;
- (void)invalidatesGroupUser:(id)arg1 userId:(id)arg2;
- (void)invalidatesGroupUserNameWithUserId:(id)arg1;
- (void)updateGroupUserName:(id)arg1 withUserId:(id)arg2;
- (void)ampUserUpdated:(id)arg1;
- (void)ProcessModifyGroupUserUpdate:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserIdentity:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupPublic:(_Bool)arg1 withGroupId:(id)arg2;
- (void)updateGroupHeadPic:(id)arg1 withGroupId:(id)arg2;
- (void)updateGroupNotice:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserIsBlackStr:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserName:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)deleteGroupUsers:(id)arg1 withGroupId:(id)arg2;
- (void)addGroupUsers:(id)arg1 withGroupId:(id)arg2 identity:(unsigned long long)arg3;
- (void)setGroupName:(id)arg1 andGroupPic:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupName:(id)arg1 withGroupId:(id)arg2;
- (void)initInfo;
- (id)joinedGroupListFromLocal;
- (id)groupUserListByGroupId:(id)arg1;
- (void)cacheGroupUser:(id)arg1;
- (id)inerBatchGroupUserForUserId:(id)arg1 andGroupId:(id)arg2 strategy:(long long)arg3;
- (id)batchGroupUserForUserId:(id)arg1 andGroupId:(id)arg2;
- (void)BatchGetGroupNotify:(id)arg1;
- (void)processExitAndDeleteGroupUpdate:(id)arg1 groupId:(id)arg2;
- (void)deleteGroupByGroupId:(id)arg1;
- (void)exitGroupByGroupId:(id)arg1;
- (void)NotifyGroupUpdate:(id)arg1;
- (id)inerGetGroupInfoById:(id)arg1 strategy:(long long)arg2;
- (id)groupInfoById:(id)arg1;
- (id)createGroupWithUserIds:(id)arg1 andType:(unsigned long long)arg2;
@property(nonatomic) double groupInfoExpiredTime; // @synthesize groupInfoExpiredTime=_groupInfoExpiredTime;
- (void)registerPacketParse:(id)arg1;
- (void)stopBiz;
- (void)resetBiz;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

