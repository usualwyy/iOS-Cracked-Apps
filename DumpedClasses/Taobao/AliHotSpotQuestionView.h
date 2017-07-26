//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliHotSpotAnswerView, AliHotSpotQuestionModel;

@interface AliHotSpotQuestionView : UIView
{
    AliHotSpotAnswerView *_answerView;
    AliHotSpotQuestionModel *_questionModel;
    long long _affirmAnswerLength;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enumAnswerItemView:(CDUnknownBlockType)arg1;
- (id)getAnswer;
- (_Bool)checkAnswerFinished;
- (void)setAnswerItemWithKey:(id)arg1 index:(unsigned long long)arg2;
- (void)selectNextAnswerItem;
- (void)resetAnswerItemViews:(id)arg1;
- (void)initAnswerView;
- (void)initAnswerItemViews;
- (void)initQuestion;
- (id)initWithFrame:(struct CGRect)arg1 questionModel:(id)arg2;

@end

