//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSMutableArray, NSMutableArray<TBOItemFeed>, NSString;

@interface TBOPublishTopicRequest : TBMTOPBaseRequest
{
    NSString *_activitySourceId;
    NSString *_activityId;
    unsigned long long _type;
    NSString *_name;
    NSString *_memo;
    NSString *_cid;
    NSMutableArray *_imagesMTop;
    NSMutableArray<TBOItemFeed> *_items;
    unsigned long long _actionType;
    NSString *_asac;
}

@property(retain, nonatomic) NSString *asac; // @synthesize asac=_asac;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSMutableArray<TBOItemFeed> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *imagesMTop; // @synthesize imagesMTop=_imagesMTop;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *activitySourceId; // @synthesize activitySourceId=_activitySourceId;
- (void).cxx_destruct;
- (id)init;

@end

