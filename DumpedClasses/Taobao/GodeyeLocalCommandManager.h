//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GodeyeLocalCommandManager : NSObject
{
    NSString *_documentDir;
}

@property(copy, nonatomic) NSString *documentDir; // @synthesize documentDir=_documentDir;
- (void).cxx_destruct;
- (id)localCommandDir:(id)arg1;
- (void)removeLocalCommand:(id)arg1;
- (void)saveRawCommand:(id)arg1 command:(id)arg2;
- (id)getRawCommand:(id)arg1;

@end

