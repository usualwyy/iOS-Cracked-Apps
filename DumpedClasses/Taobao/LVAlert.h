//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "LVClassProtocal.h"
#import "LVProtocal.h"
#import "UIAlertViewDelegate.h"

@class LuaViewCore, NSArray, NSString;

@interface LVAlert : UIAlertView <LVProtocal, LVClassProtocal, UIAlertViewDelegate>
{
    int _argNum;
    int _functionNum;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    NSArray *_cmdArray;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(nonatomic) int functionNum; // @synthesize functionNum=_functionNum;
@property(nonatomic) int argNum; // @synthesize argNum=_argNum;
@property(retain, nonatomic) NSArray *cmdArray; // @synthesize cmdArray=_cmdArray;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init:(struct lua_State *)arg1 argNum:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

