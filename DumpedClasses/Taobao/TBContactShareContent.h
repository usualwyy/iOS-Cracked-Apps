//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBContactServiceShareItemProtocol.h"

@class NSDictionary, NSString, UIView;

@interface TBContactShareContent : NSObject <TBContactServiceShareItemProtocol>
{
    NSString *_imageUrl;
    NSString *_title;
    NSString *_linkUrl;
    NSString *_source;
    UIView *_shareView;
    NSString *_businessContent;
    NSString *_businessId;
    NSString *_shareId;
    NSDictionary *_extentInfoMap;
}

@property(retain, nonatomic) NSDictionary *extentInfoMap; // @synthesize extentInfoMap=_extentInfoMap;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *businessContent; // @synthesize businessContent=_businessContent;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

