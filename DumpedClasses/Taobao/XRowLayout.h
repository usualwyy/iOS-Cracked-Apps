//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XBaseLayout.h"

@interface XRowLayout : XBaseLayout
{
    _Bool _horizontal;
    _Bool _fill;
    _Bool _just;
    _Bool _autoWrap;
    double _horizontalSpace;
    double _verticalSpace;
    double _minRowHeight;
    double _maxRowHeight;
}

@property(nonatomic) double maxRowHeight; // @synthesize maxRowHeight=_maxRowHeight;
@property(nonatomic) double minRowHeight; // @synthesize minRowHeight=_minRowHeight;
@property(nonatomic) double verticalSpace; // @synthesize verticalSpace=_verticalSpace;
@property(nonatomic) double horizontalSpace; // @synthesize horizontalSpace=_horizontalSpace;
@property(nonatomic) _Bool autoWrap; // @synthesize autoWrap=_autoWrap;
@property(nonatomic) _Bool just; // @synthesize just=_just;
@property(nonatomic) _Bool fill; // @synthesize fill=_fill;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
- (void)layout:(id)arg1;
- (CDStruct_3c058996)hitSizeInfo:(id)arg1 wHint:(double)arg2 hHint:(double)arg3;
- (void)setFixedRowHeight:(double)arg1;
- (void)setSpace:(double)arg1;
- (id)init;

@end

