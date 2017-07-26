//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDictionary, NSNumber, NSSet, NSString, ProfileInfoEx, WWGroup;

@interface WWPerson : NSManagedObject
{
}

+ (void)setShouldUseShopNameAsDisplayName:(_Bool)arg1;
+ (_Bool)shouldUseShopNameAsDisplayName;
@property(retain, nonatomic) NSNumber *messageEnablePush; // @dynamic messageEnablePush;
- (void)setWWPersonSectionAndSortKey:(id)arg1;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
- (void)setDisplayName:(id)arg1 withPriority:(long long)arg2;
@property(retain, nonatomic) NSString *shop_name; // @dynamic shop_name;
@property(retain, nonatomic) NSString *profileNick; // @dynamic profileNick;
@property(retain, nonatomic) NSString *tbnick; // @dynamic tbnick;
- (void)setAvatarUrl:(id)arg1 withPriority:(long long)arg2;
@property(retain, nonatomic) NSString *avatarUrl; // @dynamic avatarUrl;
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;

// Remaining properties
@property(retain, nonatomic) NSNumber *avatarUrlSource; // @dynamic avatarUrlSource;
@property(retain, nonatomic) NSString *bg_image; // @dynamic bg_image;
@property(retain, nonatomic) NSNumber *buyer_rank; // @dynamic buyer_rank;
@property(retain, nonatomic) NSString *buyer_rank_pic; // @dynamic buyer_rank_pic;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *comments; // @dynamic comments;
@property(retain, nonatomic) NSNumber *deletedFlag; // @dynamic deletedFlag;
@property(retain, nonatomic) NSNumber *displayNameSource; // @dynamic displayNameSource;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) id extInfoArray; // @dynamic extInfoArray;
@property(retain, nonatomic) NSDictionary *extra; // @dynamic extra;
@property(retain, nonatomic) NSString *full_name; // @dynamic full_name;
@property(retain, nonatomic) NSString *gender; // @dynamic gender;
@property(retain, nonatomic) WWGroup *group; // @dynamic group;
@property(retain, nonatomic) NSNumber *group_id; // @dynamic group_id;
@property(retain, nonatomic) NSNumber *in_blacklist; // @dynamic in_blacklist;
@property(retain, nonatomic) NSNumber *isFriend; // @dynamic isFriend;
@property(retain, nonatomic) NSString *keywords; // @dynamic keywords;
@property(retain, nonatomic) NSString *md5_phone; // @dynamic md5_phone;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *onlineStatus; // @dynamic onlineStatus;
@property(retain, nonatomic) NSString *phone_num; // @dynamic phone_num;
@property(retain, nonatomic) ProfileInfoEx *profileExInfo; // @dynamic profileExInfo;
@property(retain, nonatomic) NSNumber *profileHasUpdated; // @dynamic profileHasUpdated;
@property(retain, nonatomic) NSNumber *profileLatestUpdate; // @dynamic profileLatestUpdate;
@property(retain, nonatomic) NSNumber *profileLatestUpdateByISV; // @dynamic profileLatestUpdateByISV;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(retain, nonatomic) NSString *self_desc; // @dynamic self_desc;
@property(retain, nonatomic) NSNumber *seller_rank; // @dynamic seller_rank;
@property(retain, nonatomic) NSString *seller_rank_pic; // @dynamic seller_rank_pic;
@property(retain, nonatomic) NSSet *session; // @dynamic session;
@property(retain, nonatomic) NSString *shop_url; // @dynamic shop_url;
@property(retain, nonatomic) NSString *short_name; // @dynamic short_name;
@property(retain, nonatomic) NSString *show_nick; // @dynamic show_nick;
@property(retain, nonatomic) NSString *sortKey; // @dynamic sortKey;
@property(retain, nonatomic) NSString *tb_id; // @dynamic tb_id;
@property(retain, nonatomic) NSNumber *user_identity; // @dynamic user_identity;
@property(retain, nonatomic) NSNumber *ww_friend; // @dynamic ww_friend;

@end

