//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (TBHomePullToRefresh)
- (id)tb_home_fileJSONAnimationWithName:(id)arg1;
- (void)tb_home_setAnimation:(unsigned long long)arg1;
- (void)tb_home_setAnimationUrl:(id)arg1 forState:(int)arg2;
- (id)tb_home_refreshView;
- (int)tb_home_state;
- (_Bool)tb_home_needDegrade;
- (void)tb_home_stopPullToRefresh;
- (void)tb_home_triggerPullToRefresh;
- (void)tb_home_addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;
- (void)tb_home_setTriggerOffset:(double)arg1;
@property(readonly, nonatomic) _Bool tb_home_degrade;
- (void)setTb_home_currentAnimation:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tb_home_currentAnimation;
@property(nonatomic) _Bool tb_home_hasBackground;
- (void)setTb_home_degrade:(_Bool)arg1;
- (void)tb_home_loadConfig;
@end

