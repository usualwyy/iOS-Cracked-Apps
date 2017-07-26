//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FScriptProperty : NSObject
{
    NSMutableDictionary *_mapCAAnimation;
    NSMutableDictionary *_mapFillMode;
    NSMutableDictionary *_mapTimingFunction;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mapTimingFunction; // @synthesize mapTimingFunction=_mapTimingFunction;
@property(retain, nonatomic) NSMutableDictionary *mapFillMode; // @synthesize mapFillMode=_mapFillMode;
@property(retain, nonatomic) NSMutableDictionary *mapCAAnimation; // @synthesize mapCAAnimation=_mapCAAnimation;
- (void).cxx_destruct;
- (id)timingFunctionWithKey:(id)arg1;
- (id)fillModeWithKey:(id)arg1;
- (id)keyPathForCAAnimationWith:(id)arg1;
- (void)initCAAnimationMap;
- (id)init;

@end

