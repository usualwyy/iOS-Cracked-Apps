//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBOrderEngine : NSObject
{
}

+ (void)free:(id)arg1;
+ (void)free;
+ (void)needReload;
+ (void)registerCallback:(CDUnknownBlockType)arg1 forEventType:(int)arg2 target:(id)arg3;
+ (void)initEngineWithParam:(CDUnknownBlockType)arg1;
+ (void)customTabs:(id)arg1;
+ (id)batchUnitWithCode:(id)arg1;
+ (id)tabs;
+ (id)outterurl;
+ (void)registerOrderTemplateDataDelegate:(id)arg1;
+ (void)registerServiceMockDelegate:(id)arg1;
+ (id)itemOperationWithModel:(id)arg1 target:(id)arg2;
+ (id)detailOperationWithOrderId:(id)arg1 archive:(_Bool)arg2 target:(id)arg3;
+ (id)batchOperationWithCode:(id)arg1 selectedIds:(id)arg2 target:(id)arg3;
+ (id)operationWithItemModel:(id)arg1 index:(unsigned long long)arg2 target:(id)arg3;
+ (id)operationWithModel:(id)arg1 index:(unsigned long long)arg2 target:(id)arg3;
+ (id)tabUnitWithCode:(id)arg1;
+ (id)tabOperationWithCode:(id)arg1 target:(id)arg2;
+ (id)operationWithUnit:(id)arg1 cause:(id)arg2 target:(id)arg3;
+ (id)operationWithCode:(id)arg1 cause:(id)arg2 target:(id)arg3;

@end

