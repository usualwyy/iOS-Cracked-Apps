//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WindVaneUIWbeViewDelegate.h"

@class NSString, WVWebView;

@interface TBPSWVPopLayer : UIView <WindVaneUIWbeViewDelegate>
{
    double _thresholdAlpha;
    WVWebView *_webView;
}

@property(readonly, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) double thresholdAlpha; // @synthesize thresholdAlpha=_thresholdAlpha;
- (void).cxx_destruct;
- (double)alphaOfPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)loadURL:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

