//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<AliDetailComponentLayoutModel>, NSDictionary<AliDetailActionModel>, NSDictionary<AliDetailProductComponentData>;

@interface AliDetailProductComponents : TBJSONModel
{
    NSArray<AliDetailComponentLayoutModel> *_layout;
    NSDictionary<AliDetailProductComponentData> *_componentData;
    NSDictionary<AliDetailActionModel> *_componentActions;
}

@property(retain, nonatomic) NSDictionary<AliDetailActionModel> *componentActions; // @synthesize componentActions=_componentActions;
@property(retain, nonatomic) NSDictionary<AliDetailProductComponentData> *componentData; // @synthesize componentData=_componentData;
@property(retain, nonatomic) NSArray<AliDetailComponentLayoutModel> *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;

@end

