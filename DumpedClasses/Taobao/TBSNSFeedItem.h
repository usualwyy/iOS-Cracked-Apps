//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, NSURL, TBSNSFeedCountItem, TBSNSFeedTileItem;

@interface TBSNSFeedItem : TBJSONModel
{
    _Bool _deleted;
    _Bool _linkUrlIsExt;
    _Bool _needtop;
    _Bool _isFeedFavoured;
    _Bool _isFeedFavorite;
    _Bool _isFeedDeleted;
    _Bool _isImageHadLoad;
    int _typeL;
    TBSNSFeedTileItem *_coverTile;
    unsigned long long _id;
    unsigned long long _creatorId;
    NSString *_linkTitle;
    NSString *_linkUrl;
    NSString *_title;
    NSArray *_tiles;
    unsigned long long _time;
    NSString *_summary;
    NSString *_accountNick;
    unsigned long long _componentId;
    NSString *_message;
    NSString *_componentName;
    NSString *_detailUrl;
    unsigned long long _feedType;
    TBSNSFeedCountItem *_feedCount;
    NSString *_recommendReason;
    long long _recommendType;
    NSArray *_nodes;
    double _feedInfoHeightL;
    NSString *_recommendReasonL;
    NSURL *_imageWifiUrl;
    NSURL *_imageUnWifiUrl;
}

@property(retain, nonatomic) NSURL *imageUnWifiUrl; // @synthesize imageUnWifiUrl=_imageUnWifiUrl;
@property(retain, nonatomic) NSURL *imageWifiUrl; // @synthesize imageWifiUrl=_imageWifiUrl;
@property(retain, nonatomic) NSString *recommendReasonL; // @synthesize recommendReasonL=_recommendReasonL;
@property(nonatomic) double feedInfoHeightL; // @synthesize feedInfoHeightL=_feedInfoHeightL;
@property(nonatomic) int typeL; // @synthesize typeL=_typeL;
@property(nonatomic) _Bool isImageHadLoad; // @synthesize isImageHadLoad=_isImageHadLoad;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(nonatomic) _Bool isFeedDeleted; // @synthesize isFeedDeleted=_isFeedDeleted;
@property(nonatomic) _Bool isFeedFavorite; // @synthesize isFeedFavorite=_isFeedFavorite;
@property(nonatomic) _Bool isFeedFavoured; // @synthesize isFeedFavoured=_isFeedFavoured;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) TBSNSFeedCountItem *feedCount; // @synthesize feedCount=_feedCount;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool needtop; // @synthesize needtop=_needtop;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSString *accountNick; // @synthesize accountNick=_accountNick;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *tiles; // @synthesize tiles=_tiles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool linkUrlIsExt; // @synthesize linkUrlIsExt=_linkUrlIsExt;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) unsigned long long creatorId; // @synthesize creatorId=_creatorId;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(retain, nonatomic) TBSNSFeedTileItem *coverTile; // @synthesize coverTile=_coverTile;
- (void).cxx_destruct;
- (unsigned long long)getGoodsItemIdAtIndex:(int)arg1;
- (id)getGoodsDetailUrlAtIndex:(int)arg1;
- (long long)getImagesCount;
- (_Bool)isFeedStreamNeedMask;
- (_Bool)isFeedStreamNeedWidget;
- (id)timeString;
- (id)toJSONDictionary;
- (id)getFeedImageUrl;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

