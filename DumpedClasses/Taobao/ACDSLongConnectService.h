//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACDSLongConnectService : NSObject
{
}

+ (id)TBAccsManagerAuto:(id)arg1;
+ (id)TBAccsManagerForACDSUnit:(id)arg1;
+ (id)TBAccsManagerForACDS;
+ (_Bool)isConnectTimeout:(id)arg1;
+ (_Bool)isFSError:(int)arg1;
+ (_Bool)isConnectError:(id)arg1;
+ (_Bool)isLKError:(id)arg1;
+ (id)connectOKEventName;
+ (id)connectBrushEventName;
+ (id)dataId:(id)arg1;
+ (id)data:(id)arg1;
+ (void)cancelRequest:(id)arg1;
+ (void)send:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

