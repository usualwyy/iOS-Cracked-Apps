//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBLiveGlobalBizContext : NSObject
{
    _Bool _isFollow;
    _Bool _isSubscribeAccount;
    _Bool _isV;
    _Bool _isTaoKe;
    _Bool _isDaren;
    _Bool _isReplayView;
    _Bool _isNormalCard;
    _Bool _isStaticLike;
    _Bool _isNewFollowCard;
    NSString *_fromSPMURL;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isNewFollowCard; // @synthesize isNewFollowCard=_isNewFollowCard;
@property(nonatomic) _Bool isStaticLike; // @synthesize isStaticLike=_isStaticLike;
@property(nonatomic) _Bool isNormalCard; // @synthesize isNormalCard=_isNormalCard;
@property(nonatomic) _Bool isReplayView; // @synthesize isReplayView=_isReplayView;
@property(copy, nonatomic) NSString *fromSPMURL; // @synthesize fromSPMURL=_fromSPMURL;
@property(nonatomic) _Bool isDaren; // @synthesize isDaren=_isDaren;
@property(nonatomic) _Bool isTaoKe; // @synthesize isTaoKe=_isTaoKe;
@property(nonatomic) _Bool isV; // @synthesize isV=_isV;
@property(nonatomic) _Bool isSubscribeAccount; // @synthesize isSubscribeAccount=_isSubscribeAccount;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;

@end

