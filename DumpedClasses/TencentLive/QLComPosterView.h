//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLONAPosterView.h"

@interface QLComPosterView : QLONAPosterView
{
    unsigned long long _uiType;
}

@property(nonatomic) unsigned long long uiType; // @synthesize uiType=_uiType;
- (id)subTitleFontWithThumbStyle:(long long)arg1;
- (id)titleFontWithThumbStyle:(long long)arg1;
- (struct CGSize)getThumbSizeWithStyle:(long long)arg1;
- (struct CGRect)getThumbPosterRegionRectWithStyle:(long long)arg1;
- (void)layoutSubviews;

@end
