//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMMessageAMP.h"

#import "TBIMWeexCardMessage.h"

@class NSString;

@interface TBIMMessageAMPWeexCard : TBIMMessageAMP <TBIMWeexCardMessage>
{
    struct CGSize _innerWeexViewSize;
}

@property(nonatomic) struct CGSize innerWeexViewSize; // @synthesize innerWeexViewSize=_innerWeexViewSize;
- (void)updateWeexViewSize:(struct CGSize)arg1;
- (struct CGSize)weexViewSize;
- (id)weexScripte;
- (id)wxDisplayType;
- (id)wxDisplayName;
- (id)wxOpt;
- (id)wxData;
- (id)wxTplUrl;
- (id)wxIdentity;
- (id)messageAMPWeexCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

