//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UIPickerView, UIView;

@interface FFPickerViewController : UIViewController
{
    id <UIPickerViewDelegate> _delegate;
    id <UIPickerViewDataSource> _dataSource;
    UIPickerView *_pickerView;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_topBarView;
    double _pickerViewHeight;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double pickerViewHeight; // @synthesize pickerViewHeight=_pickerViewHeight;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <UIPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <UIPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_transitionAnimation:(_Bool)arg1;
- (void)doAction:(id)arg1;
- (void)setupViews;
- (void)showInView:(id)arg1;
- (void)show;
- (void)viewDidLoad;

@end

