//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIColor, YSURLAction;

@interface HLBaseViewController : UIViewController
{
    UIColor *_backgroundColor;
    YSURLAction *_action;
    id _hlVCDelegate;
    id <HLRootViewControllerDelegate> _hlRootVCDelegate;
}

@property(nonatomic) __weak id <HLRootViewControllerDelegate> hlRootVCDelegate; // @synthesize hlRootVCDelegate=_hlRootVCDelegate;
@property(nonatomic) __weak id hlVCDelegate; // @synthesize hlVCDelegate=_hlVCDelegate;
@property(retain, nonatomic) YSURLAction *action; // @synthesize action=_action;
@property(nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)onWillPopViewController;
- (id)onPoppedParams;
- (void)onLeftNaviBtnHandler:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)callPopBackDelegate;
- (void)setShadowOfNavigationBar:(_Bool)arg1;
- (void)restoreNavigationBar;
- (void)showNavigationBar:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showNavigationBar:(_Bool)arg1;
- (void)restoreNavigationBarColor;
- (void)setNavigationBarColor:(id)arg1;
- (void)restoreNavigationBarTranscluent;
- (void)setNavigationBarTranscluent:(_Bool)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

