//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface FCVisitCell : UITableViewCell
{
    UIImageView *_headView;
    UILabel *_genderLabel;
    UILabel *_nameLabel;
    UILabel *_tagLabel;
    UIView *_divider;
    UIView *_shadowUp;
    UIView *_shadowDown;
}

- (void).cxx_destruct;
- (void)setTags:(id)arg1;
- (void)setName:(id)arg1;
- (void)setGenderIconName:(id)arg1;
- (void)setGenderColor:(id)arg1;
- (void)setIslastCell:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

