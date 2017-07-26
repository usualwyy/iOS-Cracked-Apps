//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

@class NSMutableArray, NSMutableDictionary, WeAppBasicBannerView;

@interface WeAppBannerView : WeAppComponent
{
    _Bool _autoScrollEnabled;
    _Bool _isPointHide;
    WeAppBasicBannerView *_bannerView;
    NSMutableArray *_bannerItems;
    NSMutableDictionary *_userTrack;
}

@property(retain, nonatomic) NSMutableDictionary *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) NSMutableArray *bannerItems; // @synthesize bannerItems=_bannerItems;
@property(nonatomic) _Bool isPointHide; // @synthesize isPointHide=_isPointHide;
@property(nonatomic) _Bool autoScrollEnabled; // @synthesize autoScrollEnabled=_autoScrollEnabled;
@property(retain, nonatomic) WeAppBasicBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)bannerCloseClicked:(id)arg1;
- (void)BannerView:(id)arg1 didSelectPageWithURL:(id)arg2;
- (void)dealloc;
- (void)updateFrame;
- (id)createView;
- (void)refreshData;
- (void)setupDataValue;
- (void)setupDataValueAndConditon;
- (void)setCss;

@end

