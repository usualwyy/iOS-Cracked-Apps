//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableArray;

@interface UIViewController (ContainerAdapter)
- (_Bool)isPresentedVC;
@property(readonly, nonatomic) NSMutableArray *tbChildViewController;
@property(nonatomic) UIViewController *tbSuperViewController;
- (void)tbChildViewControllerViewDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)tbChildViewControllerViewWillDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)tbChildViewControllerViewDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)tbChildViewControllerViewWillAppear:(id)arg1 animated:(_Bool)arg2;
- (void)tbRemoveChildViewController:(id)arg1;
- (void)tbAddChildViewController:(id)arg1;
@end

