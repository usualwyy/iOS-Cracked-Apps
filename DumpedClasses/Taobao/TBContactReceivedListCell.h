//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBContactReceivedListCellContentView, TBContactReceivedTableView, UIButton, UIPanGestureRecognizer, UIView;

@interface TBContactReceivedListCell : UITableViewCell
{
    _Bool _isSent;
    _Bool _tbEditing;
    _Bool _tbWillEditing;
    TBContactReceivedTableView *_contactRecivedTableView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_backgroundWhileView;
    TBContactReceivedListCellContentView *_cellContentView;
    UIView *_rightMenuView;
    UIButton *_deleteButton;
    UIPanGestureRecognizer *_tbPanGesRecognizer;
    struct CGPoint _currentTouchPoint;
    struct CGPoint _beginTouchPoint;
}

+ (long long)contactReceivedListCellHeightWithShareMessageModel:(id)arg1;
@property(nonatomic) struct CGPoint beginTouchPoint; // @synthesize beginTouchPoint=_beginTouchPoint;
@property(nonatomic) struct CGPoint currentTouchPoint; // @synthesize currentTouchPoint=_currentTouchPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *tbPanGesRecognizer; // @synthesize tbPanGesRecognizer=_tbPanGesRecognizer;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIView *rightMenuView; // @synthesize rightMenuView=_rightMenuView;
@property(retain, nonatomic) TBContactReceivedListCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) UIView *backgroundWhileView; // @synthesize backgroundWhileView=_backgroundWhileView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) __weak TBContactReceivedTableView *contactRecivedTableView; // @synthesize contactRecivedTableView=_contactRecivedTableView;
@property(nonatomic, getter=istbWillEditing) _Bool tbWillEditing; // @synthesize tbWillEditing=_tbWillEditing;
@property(nonatomic, getter=istbEditing) _Bool tbEditing; // @synthesize tbEditing=_tbEditing;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
- (void).cxx_destruct;
- (id)currentShareMessageModel;
- (void)hideFirstCellTopLineView;
- (void)updateContactReceivedListCellHeightWithShareMessageModel:(id)arg1;
- (void)updateWithShareMessageModel:(id)arg1 delegate:(id)arg2;
- (void)hideRightMenuView;
- (void)showRightMenuView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapDeleteButton:(id)arg1;
- (void)panGestureRecognizer:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

