//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<AliDetailShortItemModel>, NSString;

@interface AliDetailPromotionSubItemViewData : NSObject
{
    _Bool _hideIconText;
    NSString *_iconText;
    NSString *_desc;
    NSString *_time;
    NSString *_actionUrl;
    NSArray<AliDetailShortItemModel> *_items;
}

@property(retain, nonatomic) NSArray<AliDetailShortItemModel> *items; // @synthesize items=_items;
@property(nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool hideIconText; // @synthesize hideIconText=_hideIconText;
@property(retain, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
- (void).cxx_destruct;

@end

