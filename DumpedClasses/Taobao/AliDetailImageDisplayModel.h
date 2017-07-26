//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSMutableCopying.h"

@class NSString;

@interface AliDetailImageDisplayModel : TBJSONModel <NSMutableCopying>
{
    NSString *_photoURL;
    unsigned long long _imageIndex;
    NSString *_eventToken;
    NSString *_itemId;
    long long _holderType;
    struct CGSize _imageSize;
}

@property(nonatomic) long long holderType; // @synthesize holderType=_holderType;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) unsigned long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *photoURL; // @synthesize photoURL=_photoURL;
- (void).cxx_destruct;
- (void)changeValueForBigPhotoBrowser;
- (id)initWithJSONDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

