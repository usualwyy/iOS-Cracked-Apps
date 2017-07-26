//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface HPPublishResourceItem : TBJSONModel
{
    NSString *_entityType;
    long long _itemId;
    NSString *_itemCoverUrl;
    NSString *_itemTitle;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemCoverUrl; // @synthesize itemCoverUrl=_itemCoverUrl;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;
- (void)setDefault;
- (id)init;

@end

