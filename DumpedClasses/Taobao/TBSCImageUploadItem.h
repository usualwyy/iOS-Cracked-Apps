//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBSCImageInfoItem;

@interface TBSCImageUploadItem : TBJSONModel
{
    _Bool _success;
    NSString *_errorCode;
    NSString *_errorMessage;
    TBSCImageInfoItem *_jsonData;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) TBSCImageInfoItem *jsonData; // @synthesize jsonData=_jsonData;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;

@end

