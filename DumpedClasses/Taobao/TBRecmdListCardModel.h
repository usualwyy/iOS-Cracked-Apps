//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCardModel.h"

@class NSArray<TBRecmdPicComponent>, TBRecmdPicComponent, TBRecmdRichTextComponent, TBRecmdTextComponent, TBRecmdTipComponent;

@interface TBRecmdListCardModel : TBRecmdCardModel
{
    TBRecmdTextComponent *_nick;
    TBRecmdPicComponent *_bgPic201704;
    NSArray<TBRecmdPicComponent> *_images;
    TBRecmdPicComponent *_icon;
    TBRecmdTipComponent *_bottomTip;
    TBRecmdRichTextComponent *_title;
    TBRecmdRichTextComponent *_desc;
}

+ (id)factoryKey;
@property(retain, nonatomic) TBRecmdRichTextComponent *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) TBRecmdRichTextComponent *title; // @synthesize title=_title;
@property(retain, nonatomic) TBRecmdTipComponent *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(retain, nonatomic) TBRecmdPicComponent *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSArray<TBRecmdPicComponent> *images; // @synthesize images=_images;
@property(retain, nonatomic) TBRecmdPicComponent *bgPic201704; // @synthesize bgPic201704=_bgPic201704;
@property(retain, nonatomic) TBRecmdTextComponent *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)countStr;
- (id)descStr;
- (id)titleStr;
- (id)tagImgURL;
- (id)itemImgURLAtIndex:(long long)arg1;
- (id)bgImgURL;

@end

