//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, WeAppBasicOffsetObject;

@interface WeAppSectionLayoutObject : NSObject
{
    WeAppBasicOffsetObject *_minPosition;
    WeAppBasicOffsetObject *_maxPosition;
    UIView *_sectionView;
}

@property(retain, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
@property(retain, nonatomic) WeAppBasicOffsetObject *maxPosition; // @synthesize maxPosition=_maxPosition;
@property(retain, nonatomic) WeAppBasicOffsetObject *minPosition; // @synthesize minPosition=_minPosition;
- (void).cxx_destruct;
- (void)setSectionViewLayout:(id)arg1;
- (_Bool)offsetInSectionLayoutRange:(id)arg1;
- (id)initWithMinPosition:(id)arg1 MaxPosition:(id)arg2 sectionView:(id)arg3;

@end

