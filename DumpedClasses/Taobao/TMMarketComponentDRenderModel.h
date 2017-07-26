//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSDictionary, NSString;

@interface TMMarketComponentDRenderModel : TMMarketComponentBaseModel
{
    NSDictionary *_drenderData;
    NSString *_itemType;
    double _aspectRatio;
    double _componentHeight;
}

@property(nonatomic) double componentHeight; // @synthesize componentHeight=_componentHeight;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSDictionary *drenderData; // @synthesize drenderData=_drenderData;
- (void).cxx_destruct;
- (void)calculateHeight;
- (void)setItemFrame:(struct CGRect)arg1;
- (id)reuseIdentifier;
- (id)initWithDictionary:(id)arg1;

@end

