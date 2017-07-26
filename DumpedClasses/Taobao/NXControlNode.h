//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXNode.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSString, UILongPressGestureRecognizer;

@interface NXControlNode : NXNode <UIGestureRecognizerDelegate>
{
    _Bool _enabled;
    _Bool _highlighted;
    _Bool _tracking;
    _Bool _touchInside;
    NSMutableDictionary *_controlEventDispatchTable;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(nonatomic, getter=isTouchInside) _Bool touchInside; // @synthesize touchInside=_touchInside;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didLoad;
- (void)_handleLongPress:(id)arg1;
- (int)removeEvent:(id)arg1;
- (int)addEvent:(id)arg1 listener:(id)arg2;
- (void)touchUpInside:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)sendActionsForControlEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)allTargets;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fillInitialProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

