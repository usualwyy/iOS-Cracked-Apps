//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SUpBubbleView : UIView
{
    double _arrowX;
    struct CGPoint _arrowPoint;
}

@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
@property(nonatomic) double arrowX; // @synthesize arrowX=_arrowX;
- (double)minLeft;
- (double)maxRight;
- (_Bool)isOverLeft;
- (_Bool)isOverRight;
- (void)updateArrowPoint:(struct CGPoint)arg1;
- (void)getDrawPath:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
