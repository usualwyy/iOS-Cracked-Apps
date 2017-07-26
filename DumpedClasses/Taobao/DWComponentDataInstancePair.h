//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DWComponent;

@interface DWComponentDataInstancePair : NSObject
{
    DWComponent *_landscapeInstance;
    DWComponent *_portraitInstance;
}

@property(retain, nonatomic) DWComponent *portraitInstance; // @synthesize portraitInstance=_portraitInstance;
@property(retain, nonatomic) DWComponent *landscapeInstance; // @synthesize landscapeInstance=_landscapeInstance;
- (void).cxx_destruct;
- (id)initWithLandscapeInstance:(id)arg1 portraitInstance:(id)arg2;

@end

