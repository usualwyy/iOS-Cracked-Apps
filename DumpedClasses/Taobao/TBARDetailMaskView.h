//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBARDetailMaskView : UIView
{
    _Bool _maskHidden;
    struct CGRect _clearRect;
}

@property(nonatomic, getter=isMaskHidden) _Bool maskHidden; // @synthesize maskHidden=_maskHidden;
@property(nonatomic) struct CGRect clearRect; // @synthesize clearRect=_clearRect;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 clearRect:(struct CGRect)arg2;

@end

