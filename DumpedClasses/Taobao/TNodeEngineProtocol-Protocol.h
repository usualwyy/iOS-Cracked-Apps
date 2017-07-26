//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSThread, Protocol;

@protocol TNodeEngineProtocol <NSObject>
@property(copy, nonatomic) NSDictionary *env;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSThread *thread;
- (NSMutableArray *)allMonitorComponents;
- (void)removeMonitorScrollViewEventInVisibleRectWithComponent:(struct UIView *)arg1;
- (void)addMonitorScrollViewEventInVisibleRectWithComponent:(struct UIView *)arg1;
- (void)render:(struct TNodeRenderContext *)arg1 complete:(void (^)(id <TNode>))arg2;
- (id <TNode>)render:(struct TNodeRenderContext *)arg1;
- (void)removeMessageHandler:(id <TNodeMessageHandler>)arg1;
- (void)addMessageHandler:(id <TNodeMessageHandler>)arg1;
- (void)removeMessageFilter:(id <TNodeMessageHandler>)arg1;
- (void)addMessageFilter:(id <TNodeMessageHandler>)arg1;
- (id)handlerForProtocol:(Protocol *)arg1;
- (_Bool)registerProtocol:(Protocol *)arg1 handler:(id)arg2;
- (id (^)(id, NSArray *))templateFilter:(NSString *)arg1;
- (_Bool)registerTemplateFilter:(NSString *)arg1 filter:(id (^)(id, NSArray *))arg2;
- (NSDictionary *)modules;
- (_Bool)registerModule:(NSString *)arg1 module:(id <TNodeModuleProtocol>)arg2;
- (Class)classForComponent:(NSString *)arg1;
- (_Bool)registercomponentAttrs:(NSString *)arg1 attrs:(struct NSDictionary *)arg2;
- (_Bool)registerComponent:(NSString *)arg1 class:(Class)arg2;
- (void)onIdle;
- (void)runInEngineThread:(void (^)(void))arg1;
- (void)call:(NSString *)arg1 withParams:(NSArray *)arg2;
- (void)runWithFile:(NSString *)arg1;
- (void)run;
@end

