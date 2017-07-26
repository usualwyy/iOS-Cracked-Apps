//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface UISkinMgr : NSObject
{
    _Bool _enabledLogger;
    _Bool _enabledAutoUpdate;
    _Bool _preprocessed;
    float _uiscale;
    int _state;
    NSString *_skinName;
    NSString *_skinDir;
    NSMutableDictionary *_params;
    NSDictionary *_iconfontMaps;
}

+ (id)instance;
@property int state; // @synthesize state=_state;
@property(nonatomic) _Bool preprocessed; // @synthesize preprocessed=_preprocessed;
@property(retain, nonatomic) NSDictionary *iconfontMaps; // @synthesize iconfontMaps=_iconfontMaps;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) float uiscale; // @synthesize uiscale=_uiscale;
@property(readonly, nonatomic) NSString *skinDir; // @synthesize skinDir=_skinDir;
@property(retain, nonatomic) NSString *skinName; // @synthesize skinName=_skinName;
@property(nonatomic) _Bool enabledAutoUpdate; // @synthesize enabledAutoUpdate=_enabledAutoUpdate;
@property(nonatomic) _Bool enabledLogger; // @synthesize enabledLogger=_enabledLogger;
- (void).cxx_destruct;
- (void)reload;
- (void)waitLoadFinished;
- (id)init;

@end

