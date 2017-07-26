//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, NSURL, UIColor;

@interface MTabbarModel : NSObject
{
    _Bool _isAnimation;
    NSArray *_tabbarUrlRegArray;
    UIColor *_dividerColor;
    UIColor *_backgroundColor;
    NSString *_bgImage;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    UIColor *_normalBgColor;
    UIColor *_selectedBgColor;
    UIColor *_badgeBackgroundColor;
    UIColor *_badgeColor;
    NSURL *_iconfontResourceUrl;
    NSMutableArray *_tabbarItems;
}

@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(retain, nonatomic) NSMutableArray *tabbarItems; // @synthesize tabbarItems=_tabbarItems;
@property(retain, nonatomic) NSURL *iconfontResourceUrl; // @synthesize iconfontResourceUrl=_iconfontResourceUrl;
@property(retain, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(retain, nonatomic) UIColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(retain, nonatomic) UIColor *selectedBgColor; // @synthesize selectedBgColor=_selectedBgColor;
@property(retain, nonatomic) UIColor *normalBgColor; // @synthesize normalBgColor=_normalBgColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(copy, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property(retain, nonatomic) NSArray *tabbarUrlRegArray; // @synthesize tabbarUrlRegArray=_tabbarUrlRegArray;
- (void).cxx_destruct;

@end

