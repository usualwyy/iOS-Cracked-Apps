//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAccsCallbackPreloader : NSObject
{
}

+ (void)registerNotificationCallback:(id)arg1 withClassName:(id)arg2;
+ (id)shareInstance;
- (void)loadCallbackWithServiceID:(id)arg1 withClassName:(id)arg2;
- (void)loadCallback;
- (void)asyncLoad;

@end

