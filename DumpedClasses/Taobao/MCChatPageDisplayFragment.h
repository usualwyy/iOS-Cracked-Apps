//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseFragment.h"

@class MCChatPageDisplayPresenter, MCChatPageInputPresenter, NSArray;

@interface MCChatPageDisplayFragment : MCBaseFragment
{
    MCChatPageDisplayPresenter *_chatPageDisplayPresenter;
    MCChatPageInputPresenter *_chatPageInptuPresenter;
    NSArray *_inputFunctionItemsList;
}

@property(retain, nonatomic) NSArray *inputFunctionItemsList; // @synthesize inputFunctionItemsList=_inputFunctionItemsList;
@property(retain, nonatomic) MCChatPageInputPresenter *chatPageInptuPresenter; // @synthesize chatPageInptuPresenter=_chatPageInptuPresenter;
@property(retain, nonatomic) MCChatPageDisplayPresenter *chatPageDisplayPresenter; // @synthesize chatPageDisplayPresenter=_chatPageDisplayPresenter;
- (void).cxx_destruct;
- (void)setupInptuConponentWithConfig:(id)arg1 bizKey:(id)arg2;
- (void)loadDataAndRefreshUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setViewLayout:(id)arg1;
- (id)getConponetViews;
- (id)getContext;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 baseVC:(id)arg3 sessionID:(id)arg4 config:(id)arg5 inputFunctionItems:(id)arg6;

@end

