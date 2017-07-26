//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLSmallComplexPanelViewDelegate.h"

@class CATextLayer, NSString, QLJCELiveBannerItemData, QLSmallComplexPanelView, QLThemeListPanel, UIButton;

@interface QLLiveV3TopBannerView : UIView <QLSmallComplexPanelViewDelegate>
{
    _Bool _bFavorite;
    _Bool _bChatRoom;
    id <QLLliveV3LivingDetailDataSouce> _dataSource;
    id _delegate;
    QLJCELiveBannerItemData *_bannerObj;
    CATextLayer *_titleLbl;
    CATextLayer *_subtitleLbl;
    QLThemeListPanel *_actorListPanel;
    UIButton *_moreBtn;
    QLSmallComplexPanelView *_moreComplexPanel;
    struct CGSize _actorListSize;
}

+ (double)getHeightWithObject:(id)arg1;
@property(retain, nonatomic) QLSmallComplexPanelView *moreComplexPanel; // @synthesize moreComplexPanel=_moreComplexPanel;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(nonatomic) _Bool bChatRoom; // @synthesize bChatRoom=_bChatRoom;
@property(nonatomic) _Bool bFavorite; // @synthesize bFavorite=_bFavorite;
@property(nonatomic) struct CGSize actorListSize; // @synthesize actorListSize=_actorListSize;
@property(retain, nonatomic) QLThemeListPanel *actorListPanel; // @synthesize actorListPanel=_actorListPanel;
@property(retain, nonatomic) CATextLayer *subtitleLbl; // @synthesize subtitleLbl=_subtitleLbl;
@property(retain, nonatomic) CATextLayer *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) QLJCELiveBannerItemData *bannerObj; // @synthesize bannerObj=_bannerObj;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QLLliveV3LivingDetailDataSouce> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dismissComplexPanelView;
- (void)didChatRoomBtnClicked;
- (void)didShareBtnClicked;
- (void)didFavoriteBtnClicked:(_Bool)arg1;
- (void)createComplexPanelView;
- (_Bool)showingComplexPanelView;
- (void)moreBtnClicked:(id)arg1;
- (void)setLiveChatRoomEnable:(_Bool)arg1;
- (void)setLiveVideoFavorite:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
