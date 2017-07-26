//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutTabbarItemModel : TBJSONModel
{
    NSString *_tabbarItemTitle;
    NSString *_normalImageURL;
    NSString *_selectedImageURL;
    NSString *_hotImageURL;
    NSString *_hotSelectedKey;
    NSString *_normalTextColor;
    NSString *_selectedTextColor;
    NSString *_backgoundColor;
    NSString *_tabbarTargetUrl;
    NSString *_tabbarTargetUrlKey;
}

+ (id)modelKeyMapper;
@property(copy, nonatomic) NSString *tabbarTargetUrlKey; // @synthesize tabbarTargetUrlKey=_tabbarTargetUrlKey;
@property(copy, nonatomic) NSString *tabbarTargetUrl; // @synthesize tabbarTargetUrl=_tabbarTargetUrl;
@property(copy, nonatomic) NSString *backgoundColor; // @synthesize backgoundColor=_backgoundColor;
@property(copy, nonatomic) NSString *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(copy, nonatomic) NSString *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(copy, nonatomic) NSString *hotSelectedKey; // @synthesize hotSelectedKey=_hotSelectedKey;
@property(copy, nonatomic) NSString *hotImageURL; // @synthesize hotImageURL=_hotImageURL;
@property(copy, nonatomic) NSString *selectedImageURL; // @synthesize selectedImageURL=_selectedImageURL;
@property(copy, nonatomic) NSString *normalImageURL; // @synthesize normalImageURL=_normalImageURL;
@property(copy, nonatomic) NSString *tabbarItemTitle; // @synthesize tabbarItemTitle=_tabbarItemTitle;
- (void).cxx_destruct;

@end

