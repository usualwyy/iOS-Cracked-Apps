//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray, NSArray<AliDetailProductQualityContentModel>;

@interface AliDetailProductQualityModel : AliDetailComponentModel
{
    NSArray *_imageTags;
    NSArray<AliDetailProductQualityContentModel> *_content;
}

@property(retain, nonatomic) NSArray<AliDetailProductQualityContentModel> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *imageTags; // @synthesize imageTags=_imageTags;
- (void).cxx_destruct;

@end

