//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AUThreadHelper : NSObject
{
}

+ (void)thread:(id)arg1 doSelector:(SEL)arg2 withObject:(id)arg3;
+ (void)threadRunWithName:(id)arg1;
+ (void)threadStop;
+ (void)threadStopWithThread:(id)arg1;
+ (id)threadStartWithName:(id)arg1;

@end

