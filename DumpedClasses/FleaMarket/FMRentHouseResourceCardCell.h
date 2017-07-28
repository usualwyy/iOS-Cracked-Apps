//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class FMImageView, NSString, UILabel, UIView;

@interface FMRentHouseResourceCardCell : UITableViewCell <FMComponentCellProtocol>
{
    FMImageView *_image;
    UILabel *_title;
    UILabel *_desc;
    UIView *_line;
    UILabel *_price;
    UILabel *_distance;
    UIView *_distanceBg;
    UIView *_tagViewBg;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *tagViewBg; // @synthesize tagViewBg=_tagViewBg;
@property(retain, nonatomic) UIView *distanceBg; // @synthesize distanceBg=_distanceBg;
@property(retain, nonatomic) UILabel *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) FMImageView *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)layoutTagView:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)layout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
