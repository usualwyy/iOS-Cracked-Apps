//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketBaseComponent.h"

@class DRItem, NSDictionary, NSString;

@interface TMMarketDRenderComponent : TMMarketBaseComponent
{
    NSDictionary *_data;
    NSString *_itemType;
    DRItem *_drItem;
}

@property(retain, nonatomic) DRItem *drItem; // @synthesize drItem=_drItem;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)calculateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

