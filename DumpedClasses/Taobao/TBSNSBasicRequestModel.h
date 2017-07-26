//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"

@class NSArray, NSDictionary, NSString, TBJSONModel, TBSDKMTOPServer, TBSNSBatOperationResultItem, TBSNSPagedList;

@interface TBSNSBasicRequestModel : NSObject <TBSDKServerDelegate>
{
    TBJSONModel *_item;
    Class _itemClass;
    NSString *_jsonTopKey;
    NSArray *_dataList;
    id <TBSNSBasicRequestModelDelegate> _delegate;
    long long _returnDataType;
    Class _pageListClass;
    NSString *_apiName;
    NSDictionary *_params;
    NSString *_version;
    NSDictionary *_responseData;
    TBSNSBatOperationResultItem *_operationResult;
    TBSNSPagedList *_pagedList;
    TBSDKMTOPServer *_server;
}

@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) TBSNSPagedList *pagedList; // @synthesize pagedList=_pagedList;
@property(retain, nonatomic) TBSNSBatOperationResultItem *operationResult; // @synthesize operationResult=_operationResult;
@property(retain, nonatomic) NSDictionary *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) Class pageListClass; // @synthesize pageListClass=_pageListClass;
@property(nonatomic) long long returnDataType; // @synthesize returnDataType=_returnDataType;
@property(nonatomic) __weak id <TBSNSBasicRequestModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSString *jsonTopKey; // @synthesize jsonTopKey=_jsonTopKey;
@property(retain, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(retain, nonatomic) TBJSONModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)dealloc;
- (void)parseData:(id)arg1;
- (void)clear;
- (void)setPaged:(id)arg1;
- (void)loadApi;
- (_Bool)hasPageListParams:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)didLoadCache:(id)arg1 responseHeader:(id)arg2 body:(id)arg3;
- (void)requestReceivedResponseHeaders:(id)arg1;
- (void)requestStarted:(id)arg1;
- (id)addPagination:(id)arg1;
- (void)basicLoaderWithAPIName:(id)arg1 params:(id)arg2 returnDataType:(long long)arg3 pagination:(id)arg4 version:(id)arg5;
- (void)nextPage;
- (void)refreshPagedList;
- (void)operationWithAPIName:(id)arg1 params:(id)arg2 version:(id)arg3;
- (void)loadPagedListWithAPIName:(id)arg1 params:(id)arg2 pagination:(id)arg3 version:(id)arg4;
- (void)loadDataListWithAPIName:(id)arg1 params:(id)arg2 version:(id)arg3;
- (void)loadItemWithAPIName:(id)arg1 params:(id)arg2 version:(id)arg3;
- (void)updateParamsForRequest:(id)arg1;
- (void)cancel;
- (void)cleanDelegateAndCancel;
- (void)setModelWithAPIName:(id)arg1 params:(id)arg2 returnDataType:(long long)arg3 pagination:(id)arg4 version:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

