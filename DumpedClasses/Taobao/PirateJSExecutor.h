//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext;

@interface PirateJSExecutor : NSObject
{
    JSContext *_jsContext;
}

@property(retain, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (id)objectFromScript:(id)arg1 parameters:(id)arg2;
- (id)executeScript:(id)arg1 method:(id)arg2 parameter:(id)arg3;

@end

