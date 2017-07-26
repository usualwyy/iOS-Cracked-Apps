//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBFavContentFilterViewControllerDelegate.h"
#import "TBFavoriteContentLinkCellFavoriteDelegate.h"

@class NSString, TBFavContentFilterViewController, TBFavService, TBFavoriteContentTableView, TBFavoritePublicService, UIView;

@interface TBFavoriteContentViewController : TBViewController <TBFavoriteContentLinkCellFavoriteDelegate, TBFavContentFilterViewControllerDelegate>
{
    NSString *_queryBizID;
    TBFavoriteContentTableView *_tableView;
    TBFavoritePublicService *_contentService;
    TBFavService *_favService;
    long long _currentContentPage;
    UIView *_titleView;
    TBFavContentFilterViewController *_filterViewController;
}

@property(retain, nonatomic) TBFavContentFilterViewController *filterViewController; // @synthesize filterViewController=_filterViewController;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long currentContentPage; // @synthesize currentContentPage=_currentContentPage;
@property(retain, nonatomic) TBFavService *favService; // @synthesize favService=_favService;
@property(retain, nonatomic) TBFavoritePublicService *contentService; // @synthesize contentService=_contentService;
@property(retain, nonatomic) TBFavoriteContentTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *queryBizID; // @synthesize queryBizID=_queryBizID;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didSelecteBiz:(id)arg2 atIndex:(long long)arg3 sameAsBefore:(_Bool)arg4;
- (void)tableView:(id)arg1 recommendContentFirstTimeExposedAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 recommendContentClickedForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 failedToDeletedFavoriteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeletedFavoriteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDeletFavoriteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 failedToAddedToFavoriteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didAddedToFavoriteForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willAddToFavoriteForRowAtIndexPath:(id)arg2;
- (void)loadDataAfterRequestFailure;
- (void)hideErrorView;
- (void)showErrorViewWithSelector:(SEL)arg1 error:(id)arg2;
- (id)customButtonWithTitle:(id)arg1 targetSelector:(SEL)arg2;
- (void)didTapRightButton;
- (void)didTapLeftButton;
- (id)tbNavigationController;
- (id)tbNavigationItem;
- (void)loadFavContentsByPageNo:(long long)arg1 bizID:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

