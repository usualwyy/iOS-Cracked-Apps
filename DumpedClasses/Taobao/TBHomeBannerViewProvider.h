//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBHomeCommonViewProvider.h"

@class TBHomePageFirstBannerView;

@interface TBHomeBannerViewProvider : TBHomeCommonViewProvider
{
    TBHomePageFirstBannerView *_firstBannerView;
}

@property(retain, nonatomic) TBHomePageFirstBannerView *firstBannerView; // @synthesize firstBannerView=_firstBannerView;
- (void).cxx_destruct;
- (struct CGSize)renderSizeForHomeSection:(id)arg1;
- (id)provideViewForHomeSection:(id)arg1;
- (_Bool)canProvideViewForHomeSection:(id)arg1;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)bootImageDidFinish:(id)arg1;
- (void)dealloc;
- (id)init;

@end

