//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AliTradeSKUViewDelegate.h"

@class AliDetailHotSpotAnswerService, AliDetailModel, AliDetailNewAreaChooseView, AliDetailRequest, AliTradeComponentsSelectionControl, AliTradeH5SKUView, AliTradeSKUAreaSelectionControl, AliTradeSKUHeadView, AliTradeSKUSelectionControl, AliTradeSKUStagePayControl, AliTradeSkuEngine, AliTradeTmallServiceSelectionControl, CSLinearLayoutView, NSDictionary, NSMutableArray, NSString, PAStepperDetail, TBDetailUIButton, UIImageView, UILabel;

@interface AliTradeSKUView : UIView <AliTradeSKUViewDelegate>
{
    _Bool _isReverseTrade;
    _Bool _isCombinationSingleItems;
    _Bool _areaChooserViewCreated;
    AliDetailModel *_detailModel;
    unsigned long long _sourceType;
    id <AliTradeSKUViewDelegate> _delegate;
    unsigned long long _quantity;
    AliTradeSkuEngine *_skuEngine;
    NSDictionary *_queryParams;
    AliDetailRequest *_beforeCartApiRequest;
    AliDetailRequest *_beforeBuyApiRequest;
    double _skuOffset;
    NSString *_eventToken;
    AliTradeSKUHeadView *_headView;
    NSMutableArray *_popTips;
    PAStepperDetail *_numberStepper;
    UILabel *_buyLimitLabel;
    AliTradeSKUStagePayControl *_stagePaySelectionControl;
    NSDictionary *_reverseTradeParams;
    NSString *_leftBtnTitle;
    AliDetailHotSpotAnswerService *_answerService;
    AliTradeSKUSelectionControl *_skuSelectionControl;
    AliTradeSKUAreaSelectionControl *_areaSelectionControl;
    AliTradeTmallServiceSelectionControl *_tmallServiceSelectionControl;
    AliTradeComponentsSelectionControl *_componentsSelectionControl;
    AliDetailNewAreaChooseView *_areaChooserView;
    UILabel *_buyTitleLabel;
    UIView *_buyNumberStepView;
    UIView *_buttonDivisionLine;
    UIImageView *_addToCartSmallImage;
    UIView *_bottomView;
    TBDetailUIButton *_leftBtn;
    TBDetailUIButton *_rightBtn;
    CSLinearLayoutView *_skuContainer;
    AliTradeH5SKUView *_h5SkuView;
    NSMutableArray *_needRemovedViews;
}

+ (void)setButton:(id)arg1 withStyle:(id)arg2;
+ (id)skuStyleModel;
@property(retain, nonatomic) NSMutableArray *needRemovedViews; // @synthesize needRemovedViews=_needRemovedViews;
@property(nonatomic) _Bool areaChooserViewCreated; // @synthesize areaChooserViewCreated=_areaChooserViewCreated;
@property(retain, nonatomic) AliTradeH5SKUView *h5SkuView; // @synthesize h5SkuView=_h5SkuView;
@property(retain, nonatomic) CSLinearLayoutView *skuContainer; // @synthesize skuContainer=_skuContainer;
@property(retain, nonatomic) TBDetailUIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) TBDetailUIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *addToCartSmallImage; // @synthesize addToCartSmallImage=_addToCartSmallImage;
@property(retain, nonatomic) UIView *buttonDivisionLine; // @synthesize buttonDivisionLine=_buttonDivisionLine;
@property(retain, nonatomic) UIView *buyNumberStepView; // @synthesize buyNumberStepView=_buyNumberStepView;
@property(retain, nonatomic) UILabel *buyTitleLabel; // @synthesize buyTitleLabel=_buyTitleLabel;
@property(retain, nonatomic) AliDetailNewAreaChooseView *areaChooserView; // @synthesize areaChooserView=_areaChooserView;
@property(retain, nonatomic) AliTradeComponentsSelectionControl *componentsSelectionControl; // @synthesize componentsSelectionControl=_componentsSelectionControl;
@property(retain, nonatomic) AliTradeTmallServiceSelectionControl *tmallServiceSelectionControl; // @synthesize tmallServiceSelectionControl=_tmallServiceSelectionControl;
@property(retain, nonatomic) AliTradeSKUAreaSelectionControl *areaSelectionControl; // @synthesize areaSelectionControl=_areaSelectionControl;
@property(retain, nonatomic) AliTradeSKUSelectionControl *skuSelectionControl; // @synthesize skuSelectionControl=_skuSelectionControl;
@property(retain, nonatomic) AliDetailHotSpotAnswerService *answerService; // @synthesize answerService=_answerService;
@property(retain, nonatomic) NSString *leftBtnTitle; // @synthesize leftBtnTitle=_leftBtnTitle;
@property(nonatomic) _Bool isCombinationSingleItems; // @synthesize isCombinationSingleItems=_isCombinationSingleItems;
@property(nonatomic) _Bool isReverseTrade; // @synthesize isReverseTrade=_isReverseTrade;
@property(retain, nonatomic) NSDictionary *reverseTradeParams; // @synthesize reverseTradeParams=_reverseTradeParams;
@property(retain, nonatomic) AliTradeSKUStagePayControl *stagePaySelectionControl; // @synthesize stagePaySelectionControl=_stagePaySelectionControl;
@property(retain, nonatomic) UILabel *buyLimitLabel; // @synthesize buyLimitLabel=_buyLimitLabel;
@property(retain, nonatomic) PAStepperDetail *numberStepper; // @synthesize numberStepper=_numberStepper;
@property(retain, nonatomic) NSMutableArray *popTips; // @synthesize popTips=_popTips;
@property(retain, nonatomic) AliTradeSKUHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) double skuOffset; // @synthesize skuOffset=_skuOffset;
@property(retain, nonatomic) AliDetailRequest *beforeBuyApiRequest; // @synthesize beforeBuyApiRequest=_beforeBuyApiRequest;
@property(retain, nonatomic) AliDetailRequest *beforeCartApiRequest; // @synthesize beforeCartApiRequest=_beforeCartApiRequest;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) AliTradeSkuEngine *skuEngine; // @synthesize skuEngine=_skuEngine;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) __weak id <AliTradeSKUViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configAction:(unsigned long long)arg1 button:(id)arg2;
- (_Bool)configHotSpotBottomButtons;
- (void)defaultConfigBottomButtons;
- (void)configBottomView;
- (void)hideSpecialWithRemovedEntrance;
- (void)hideSpecialEntrance;
- (void)reloadData;
- (void)handleReverseTradeParams;
- (void)showMACColorSelectView:(id)arg1 withPid:(id)arg2;
- (void)clearSelectedArea;
- (void)setEnabledChooseArea:(_Bool)arg1;
- (void)hideAreaChooserView;
- (void)showAreaChooserView:(id)arg1 vc:(id)arg2;
- (void)refreshAreaChooserView:(id)arg1 vc:(id)arg2;
- (void)insertCustomView:(id)arg1 afterViewType:(unsigned long long)arg2;
- (void)insertCustomView:(id)arg1 beforeViewType:(unsigned long long)arg2;
- (void)removeViewType:(unsigned long long)arg1;
- (void)addCustomView:(id)arg1;
- (void)triggerBuyBtn:(id)arg1;
- (void)triggerCartBtn:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (void)createH5SkuViewWithFrame:(struct CGRect)arg1 detailModel:(id)arg2 fromSource:(unsigned long long)arg3 withQueryParams:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2 fromSource:(unsigned long long)arg3 withQueryParams:(id)arg4 h5SkuEnabled:(_Bool)arg5;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2 fromSource:(unsigned long long)arg3 withQueryParams:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2 fromSource:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)buildOrderParams;
- (void)postIsvCustomEvent:(id)arg1;
- (void)doBuyAction:(id)arg1;
- (void)orderConfirm:(id)arg1;
- (void)orderConfirm;
- (void)gotoOrderConfirm;
- (void)setSkuComponentValue:(id)arg1 components:(id)arg2;
- (void)addItemToCart:(id)arg1;
- (void)addToShopCartAnimationFinished:(id)arg1;
- (id)imageViewFromSkuHeaderView;
- (_Bool)shouldPerformAnimation;
- (id)imageViewFromDetailHeaderView;
- (void)performAnimationWithImageView:(id)arg1 scaleValue:(double)arg2 endPoint:(struct CGPoint)arg3;
- (void)addToShopCartAnimation:(id)arg1;
- (void)gotoAddCart;
- (_Bool)isSKUSelected;
- (_Bool)checkSKUSelect;
- (_Bool)checkContractInfoSelect;
- (void)areaSelectionClicked:(id)arg1;
- (void)saveSKUSelect:(id)arg1;
- (void)gotoAnswerHotQuestion:(id)arg1;
- (void)closeBtnClicked:(id)arg1;
- (void)cartBagBtnClick:(id)arg1;
- (void)buyNowBtnClick:(id)arg1;
- (void)cartAddBtnClick:(id)arg1;
- (long long)getStoreCount;
- (long long)getLimitCount;
- (id)getLimitText;
- (long long)getStepValue;
- (long long)getMaxLimitCount;
- (id)getMultipleLimitText;
- (void)showAlert:(int)arg1;
- (void)setLimitText;
- (void)setStepperValue;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)updateSkuBuyNumberArea;
- (_Bool)isSelectSku;
- (void)tmallServicesChanged:(id)arg1;
- (void)skuPropChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

