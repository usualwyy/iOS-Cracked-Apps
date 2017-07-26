//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMCameraFunctionItem.h"

#import "YWInputViewPluginProtocol.h"

@class NSString, UIButton, UIImage, UIView, UIView<IYWMessageInputView>, YWConversationViewController;

@interface TBWangxinInputViewPluginCamera : TBIMCameraFunctionItem <YWInputViewPluginProtocol>
{
    UIButton *_customPluginButton;
    YWConversationViewController *_conversationViewController;
}

@property(nonatomic) __weak YWConversationViewController *conversationViewController; // @synthesize conversationViewController=_conversationViewController;
@property(retain, nonatomic) UIButton *customPluginButton; // @synthesize customPluginButton=_customPluginButton;
- (void).cxx_destruct;
- (void)sendImage:(id)arg1;
- (void)pluginDidClicked;
@property(readonly, nonatomic) unsigned long long pluginType;
@property(copy, nonatomic) NSString *pluginName;
- (id)initWithConversationViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <YWInputViewPluginDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIView<IYWMessageInputView> *inputViewRef;
@property(readonly, nonatomic) UIView *pluginContentView;
@property(retain, nonatomic) UIImage *pluginIconImage;
@property(retain, nonatomic) NSString *pluginIconImageURL;
@property(nonatomic) unsigned long long pluginPosition;
@property(readonly) Class superclass;

@end

