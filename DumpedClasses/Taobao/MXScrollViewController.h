//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MXScrollView, UIViewController<MXScrollViewDelegate>;

@interface MXScrollViewController : UIViewController
{
    MXScrollView *_scrollView;
    UIViewController<MXScrollViewDelegate> *_childViewController;
}

@property(retain, nonatomic) UIViewController<MXScrollViewDelegate> *childViewController; // @synthesize childViewController=_childViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) MXScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)layoutChildViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;

@end

