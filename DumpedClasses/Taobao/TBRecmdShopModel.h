//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class TBRecmdPicComponent, TBRecmdTextComponent;

@interface TBRecmdShopModel : TBJSONModel
{
    TBRecmdPicComponent *_bgPic;
    TBRecmdPicComponent *_icon;
    TBRecmdTextComponent *_name;
    TBRecmdPicComponent *_starLevel;
}

@property(retain, nonatomic) TBRecmdPicComponent *starLevel; // @synthesize starLevel=_starLevel;
@property(retain, nonatomic) TBRecmdTextComponent *name; // @synthesize name=_name;
@property(retain, nonatomic) TBRecmdPicComponent *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) TBRecmdPicComponent *bgPic; // @synthesize bgPic=_bgPic;
- (void).cxx_destruct;

@end

