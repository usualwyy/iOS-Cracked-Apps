//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface ACDSProtocolGenerator : NSObject
{
    NSMutableDictionary *_generators;
    NSMutableArray *_reqModelMapping;
    NSRecursiveLock *_recursiveLock;
}

+ (unsigned long long)selectNetworkModelForType:(id)arg1;
+ (id)generator:(id)arg1 withParam:(id)arg2;
+ (void)parsePListFile;
+ (void)initProtocolGenerator;
+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(retain, nonatomic) NSMutableArray *reqModelMapping; // @synthesize reqModelMapping=_reqModelMapping;
@property(retain, nonatomic) NSMutableDictionary *generators; // @synthesize generators=_generators;
- (void).cxx_destruct;

@end

