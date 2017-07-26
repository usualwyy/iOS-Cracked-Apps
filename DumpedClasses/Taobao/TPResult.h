//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TPResult : TBJSONModel
{
    _Bool _isSelfCreated;
    NSString *_bizId;
    NSString *_templateId;
    NSString *_targetUrl;
    NSString *_ownerName;
    NSString *_taopwdOwnerId;
    NSString *_password;
    NSString *_passwordType;
    NSString *_createAppKey;
    NSString *_errorCode;
    NSString *_errorMsg;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) _Bool isSelfCreated; // @synthesize isSelfCreated=_isSelfCreated;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *createAppKey; // @synthesize createAppKey=_createAppKey;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *taopwdOwnerId; // @synthesize taopwdOwnerId=_taopwdOwnerId;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

