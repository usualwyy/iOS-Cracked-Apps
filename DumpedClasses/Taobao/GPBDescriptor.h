//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GPBFileDescriptor, NSArray, NSString;

@interface GPBDescriptor : NSObject <NSCopying>
{
    NSArray *fields_;
    NSArray *oneofs_;
    unsigned int storageSize_;
    Class messageClass_;
    GPBFileDescriptor *file_;
    _Bool wireFormat_;
    unsigned int extensionRangesCount_;
    const struct GPBExtensionRange *extensionRanges_;
}

+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 file:(id)arg3 fields:(void *)arg4 fieldCount:(unsigned int)arg5 storageSize:(unsigned int)arg6 flags:(unsigned int)arg7;
@property(readonly, nonatomic, getter=isWireFormat) _Bool wireFormat; // @synthesize wireFormat=wireFormat_;
@property(readonly, nonatomic) GPBFileDescriptor *file; // @synthesize file=file_;
@property(readonly, nonatomic) unsigned int extensionRangesCount; // @synthesize extensionRangesCount=extensionRangesCount_;
@property(readonly, nonatomic) const struct GPBExtensionRange *extensionRanges; // @synthesize extensionRanges=extensionRanges_;
@property(readonly, nonatomic) NSArray *oneofs; // @synthesize oneofs=oneofs_;
@property(readonly, nonatomic) NSArray *fields; // @synthesize fields=fields_;
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=messageClass_;
- (id)oneofWithName:(id)arg1;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)setupExtensionRanges:(const struct GPBExtensionRange *)arg1 count:(int)arg2;
- (void)setupExtraTextInfo:(const char *)arg1;
- (void)setupOneofs:(const char **)arg1 count:(unsigned int)arg2 firstHasIndex:(int)arg3;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 file:(id)arg2 fields:(id)arg3 storageSize:(unsigned int)arg4 wireFormat:(_Bool)arg5;

@end

