//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLFantuanFeedRightMediaCell.h"

@class QLSImageView;

@interface QLFantuanFeedSingleImageCell : QLFantuanFeedRightMediaCell
{
    QLSImageView *_posterView;
}

@property(retain, nonatomic) QLSImageView *posterView; // @synthesize posterView=_posterView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didTapPosterView;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
