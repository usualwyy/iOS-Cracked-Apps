//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StyleKitParser : NSObject
{
}

+ (_Bool)isOtherModuleStyleWithStyleName:(id)arg1;
+ (_Bool)isDefinedSelectorKey:(id)arg1 forContext:(id)arg2;
+ (id)onlyObjectForDictionary:(id)arg1;
+ (id)styleValueForKey:(id)arg1 inStyle:(id)arg2 context:(id)arg3;
+ (id)styleForOtherModuleWithNamespaceName:(id)arg1;
+ (void)setStyleDic:(id)arg1 forKey:(id)arg2 object:(id)arg3 context:(id)arg4;
+ (id)styleDicForData:(id)arg1 forContext:(id)arg2;
+ (id)styleWithOriginData:(id)arg1 forContext:(id)arg2;
+ (id)parseStylesWithOriginData:(id)arg1 styles:(id)arg2 key:(id)arg3 forContext:(id)arg4;
+ (id)parseGroupStyles:(id)arg1 forContext:(id)arg2;
+ (id)parentStyleForStyle:(id)arg1 inStyles:(id)arg2;
+ (void)parseParentStyleWithStyles:(id)arg1 context:(id)arg2;
+ (id)stylesWithOriginData:(id)arg1 forContext:(id)arg2;
+ (id)mapWithOriginData:(id)arg1;

@end

