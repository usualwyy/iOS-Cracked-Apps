//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMSubscribeMvRequest : NMBaseRequest
{
    _Bool _isSubscribe;
    NSString *_mvId;
    id _mv;
}

@property(retain, nonatomic) id mv; // @synthesize mv=_mv;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId=_mvId;
- (void).cxx_destruct;
- (void)start;
- (id)initWithMvId:(id)arg1 isSubscribe:(_Bool)arg2;

@end
