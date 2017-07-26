//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface GodeyeJointPointCenter : NSObject
{
    _Bool _isBackgroundObserverRegistered;
    _Bool _isForegroundObserverRegistered;
    NSMutableArray *_enterBackgroundJointPointCallbacks;
    NSMutableArray *_enterForegroundJointPointCallbacks;
    NSMutableDictionary *_notificationCallbacks;
}

@property(nonatomic) _Bool isForegroundObserverRegistered; // @synthesize isForegroundObserverRegistered=_isForegroundObserverRegistered;
@property(nonatomic) _Bool isBackgroundObserverRegistered; // @synthesize isBackgroundObserverRegistered=_isBackgroundObserverRegistered;
@property(retain, nonatomic) NSMutableDictionary *notificationCallbacks; // @synthesize notificationCallbacks=_notificationCallbacks;
@property(retain, nonatomic) NSMutableArray *enterForegroundJointPointCallbacks; // @synthesize enterForegroundJointPointCallbacks=_enterForegroundJointPointCallbacks;
@property(retain, nonatomic) NSMutableArray *enterBackgroundJointPointCallbacks; // @synthesize enterBackgroundJointPointCallbacks=_enterBackgroundJointPointCallbacks;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)handleEnterForeground;
- (void)handleEnterbackground;
- (void)installStopJointPoint:(id)arg1 stopJointPointCallback:(CDUnknownBlockType)arg2;
- (void)installStartJointPoint:(id)arg1 startJointPointCallback:(CDUnknownBlockType)arg2 isColdStart:(_Bool)arg3;
- (void)installJointPoints:(_Bool)arg1 startJointPoint:(id)arg2 startJointPointCallback:(CDUnknownBlockType)arg3 stopJointPoint:(id)arg4 stopJointPointCallback:(CDUnknownBlockType)arg5;
- (id)init;

@end

