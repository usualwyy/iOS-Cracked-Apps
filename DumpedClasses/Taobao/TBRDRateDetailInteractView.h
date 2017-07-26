//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBRDRateDetailInteract;

@interface TBRDRateDetailInteractView : UIView
{
    _Bool _alreadyLike;
    _Bool _allowComment;
    _Bool _alreadyAppendRate;
    CDUnknownBlockType _cbCommentTap;
    CDUnknownBlockType _cbZangTap;
    CDUnknownBlockType _cbAppendRateTap;
    NSString *_likeCount;
    TBRDRateDetailInteract *_btnZang;
    TBRDRateDetailInteract *_btnComment;
    TBRDRateDetailInteract *_btnAppendRate;
}

@property(retain, nonatomic) TBRDRateDetailInteract *btnAppendRate; // @synthesize btnAppendRate=_btnAppendRate;
@property(retain, nonatomic) TBRDRateDetailInteract *btnComment; // @synthesize btnComment=_btnComment;
@property(retain, nonatomic) TBRDRateDetailInteract *btnZang; // @synthesize btnZang=_btnZang;
@property(nonatomic) _Bool alreadyAppendRate; // @synthesize alreadyAppendRate=_alreadyAppendRate;
@property(copy, nonatomic) NSString *likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(nonatomic) _Bool alreadyLike; // @synthesize alreadyLike=_alreadyLike;
@property(copy, nonatomic) CDUnknownBlockType cbAppendRateTap; // @synthesize cbAppendRateTap=_cbAppendRateTap;
@property(copy, nonatomic) CDUnknownBlockType cbZangTap; // @synthesize cbZangTap=_cbZangTap;
@property(copy, nonatomic) CDUnknownBlockType cbCommentTap; // @synthesize cbCommentTap=_cbCommentTap;
- (void).cxx_destruct;
- (void)btnAppendRateAction:(id)arg1;
- (void)btnZangAction:(id)arg1;
- (void)btnCommentAction:(id)arg1;
- (id)createBtnAppendRateWithframe:(struct CGRect)arg1;
- (id)createBtnCommentWithframe:(struct CGRect)arg1;
- (id)createBtnZangWithframe:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

