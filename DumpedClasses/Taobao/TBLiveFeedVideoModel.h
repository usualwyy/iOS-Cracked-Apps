//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveVideoGoodModel>, NSArray<TBLiveVideoUrlModel>, NSString, TBLiveFeedAccountModel;

@interface TBLiveFeedVideoModel : TBJSONModel
{
    NSString *_feedId;
    NSString *_type;
    NSString *_status;
    NSString *_title;
    NSString *_right;
    NSString *_coverImg;
    NSString *_liveUrl;
    NSString *_liveUrlHls;
    NSString *_totalJoinCount;
    NSString *_viewCount;
    NSString *_joinCount;
    NSString *_startTime;
    NSString *_parseCount;
    NSString *_accountId;
    NSString *_nativeFeedDetailUrl;
    NSString *_tags;
    NSString *_trackInfo;
    NSString *_scm;
    NSString *_matchType;
    NSString *_isPlayerLow;
    TBLiveFeedAccountModel *_accountDO;
    NSArray<TBLiveVideoUrlModel> *_liveUrlList;
    NSString *_location;
    NSString *_customLogo;
    NSArray<TBLiveVideoGoodModel> *_goodsList;
    NSString *_favorImg;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *favorImg; // @synthesize favorImg=_favorImg;
@property(retain, nonatomic) NSArray<TBLiveVideoGoodModel> *goodsList; // @synthesize goodsList=_goodsList;
@property(copy, nonatomic) NSString *customLogo; // @synthesize customLogo=_customLogo;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray<TBLiveVideoUrlModel> *liveUrlList; // @synthesize liveUrlList=_liveUrlList;
@property(retain, nonatomic) TBLiveFeedAccountModel *accountDO; // @synthesize accountDO=_accountDO;
@property(copy, nonatomic) NSString *isPlayerLow; // @synthesize isPlayerLow=_isPlayerLow;
@property(copy, nonatomic) NSString *matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *parseCount; // @synthesize parseCount=_parseCount;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *joinCount; // @synthesize joinCount=_joinCount;
@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *totalJoinCount; // @synthesize totalJoinCount=_totalJoinCount;
@property(copy, nonatomic) NSString *liveUrlHls; // @synthesize liveUrlHls=_liveUrlHls;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *right; // @synthesize right=_right;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (int)feedVideoStatus;

@end

