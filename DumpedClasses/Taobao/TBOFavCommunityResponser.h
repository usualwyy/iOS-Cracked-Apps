//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

@class NSMutableArray<TBOBannerInfoCard>, NSMutableArray<TBOCommunity>, NSMutableArray<TBOCommunityInfoCard>, NSMutableArray<TBOMenuItemInfo>, NSMutableArray<TBOTopic>, NSString, TBOFestivalModel, TBOUser;

@interface TBOFavCommunityResponser : TBOBaseResponseModel
{
    NSString *_helloWords;
    NSMutableArray<TBOMenuItemInfo> *_menus;
    NSMutableArray<TBOCommunityInfoCard> *_plates;
    TBOUser *_user;
    NSString *_bucket;
    NSMutableArray<TBOCommunity> *_circles;
    NSMutableArray<TBOBannerInfoCard> *_todayCircles;
    NSMutableArray<TBOTopic> *_hotTopic;
    long long _circleNum;
    NSString *_addCircleUrl;
    NSString *_moreCircleUrl;
    TBOFestivalModel *_eventSettings;
}

@property(retain, nonatomic) TBOFestivalModel *eventSettings; // @synthesize eventSettings=_eventSettings;
@property(retain, nonatomic) NSString *moreCircleUrl; // @synthesize moreCircleUrl=_moreCircleUrl;
@property(retain, nonatomic) NSString *addCircleUrl; // @synthesize addCircleUrl=_addCircleUrl;
@property(nonatomic) long long circleNum; // @synthesize circleNum=_circleNum;
@property(retain, nonatomic) NSMutableArray<TBOTopic> *hotTopic; // @synthesize hotTopic=_hotTopic;
@property(retain, nonatomic) NSMutableArray<TBOBannerInfoCard> *todayCircles; // @synthesize todayCircles=_todayCircles;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *circles; // @synthesize circles=_circles;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) TBOUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSMutableArray<TBOCommunityInfoCard> *plates; // @synthesize plates=_plates;
@property(retain, nonatomic) NSMutableArray<TBOMenuItemInfo> *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) NSString *helloWords; // @synthesize helloWords=_helloWords;
- (void).cxx_destruct;
- (id)items;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

