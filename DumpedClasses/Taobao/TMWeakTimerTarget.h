//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TMWeakTimerTarget : NSObject
{
    NSObject *_target;
    SEL _selector;
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;

@end

