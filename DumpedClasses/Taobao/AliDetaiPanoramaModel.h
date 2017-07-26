//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSMutableCopying.h"

@class NSString, UIColor, UIImage;

@interface AliDetaiPanoramaModel : TBJSONModel <NSMutableCopying>
{
    _Bool _zoomEnabled;
    NSString *_itemId;
    NSString *_sellerId;
    NSString *_url;
    NSString *_divaHdUrl;
    NSString *_divaHdSize;
    NSString *_fileId;
    UIColor *_backgroundColor;
    UIImage *_placeHolder;
    unsigned long long _index;
    NSString *_eventToken;
    struct CGSize _size;
}

@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UIImage *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *divaHdSize; // @synthesize divaHdSize=_divaHdSize;
@property(retain, nonatomic) NSString *divaHdUrl; // @synthesize divaHdUrl=_divaHdUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)changeValueForBigPhotoBrowser;
- (id)initWithJSONDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

