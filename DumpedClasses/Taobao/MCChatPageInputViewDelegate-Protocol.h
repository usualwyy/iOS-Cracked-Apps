//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView<MCChatPageInputViewProtocol>;

@protocol MCChatPageInputViewDelegate <NSObject>

@optional
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 status:(long long)arg2;
- (void)inputViewSetCustomEmotion:(UIView<MCChatPageInputViewProtocol> *)arg1;
- (void)inputViewAddCustomEmotion:(UIView<MCChatPageInputViewProtocol> *)arg1;
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 textToSend:(NSString *)arg2;
- (_Bool)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 changeText:(NSString *)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 deleteAtLocation:(struct _NSRange)arg2;
- (void)inputView:(UIView<MCChatPageInputViewProtocol> *)arg1 canAudioClicked:(void (^)(_Bool))arg2;
- (void)inputViewMenuClick:(UIView<MCChatPageInputViewProtocol> *)arg1;
@end

