//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveDetailGoodModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_itemPic;
    NSString *_itemUrl;
    NSString *_groupNum;
    NSString *_favored;
    NSString *_itemName;
    NSString *_itemPrice;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *favored; // @synthesize favored=_favored;
@property(copy, nonatomic) NSString *groupNum; // @synthesize groupNum=_groupNum;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

