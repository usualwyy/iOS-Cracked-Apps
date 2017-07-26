//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, TBMergeDataObject, TBSubPoints;

@interface TBMCMoreDetail : NSObject
{
    NSString *_iconUrl;
    NSString *_title;
    NSString *_content;
    NSString *_contentHighlight;
    NSString *_time;
    unsigned long long _appId;
    NSString *_appName;
    NSString *_mainPic;
    NSString *_mainDesc;
    NSString *_actionUrl;
    NSString *_action;
    NSDictionary *_ext;
    NSString *_actionCode;
    NSString *_mailCompanyName;
    NSString *_mailNo;
    NSString *_orderId;
    NSString *_picUrl;
    NSString *_subPic;
    NSString *_subDesc;
    TBMergeDataObject *_mergeDataObject;
    TBSubPoints *_subPoints;
    long long _finalMergeLevel;
    NSString *_mergeTitle;
    NSMutableArray *_mergeMsg;
    NSMutableArray *_recommendList;
    NSString *_showType;
}

@property(copy, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSMutableArray *recommendList; // @synthesize recommendList=_recommendList;
@property(retain, nonatomic) NSMutableArray *mergeMsg; // @synthesize mergeMsg=_mergeMsg;
@property(retain, nonatomic) NSString *mergeTitle; // @synthesize mergeTitle=_mergeTitle;
@property(nonatomic) long long finalMergeLevel; // @synthesize finalMergeLevel=_finalMergeLevel;
@property(retain, nonatomic) TBSubPoints *subPoints; // @synthesize subPoints=_subPoints;
@property(retain, nonatomic) TBMergeDataObject *mergeDataObject; // @synthesize mergeDataObject=_mergeDataObject;
@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc=_subDesc;
@property(retain, nonatomic) NSString *subPic; // @synthesize subPic=_subPic;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSString *mailNo; // @synthesize mailNo=_mailNo;
@property(retain, nonatomic) NSString *mailCompanyName; // @synthesize mailCompanyName=_mailCompanyName;
@property(retain, nonatomic) NSString *actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *mainDesc; // @synthesize mainDesc=_mainDesc;
@property(retain, nonatomic) NSString *mainPic; // @synthesize mainPic=_mainPic;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) unsigned long long appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *contentHighlight; // @synthesize contentHighlight=_contentHighlight;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
