//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray;

@interface TBMPThumbnailBar : UIScrollView
{
    NSArray *_photos;
    long long _iMaxAllowdImageNum;
    CDUnknownBlockType _removeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType removeBlock; // @synthesize removeBlock=_removeBlock;
- (void).cxx_destruct;
- (void)redrawWithSelectPhotos:(id)arg1;
- (void)tapRedx:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andMaxImageNum:(long long)arg2;

@end

