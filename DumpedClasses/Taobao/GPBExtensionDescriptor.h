//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GPBEnumDescriptor, NSString;

@interface GPBExtensionDescriptor : NSObject <NSCopying>
{
    struct GPBExtensionDescription *description_;
    CDUnion_88782d86 defaultValue_;
    Class containingMessageClass_;
}

@property(readonly, nonatomic) Class containingMessageClass; // @synthesize containingMessageClass=containingMessageClass_;
- (long long)compareByFieldNumber:(id)arg1;
@property(readonly, nonatomic) id defaultValue;
@property(readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
- (_Bool)isMap;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) int alternateWireType;
@property(readonly, nonatomic) int wireType;
@property(readonly, nonatomic) unsigned char dataType;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;
@property(readonly, nonatomic) NSString *singletonName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithExtensionDescription:(struct GPBExtensionDescription *)arg1;

@end

