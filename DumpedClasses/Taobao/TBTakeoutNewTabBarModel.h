//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBTakeoutTabbarItemModel>;

@interface TBTakeoutNewTabBarModel : TBJSONModel
{
    NSArray<TBTakeoutTabbarItemModel> *_tabbarList;
}

+ (id)modelContainerClassMapDictioanry;
+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSArray<TBTakeoutTabbarItemModel> *tabbarList; // @synthesize tabbarList=_tabbarList;
- (void).cxx_destruct;

@end

