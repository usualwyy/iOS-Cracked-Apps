//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSDictionary, NSString;

@interface AliDetailGifModel : AliDetailComponentModel
{
    NSString *_thumbnail;
    NSString *_videoUrl;
    NSString *_videoId;
    NSString *_jumpUrl;
    NSDictionary *_utParams;
}

@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (_Bool)isValid;
- (_Bool)forceBindData;

@end

