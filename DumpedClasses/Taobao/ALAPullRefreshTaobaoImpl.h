//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALAPullRefreshProtocol.h"

@class NSString;

@interface ALAPullRefreshTaobaoImpl : NSObject <ALAPullRefreshProtocol>
{
}

- (void)refreshScrollViewDidEndDragging;
- (void)refreshScrollViewDidScroll;
- (_Bool)isAnimatingWithScrollView:(id)arg1;
- (void)stopAnimatingWithScrollView:(id)arg1;
- (void)addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1 withScrollView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

