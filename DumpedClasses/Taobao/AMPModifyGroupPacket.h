//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPModifyGroupPacket : AMPNetPacket
{
    _Bool _isPublic;
    NSString *_cCode;
    NSString *_name;
    NSString *_notice;
    NSString *_headPic;
}

@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(copy, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *cCode; // @synthesize cCode=_cCode;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithInfo:(id)arg1 public:(_Bool)arg2;
- (id)initWithInfo:(id)arg1 headPic:(id)arg2;
- (id)initWithInfo:(id)arg1 notice:(id)arg2;
- (id)initWithInfo:(id)arg1 name:(id)arg2;

@end

