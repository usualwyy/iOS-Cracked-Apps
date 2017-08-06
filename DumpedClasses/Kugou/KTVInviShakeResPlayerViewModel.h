//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSString;

@interface KTVInviShakeResPlayerViewModel : KTVObjectModel
{
    unsigned int _resShakeType;
    unsigned int _source;
    int _inviteNum;
    int _evilRejectNum;
    KTVPlayerBaseInfo *_playerBase;
    NSString *_locationStr;
    long long _opusId;
    NSString *_opusName;
    NSString *_opusHash;
    NSString *_inviteNumStr;
    NSString *_evilRejectNumStr;
    struct CLLocationCoordinate2D _location;
    struct CLLocationCoordinate2D _lbsCoordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D lbsCoordinate; // @synthesize lbsCoordinate=_lbsCoordinate;
@property(readonly, copy, nonatomic) NSString *evilRejectNumStr; // @synthesize evilRejectNumStr=_evilRejectNumStr;
@property(nonatomic) int evilRejectNum; // @synthesize evilRejectNum=_evilRejectNum;
@property(readonly, copy, nonatomic) NSString *inviteNumStr; // @synthesize inviteNumStr=_inviteNumStr;
@property(nonatomic) int inviteNum; // @synthesize inviteNum=_inviteNum;
@property(copy, nonatomic) NSString *opusHash; // @synthesize opusHash=_opusHash;
@property(copy, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(readonly, copy, nonatomic) NSString *locationStr; // @synthesize locationStr=_locationStr;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase; // @synthesize playerBase=_playerBase;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int resShakeType; // @synthesize resShakeType=_resShakeType;
- (void).cxx_destruct;
- (void)checkAndGetLBSInfoSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *history_NumsStr;
@property(readonly, copy, nonatomic) NSString *history_OpusStr;
- (void)resetProperties;
- (id)init;
- (void)dealloc;

@end
