//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView, UIView<MCOfficialHeaderViewProtocol>;

@protocol MCOfficialContentPresenterHeaderViewDelegate <NSObject>
- (void)viewWillDisAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (UIView<MCOfficialHeaderViewProtocol> *)getHeaderView;
@end

