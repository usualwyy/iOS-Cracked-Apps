//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveWeexOverlayView.h"

@class TBLiveLivingStatusView, TBLiveRoomContext;

@interface TBLiveLandscapeMiddleOverlayView : TBLiveWeexOverlayView
{
    TBLiveLivingStatusView *_statusView;
    TBLiveRoomContext *_roomContext;
}

@property(retain, nonatomic) TBLiveRoomContext *roomContext; // @synthesize roomContext=_roomContext;
@property(retain, nonatomic) TBLiveLivingStatusView *statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
- (void)broadCasterNomalQuitLivingWithQuitView:(_Bool)arg1;
- (void)setupStatusView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshWithData:(id)arg1;
- (void)setupSubViews:(_Bool)arg1;
- (void)dealloc;

@end

