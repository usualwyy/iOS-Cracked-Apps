//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSCSUtility : NSObject
{
}

+ (id)pageName:(int)arg1;
+ (void)pullConfigWithNamespace:(id)arg1 pageName:(id)arg2 version:(id)arg3 complete:(CDUnknownBlockType)arg4;
+ (_Bool)needPullConfigWithNamespace:(id)arg1 pageName:(id)arg2 version:(id)arg3;
+ (void)loadConfigOfNamespace:(id)arg1 pageName:(id)arg2 loadComplete:(CDUnknownBlockType)arg3;
+ (void)localConfigWithConfigName:(id)arg1 loadComplete:(CDUnknownBlockType)arg2;
+ (id)templateJsonPath:(id)arg1;

@end

