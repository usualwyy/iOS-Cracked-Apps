//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSMyCollectShopItem : TBJSONModel
{
    _Bool _top;
    _Bool _dynamic;
    _Bool _loaded;
    NSString *_headUrlStr;
    NSString *_shopName;
    NSString *_shopNameSpelling;
    unsigned long long _accountId;
    long long _jumpType;
    NSString *_category;
}

@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) _Bool top; // @synthesize top=_top;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *shopNameSpelling; // @synthesize shopNameSpelling=_shopNameSpelling;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *headUrlStr; // @synthesize headUrlStr=_headUrlStr;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

