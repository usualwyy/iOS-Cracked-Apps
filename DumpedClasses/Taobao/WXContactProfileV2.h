//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class B2CInfoDTO, BuyerInfoDTO, C2CInfoDTO, ClerkInfoDTO, NSArray, NSDate, NSNumber, NSString, UserSettingBO;

@interface WXContactProfileV2 : NSObject
{
    _Bool _shop_freepostage;
    NSString *_longUid;
    NSString *_name;
    NSString *_signature;
    NSString *_avatar;
    NSString *_gender;
    NSString *_region;
    NSString *_country;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_phone_num;
    NSString *_md5_phone;
    NSString *_mobile;
    long long _verify_flag;
    NSString *_verify_question;
    NSString *_verify_answer;
    NSString *_bg_image;
    long long _vip_level;
    long long _identity;
    NSString *_shop_name;
    NSString *_shop_url;
    long long _shop_relation;
    NSDate *_shop_createtime;
    long long _shop_discount;
    NSString *_shop_point;
    NSNumber *_buyer_rank;
    NSString *_buyer_rank_image;
    NSNumber *_pub_id;
    NSString *_pub_nick;
    NSString *_pub_desc;
    long long _pub_follow_flag;
    NSNumber *_ali_clerk_flag;
    NSNumber *_seller_channel;
    UserSettingBO *_settings;
    BuyerInfoDTO *_buyer_info;
    C2CInfoDTO *_c2c_info;
    B2CInfoDTO *_b2c_info;
    ClerkInfoDTO *_clerk_info;
    NSArray *_ext;
}

@property(retain, nonatomic) NSArray *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) ClerkInfoDTO *clerk_info; // @synthesize clerk_info=_clerk_info;
@property(retain, nonatomic) B2CInfoDTO *b2c_info; // @synthesize b2c_info=_b2c_info;
@property(retain, nonatomic) C2CInfoDTO *c2c_info; // @synthesize c2c_info=_c2c_info;
@property(retain, nonatomic) BuyerInfoDTO *buyer_info; // @synthesize buyer_info=_buyer_info;
@property(retain, nonatomic) UserSettingBO *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSNumber *seller_channel; // @synthesize seller_channel=_seller_channel;
@property(retain, nonatomic) NSNumber *ali_clerk_flag; // @synthesize ali_clerk_flag=_ali_clerk_flag;
@property(nonatomic) long long pub_follow_flag; // @synthesize pub_follow_flag=_pub_follow_flag;
@property(retain, nonatomic) NSString *pub_desc; // @synthesize pub_desc=_pub_desc;
@property(retain, nonatomic) NSString *pub_nick; // @synthesize pub_nick=_pub_nick;
@property(retain, nonatomic) NSNumber *pub_id; // @synthesize pub_id=_pub_id;
@property(retain, nonatomic) NSString *buyer_rank_image; // @synthesize buyer_rank_image=_buyer_rank_image;
@property(retain, nonatomic) NSNumber *buyer_rank; // @synthesize buyer_rank=_buyer_rank;
@property(nonatomic) _Bool shop_freepostage; // @synthesize shop_freepostage=_shop_freepostage;
@property(retain, nonatomic) NSString *shop_point; // @synthesize shop_point=_shop_point;
@property(nonatomic) long long shop_discount; // @synthesize shop_discount=_shop_discount;
@property(retain, nonatomic) NSDate *shop_createtime; // @synthesize shop_createtime=_shop_createtime;
@property(nonatomic) long long shop_relation; // @synthesize shop_relation=_shop_relation;
@property(retain, nonatomic) NSString *shop_url; // @synthesize shop_url=_shop_url;
@property(retain, nonatomic) NSString *shop_name; // @synthesize shop_name=_shop_name;
@property(nonatomic) long long identity; // @synthesize identity=_identity;
@property(nonatomic) long long vip_level; // @synthesize vip_level=_vip_level;
@property(retain, nonatomic) NSString *bg_image; // @synthesize bg_image=_bg_image;
@property(retain, nonatomic) NSString *verify_answer; // @synthesize verify_answer=_verify_answer;
@property(retain, nonatomic) NSString *verify_question; // @synthesize verify_question=_verify_question;
@property(nonatomic) long long verify_flag; // @synthesize verify_flag=_verify_flag;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *md5_phone; // @synthesize md5_phone=_md5_phone;
@property(retain, nonatomic) NSString *phone_num; // @synthesize phone_num=_phone_num;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *longUid; // @synthesize longUid=_longUid;
- (void).cxx_destruct;

@end

