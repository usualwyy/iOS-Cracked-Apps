//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableIndexSet, NSString, UIButton, UIColor, UIImageView, UILabel, UITableView;

@interface TBFavDetailPopupListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *contentView;
    double _arrowPosition;
    struct CGRect _bgFrame;
    UIButton *newCategoryButton;
    UIImageView *rightImageView;
    UILabel *newCategoryLabel;
    _Bool _closeAnimated;
    _Bool _isMultipleSelection;
    id <TBFavDetailPopupListViewDelegate> _delegate;
    NSMutableIndexSet *_selectedIndexes;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_navigationBarView;
    UIView *_separatorLineView;
    UIColor *_cellHighlightColor;
    UIView *_createListView;
    UIButton *_createButton;
    UILabel *_createLabel;
    UIImageView *_arrowImageView;
    UIView *_separator2LineView;
    UITableView *_tableView;
    NSArray *_arrayList;
    NSString *_navigationBarTitle;
    NSString *_createLabelTitle;
}

@property(retain, nonatomic) NSString *createLabelTitle; // @synthesize createLabelTitle=_createLabelTitle;
@property(nonatomic) _Bool isMultipleSelection; // @synthesize isMultipleSelection=_isMultipleSelection;
@property(retain, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) NSArray *arrayList; // @synthesize arrayList=_arrayList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *separator2LineView; // @synthesize separator2LineView=_separator2LineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *createLabel; // @synthesize createLabel=_createLabel;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UIView *createListView; // @synthesize createListView=_createListView;
@property(retain, nonatomic) UIColor *cellHighlightColor; // @synthesize cellHighlightColor=_cellHighlightColor;
@property(nonatomic) _Bool closeAnimated; // @synthesize closeAnimated=_closeAnimated;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableIndexSet *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(nonatomic) __weak id <TBFavDetailPopupListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawBackground:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)digPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (id)strengImage:(id)arg1;
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 list:(id)arg2 selectedIndexes:(id)arg3 point:(struct CGPoint)arg4 size:(struct CGSize)arg5 multipleSelection:(_Bool)arg6 disableBackgroundInteraction:(_Bool)arg7;
- (id)initWithTitle:(id)arg1 list:(id)arg2 selectedIndexes:(id)arg3 rect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

