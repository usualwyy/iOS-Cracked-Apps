//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

#import "ITBOBucket.h"

@class NSArray, NSMutableArray, NSMutableArray<TBOAction>, NSMutableArray<TBOMenuItemInfo>, NSMutableArray<TBONotice>, NSMutableArray<TBOTag>, NSString, TBOCommunity;

@interface TBOCommunityResponser : TBOBaseResponseModel <ITBOBucket>
{
    NSMutableArray<TBOAction> *_actions;
    TBOCommunity *_community;
    NSArray *_cardList;
    NSMutableArray<TBONotice> *_notices;
    NSMutableArray<TBOMenuItemInfo> *_tabs;
    NSString *_bucket;
    NSMutableArray<TBOTag> *_tags;
    NSMutableArray<TBOTag> *_circleTabs;
    NSMutableArray *_circleActions;
}

@property(retain, nonatomic) NSMutableArray *circleActions; // @synthesize circleActions=_circleActions;
@property(retain, nonatomic) NSMutableArray<TBOTag> *circleTabs; // @synthesize circleTabs=_circleTabs;
@property(retain, nonatomic) NSMutableArray<TBOTag> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) NSMutableArray<TBOMenuItemInfo> *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) NSMutableArray<TBONotice> *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) TBOCommunity *community; // @synthesize community=_community;
@property(retain, nonatomic) NSMutableArray<TBOAction> *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (id)items;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

