//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMThreadSafeMutableDictionary;

@interface TBIMSwitchOrangeStrategy : NSObject
{
    IMThreadSafeMutableDictionary *_orangeConfig;
}

+ (id)getConfigByGroupName:(id)arg1 key:(id)arg2 defaultConfig:(id)arg3 isDefault:(_Bool *)arg4;
+ (_Bool)isDisenableDaRen;
+ (id)cardUpdateData;
+ (id)inputUrlRegexString;
+ (_Bool)isNeedToastChatShowTip;
+ (_Bool)isChatComponetDemote;
+ (_Bool)isNeedToastConversationShowTip;
+ (_Bool)isNeedToastOfficialPopTip;
+ (_Bool)isRecentListComponetDemote;
+ (long long)innerPushDisplayDuration;
+ (id)serviceMenuConfig;
+ (id)serviceMenuConfigWithConfigGroupName:(id)arg1 configItemKey:(id)arg2;
+ (_Bool)GetConfigBoolValue:(id)arg1 key:(id)arg2 defaultConfig:(id)arg3 wantValue:(id)arg4;
+ (_Bool)needWxNickLowercaseString;
+ (_Bool)needIMMessageAck;
+ (id)unSupportErrorMessageMiddleUrl;
+ (long long)weexCardLoseEfficacy;
+ (long long)weexCardTimeout;
+ (id)weexCardBackupList;
+ (long long)darenFlowListAdsTimeout;
+ (id)darenFlowListAdsUrl;
+ (id)mockOffilinePUSHContent;
+ (_Bool)openHorizontalRecommend;
+ (_Bool)needMockOffilinePUSH;
+ (_Bool)isImageDirToUseAVFS;
+ (long long)accountListCacheTime;
+ (id)functionalMenuUpdateVersion;
+ (id)platformOfficalAccountList;
+ (id)chatBackgroundTime;
+ (int)imMaxGroupMemberCounts;
+ (int)QRCodeEncodeType;
+ (_Bool)isShowShortOn;
+ (_Bool)isFriendSupportOn;
+ (_Bool)isWangwangToH5;
+ (_Bool)messageBoxSyncDemote;
+ (_Bool)officalListDemote;
+ (_Bool)recentListDemote;
+ (_Bool)wangwangSyncDemote;
+ (_Bool)wangwangLoginDemote;
+ (_Bool)isNotLoginSync;
+ (_Bool)isSendByMtop;
+ (id)getTaoyouTabHead;
+ (id)getPushBlackList;
+ (id)shareInstace;
@property(retain, nonatomic) IMThreadSafeMutableDictionary *orangeConfig; // @synthesize orangeConfig=_orangeConfig;
- (void).cxx_destruct;
- (void)switchGroupConfig:(id)arg1;
- (id)init;

@end

