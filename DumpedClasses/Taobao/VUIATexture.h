//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIOpenGLObject.h"

@class NSString;

@interface VUIATexture : VUIOpenGLObject
{
    unsigned int _target;
    NSString *_name;
}

@property(nonatomic) unsigned int target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned int)createTexture;
- (void)onDestory:(unsigned int)arg1;
- (unsigned int)onInitialize;
- (id)initWithName:(id)arg1 target:(unsigned int)arg2;

@end

