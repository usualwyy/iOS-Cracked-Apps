//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, UIView, UIViewController;

@interface TBContactShareItem : NSObject
{
    NSString *_shareType;
    NSString *_shareContent;
    NSString *_imageUrl;
    NSString *_title;
    NSString *_businessId;
    NSString *_shareId;
    NSString *_originLinkUrl;
    NSString *_linkUrl;
    NSString *_htmlLinkUrl;
    NSString *_htmlWithShareIdLinkUrl;
    NSString *_itemId;
    NSString *_remark;
    NSArray *_contacts;
    NSArray *_changeContacts;
    NSString *_changeTaoFriends;
    NSString *_changeGroupIds;
    NSString *_userName;
    NSString *_itemPrice;
    NSDictionary *_extentInfoMap;
    UIView *_shareView;
    UIViewController *_currentPresentViewController;
}

@property(nonatomic) __weak UIViewController *currentPresentViewController; // @synthesize currentPresentViewController=_currentPresentViewController;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) NSDictionary *extentInfoMap; // @synthesize extentInfoMap=_extentInfoMap;
@property(retain, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *changeGroupIds; // @synthesize changeGroupIds=_changeGroupIds;
@property(retain, nonatomic) NSString *changeTaoFriends; // @synthesize changeTaoFriends=_changeTaoFriends;
@property(retain, nonatomic) NSArray *changeContacts; // @synthesize changeContacts=_changeContacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *htmlWithShareIdLinkUrl; // @synthesize htmlWithShareIdLinkUrl=_htmlWithShareIdLinkUrl;
@property(retain, nonatomic) NSString *htmlLinkUrl; // @synthesize htmlLinkUrl=_htmlLinkUrl;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *originLinkUrl; // @synthesize originLinkUrl=_originLinkUrl;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;

@end

