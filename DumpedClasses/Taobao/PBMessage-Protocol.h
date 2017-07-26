//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSOutputStream, NSString, PBCodedOutputStream, PBUnknownFieldSet;

@protocol PBMessage <NSObject>
- (NSString *)description;
- (id <PBMessageBuilder>)toBuilder;
- (id <PBMessageBuilder>)builder;
- (NSData *)data;
- (void)writeToOutputStream:(NSOutputStream *)arg1;
- (void)writeToCodedOutputStream:(PBCodedOutputStream *)arg1;
- (_Bool)isInitialized;
- (int)serializedSize;
- (PBUnknownFieldSet *)unknownFields;
- (id <PBMessage>)defaultInstance;
@end

