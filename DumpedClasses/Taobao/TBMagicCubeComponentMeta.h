//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBMagicCubeActionMeta>, NSArray<TBMagicCubeComponentMeta>, NSArray<TBMagicCubeEffectMeta>, NSDictionary, NSString;

@interface TBMagicCubeComponentMeta : TBJSONModel
{
    NSString *_componentId;
    NSString *_locatorId;
    NSString *_type;
    NSString *_style;
    NSDictionary *_payload;
    NSArray<TBMagicCubeActionMeta> *_actions;
    NSArray<TBMagicCubeEffectMeta> *_effects;
    NSArray<TBMagicCubeComponentMeta> *_children;
}

+ (id)excludePathes;
@property(retain, nonatomic) NSArray<TBMagicCubeComponentMeta> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSArray<TBMagicCubeEffectMeta> *effects; // @synthesize effects=_effects;
@property(retain, nonatomic) NSArray<TBMagicCubeActionMeta> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *locatorId; // @synthesize locatorId=_locatorId;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
- (void).cxx_destruct;

@end

