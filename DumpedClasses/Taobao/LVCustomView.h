//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LVClassProtocal.h"
#import "LVProtocal.h"

@class CAShapeLayer, LuaViewCore, NSString;

@interface LVCustomView : UIView <LVProtocal, LVClassProtocal>
{
    _Bool _lv_canvas;
    _Bool _lv_isCallbackAddClickGesture;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    unsigned long long _lv_align;
    CAShapeLayer *_lv_shapeLayer;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(nonatomic) _Bool lv_isCallbackAddClickGesture; // @synthesize lv_isCallbackAddClickGesture=_lv_isCallbackAddClickGesture;
@property(nonatomic) _Bool lv_canvas; // @synthesize lv_canvas=_lv_canvas;
@property(retain, nonatomic) CAShapeLayer *lv_shapeLayer; // @synthesize lv_shapeLayer=_lv_shapeLayer;
@property(nonatomic) unsigned long long lv_align; // @synthesize lv_align=_lv_align;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)init:(struct lua_State *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

