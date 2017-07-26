//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class DWContext, DWRecommendRefreshView, NSMutableArray, NSString;

@interface DWRecommendView : UIScrollView <UIScrollViewDelegate>
{
    id <DWRecommendViewDelegate> _recommendDelegate;
    DWContext *_context;
    DWRecommendRefreshView *_refreshView;
    NSMutableArray *_cellAry;
}

@property(retain, nonatomic) NSMutableArray *cellAry; // @synthesize cellAry=_cellAry;
@property(retain, nonatomic) DWRecommendRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <DWRecommendViewDelegate> recommendDelegate; // @synthesize recommendDelegate=_recommendDelegate;
- (void).cxx_destruct;
- (void)controlFirstCellAnimate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeAllSubViews;
- (void)refresh:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)scrollToFirst;
- (void)refreshWithRecommendItem:(id)arg1;
- (void)willEnterForground;
- (void)resignActive;
- (void)becomeActive;
- (void)addListener;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

