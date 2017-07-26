//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "huoyanContainerView.h"

@class TBSDKMTOPServer, UIView;

@interface huoyanActivityContainerView : huoyanContainerView
{
    _Bool _hasLoadActivityDetail;
    UIView *_detailView;
    TBSDKMTOPServer *_scanCodeServer;
}

@property(retain, nonatomic) TBSDKMTOPServer *scanCodeServer; // @synthesize scanCodeServer=_scanCodeServer;
@property(nonatomic) _Bool hasLoadActivityDetail; // @synthesize hasLoadActivityDetail=_hasLoadActivityDetail;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)retryLoadActivityDetail;
- (void)showActivityDetailResultView:(id)arg1;
- (void)showActivityDetailErrorView;
- (void)showActivityDetailLoadingView;
- (void)showActivityDetailEmptyView;
- (void)loadActivityDetail;
- (void)showActivityDetail;
- (void)buildBottomView;
- (void)buildDescView;
- (void)setup;
- (void)stopScanAnimation;
- (void)startScanAnimation;

@end

