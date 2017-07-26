//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LVClassProtocal.h"
#import "LVProtocal.h"

@class LuaViewCore, NSArray, NSString, UIEvent, UIGestureRecognizer, UITouch;

@interface LVEvent : NSObject <LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    UIEvent *_event;
    long long _eventType;
    UIGestureRecognizer *_gesture;
    NSArray *_touches;
    UITouch *_touch;
    struct CGPoint _point;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (id)createLuaEvent:(struct lua_State *)arg1 event:(id)arg2 gesture:(id)arg3;
@property(retain, nonatomic) UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) __weak UIGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) __weak UIEvent *event; // @synthesize event=_event;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (id)lv_nativeObject;
- (id)init:(struct lua_State *)arg1 gesture:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

