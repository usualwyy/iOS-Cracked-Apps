//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBMyTaobaoToolsItem>, NSString, TBMyTaobaoToolsItem;

@interface TBMyTaobaoMyAppsItem : TBJSONModel
{
    NSString *_row;
    NSString *_name;
    NSArray<TBMyTaobaoToolsItem> *_list;
    TBMyTaobaoToolsItem *_superCell;
}

@property(retain, nonatomic) TBMyTaobaoToolsItem *superCell; // @synthesize superCell=_superCell;
@property(retain, nonatomic) NSArray<TBMyTaobaoToolsItem> *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *row; // @synthesize row=_row;
- (void).cxx_destruct;

@end

