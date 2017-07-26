//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionHandler.h"

@class NSString;

@interface TBSearchURLResolver : NSObject <TBURLActionHandler>
{
}

+ (id)searchHost;
- (_Bool)isSearchDoorURL:(id)arg1;
- (_Bool)isShopSearchURL:(id)arg1;
- (_Bool)isSearchURL:(id)arg1;
- (_Bool)isSearchHost:(id)arg1;
- (_Bool)isInnerSearchDoorURL:(id)arg1;
- (_Bool)isInshopSearchURL:(id)arg1;
- (_Bool)isInshopSearchDoorURL:(id)arg1;
- (_Bool)isInnerShopSearchURL:(id)arg1;
- (_Bool)isInnerSearchURL:(id)arg1;
- (id)getNativeSrpResponseWithRequest:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

