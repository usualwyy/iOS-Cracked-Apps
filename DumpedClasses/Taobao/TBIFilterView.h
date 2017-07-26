//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBIImageFilter, UIImageView, UILabel;

@interface TBIFilterView : UIView
{
    UIImageView *thumbView;
    UILabel *title;
    TBIImageFilter *_filter;
    id <TBIFilterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBIFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)getImageFilter;
- (void)setImageFilter:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

