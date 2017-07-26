//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UIImage, UITableView, UIView;

@protocol MCChatPageDisplayViewProtocol <NSObject>
@property(retain, nonatomic) UITableView *chatTableView;
@property(nonatomic) __weak id <MCChatPageDisplayViewDelegate> delegate;
- (void)deleteRowAtIndex:(unsigned long long)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)reloadRowAtIndex:(unsigned long long)arg1;
- (void)insertRowAtIndex:(unsigned long long)arg1 needScrollToBottom:(_Bool)arg2;
- (void)reloadDataWithScrollStyle:(unsigned long long)arg1;
- (void)scrollToMessageTableViewBottom:(_Bool)arg1;
- (void)showBackImage:(UIImage *)arg1;
- (void)scrollToRowAtIndexPath:(NSIndexPath *)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToContentOffset:(struct CGPoint)arg1 withAnimation:(_Bool)arg2;
- (void)reloadData;
- (void)hideFloatTip;
- (void)showFloatTip:(NSString *)arg1 clickSelect:(SEL)arg2;
- (void)setTableViewHeaderView:(UIView *)arg1;
- (void)setTableViewSectionHeaderView:(UIView *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id <MCChatPageDisplayViewDelegate>)arg2;
@end

