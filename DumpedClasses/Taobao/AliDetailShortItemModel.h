//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailProductBaseModel.h"

@class NSString;

@interface AliDetailShortItemModel : AliDetailProductBaseModel
{
    NSString *_itemId;
    NSString *_picUrl;
    NSString *_panoramaUrl;
    NSString *_title;
    NSString *_price;
    NSString *_originalPrice;
    NSString *_tips;
    NSString *_jumpUrl;
    NSString *_showCart;
    NSString *_icons;
    NSString *_matchType;
    NSString *_acm;
    NSString *_hasSku;
    NSString *_entityType;
    NSString *_avType;
}

@property(copy, nonatomic) NSString *avType; // @synthesize avType=_avType;
@property(copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
@property(copy, nonatomic) NSString *hasSku; // @synthesize hasSku=_hasSku;
@property(copy, nonatomic) NSString *acm; // @synthesize acm=_acm;
@property(copy, nonatomic) NSString *matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *showCart; // @synthesize showCart=_showCart;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *panoramaUrl; // @synthesize panoramaUrl=_panoramaUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)exposureUserTrackParams;

@end

