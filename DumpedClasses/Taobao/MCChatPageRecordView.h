//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCChatPageRecordViewProtocol.h"

@class NSString, UILabel;

@interface MCChatPageRecordView : UIView <MCChatPageRecordViewProtocol>
{
    _Bool _isOutside;
    _Bool _stopTrace;
    CDUnknownBlockType _beginBlock;
    CDUnknownBlockType _moveOutsideBlock;
    CDUnknownBlockType _moveInsideBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _finishBlock;
    UILabel *_textLabel;
}

@property(nonatomic) _Bool stopTrace; // @synthesize stopTrace=_stopTrace;
@property(nonatomic) _Bool isOutside; // @synthesize isOutside=_isOutside;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType moveInsideBlock; // @synthesize moveInsideBlock=_moveInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType moveOutsideBlock; // @synthesize moveOutsideBlock=_moveOutsideBlock;
@property(copy, nonatomic) CDUnknownBlockType beginBlock; // @synthesize beginBlock=_beginBlock;
- (void).cxx_destruct;
- (void)didTouchEnd:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)forceFinshRecord;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

