//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AlibcAuthMtopRequest : NSObject
{
    id <AlibcFCMtopProtocol> _request;
    NSDictionary *_origQuery;
}

@property(retain, nonatomic) NSDictionary *origQuery; // @synthesize origQuery=_origQuery;
@property(retain, nonatomic) id <AlibcFCMtopProtocol> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dealloc;
- (id)params;
- (id)netErrorData;
- (void)requestWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

