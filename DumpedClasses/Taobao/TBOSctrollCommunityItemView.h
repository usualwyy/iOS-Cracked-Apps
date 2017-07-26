//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ITBOModel.h"

@class NSString, UIImageView, UILabel;

@interface TBOSctrollCommunityItemView : UIView <ITBOModel>
{
    id _model;
    UIImageView *_logo;
    UILabel *_title;
    UILabel *_tagLabel;
}

@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

