//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;

@interface TBSNSAccountItemBase : TBJSONModel
{
    _Bool _followed;
    _Bool _tmall;
    _Bool _dynamic;
    _Bool _isRecommend;
    NSString *_accountNick;
    NSString *_description;
    NSString *_logoUrl;
    NSString *_message;
    NSString *_redirectTargetUrl;
    NSString *_jumpUrl;
    NSString *_jumpIcon;
    NSString *_reason;
    unsigned long long _id;
    unsigned long long _shopId;
    long long _fansCount;
    long long _discount;
    long long _newItemCount;
    NSString *_certIcon;
    unsigned long long _accountType;
    unsigned long long _certTypeNew;
    NSString *_certTitleNew;
    NSString *_promotionIcon;
    NSString *_shopBottomIcon;
    NSString *_rankLevelPic;
    NSMutableArray *_iconList;
}

@property(retain, nonatomic) NSMutableArray *iconList; // @synthesize iconList=_iconList;
@property(retain, nonatomic) NSString *rankLevelPic; // @synthesize rankLevelPic=_rankLevelPic;
@property(retain, nonatomic) NSString *shopBottomIcon; // @synthesize shopBottomIcon=_shopBottomIcon;
@property(retain, nonatomic) NSString *promotionIcon; // @synthesize promotionIcon=_promotionIcon;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(nonatomic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) NSString *certTitleNew; // @synthesize certTitleNew=_certTitleNew;
@property(nonatomic) unsigned long long certTypeNew; // @synthesize certTypeNew=_certTypeNew;
@property(nonatomic) unsigned long long accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *certIcon; // @synthesize certIcon=_certIcon;
@property(nonatomic) long long newItemCount; // @synthesize newItemCount=_newItemCount;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) unsigned long long shopId; // @synthesize shopId=_shopId;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *jumpIcon; // @synthesize jumpIcon=_jumpIcon;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *redirectTargetUrl; // @synthesize redirectTargetUrl=_redirectTargetUrl;
@property(nonatomic) _Bool tmall; // @synthesize tmall=_tmall;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_accountNick;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

