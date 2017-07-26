//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UIImageView, UIView;

@interface TBFavDetailListAllCategoryTableViewCell : UITableViewCell
{
    _Bool _marked;
    UIColor *_highlightColor;
    UIImageView *_rightImageView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic, getter=isMarked) _Bool marked; // @synthesize marked=_marked;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void).cxx_destruct;
- (void)selection:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

