//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIImageView, UIScrollView;

@interface TMDetailCertificateCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    UIScrollView *_imageScrollView;
    UIActivityIndicatorView *_activityIndicatorView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setShowIndicator:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

