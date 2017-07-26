//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LVClassProtocal.h"
#import "LVProtocal.h"

@class LuaViewCore, NSMutableData, NSString;

@interface LVData : NSObject <LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    NSMutableData *_data;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (int)createDataObject:(struct lua_State *)arg1 data1:(id)arg2 data2:(id)arg3;
+ (int)createDataObject:(struct lua_State *)arg1 data:(id)arg2;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (id)lv_nativeObject;
- (id)init:(struct lua_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

