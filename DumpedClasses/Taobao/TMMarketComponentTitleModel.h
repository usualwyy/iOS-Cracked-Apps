//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSString;

@interface TMMarketComponentTitleModel : TMMarketComponentBaseModel
{
    NSString *_titleDescription;
    NSString *_subTitleIcon;
    NSString *_titleIcon;
    NSString *_descriptionColor;
}

@property(copy, nonatomic) NSString *descriptionColor; // @synthesize descriptionColor=_descriptionColor;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *subTitleIcon; // @synthesize subTitleIcon=_subTitleIcon;
@property(copy, nonatomic) NSString *titleDescription; // @synthesize titleDescription=_titleDescription;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (void)setItemFrame:(struct CGRect)arg1;
- (id)initWithDictionary:(id)arg1;

@end

