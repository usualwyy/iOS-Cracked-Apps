//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DREngine : NSObject
{
}

+ (id)sharedInstance;
- (void)registerTemplateClass:(Class)arg1;
- (void)registerTemplateInstance:(id)arg1;
- (void)registerConfigClass:(Class)arg1;
- (void)registerConfigInstance:(id)arg1;
- (id)incrementalMapWithModuleName:(id)arg1;

@end

