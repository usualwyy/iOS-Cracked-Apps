//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBHTHomeSpecialMarketItemModel : TBJSONModel
{
    NSString *_biz_id;
    NSString *_title;
    NSString *_subtitle;
    NSString *_title_color;
    NSArray *_icon_url;
    NSString *_linkto;
}

@property(copy, nonatomic) NSString *linkto; // @synthesize linkto=_linkto;
@property(retain, nonatomic) NSArray *icon_url; // @synthesize icon_url=_icon_url;
@property(copy, nonatomic) NSString *title_color; // @synthesize title_color=_title_color;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *biz_id; // @synthesize biz_id=_biz_id;
- (void).cxx_destruct;

@end

