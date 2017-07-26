//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer, TBLiveGiftAnimationView, TBLiveGiftModel;

@interface TBLiveRewardMgrView : UIView
{
    NSTimer *_timer;
    _Bool isRunning;
    _Bool _isLandscape;
    long long _showViewCount;
    TBLiveGiftAnimationView *_aniGiftView;
    TBLiveGiftModel *_giftModel;
    NSMutableArray *_showViewArray;
}

@property(retain, nonatomic) NSMutableArray *showViewArray; // @synthesize showViewArray=_showViewArray;
@property(retain, nonatomic) TBLiveGiftModel *giftModel; // @synthesize giftModel=_giftModel;
@property(retain, nonatomic) TBLiveGiftAnimationView *aniGiftView; // @synthesize aniGiftView=_aniGiftView;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) long long showViewCount; // @synthesize showViewCount=_showViewCount;
- (void).cxx_destruct;
- (void)insertLiveRewardMsg:(id)arg1 useAnimation:(_Bool)arg2;
- (void)clearAllGiftMessages;
- (void)stopShowGiftMessages;
- (void)startShowGiftMessages;
- (void)timerFire;
- (void)initViewWithGiftModel:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithFrame:(struct CGRect)arg1;

@end

