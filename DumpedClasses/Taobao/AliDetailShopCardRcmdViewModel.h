//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSString;

@interface AliDetailShopCardRcmdViewModel : AliDetailComponentModel
{
    NSString *_shopIcon;
    NSString *_shopName;
    NSString *_levelPic;
    NSString *_tagIcon;
    NSString *_hintLogo;
    NSString *_hintText;
    NSString *_buttonTitle;
    NSString *_shopDesc;
}

@property(copy, nonatomic) NSString *shopDesc; // @synthesize shopDesc=_shopDesc;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(copy, nonatomic) NSString *hintLogo; // @synthesize hintLogo=_hintLogo;
@property(copy, nonatomic) NSString *tagIcon; // @synthesize tagIcon=_tagIcon;
@property(copy, nonatomic) NSString *levelPic; // @synthesize levelPic=_levelPic;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *shopIcon; // @synthesize shopIcon=_shopIcon;
- (void).cxx_destruct;
- (void)setHeaderLevelPic:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1;

@end

