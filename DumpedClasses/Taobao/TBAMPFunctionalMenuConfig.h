//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAMPFunctionalMenuConfig.h"

@class NSArray<TBAMPFunctionalMenu>, NSDate, NSDictionary, NSString;

@interface TBAMPFunctionalMenuConfig : NSObject <TBAMPFunctionalMenuConfig>
{
    NSString *_bizId;
    NSString *_type;
    NSString *_subType;
    NSString *_bizSubId;
    NSString *_configKey;
    NSString *_version;
    NSArray<TBAMPFunctionalMenu> *_content;
    NSDictionary *_contentData;
    NSDate *_modifyTime;
}

@property(retain, nonatomic) NSDate *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSDictionary *contentData; // @synthesize contentData=_contentData;
@property(retain, nonatomic) NSArray<TBAMPFunctionalMenu> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *configKey; // @synthesize configKey=_configKey;
@property(copy, nonatomic) NSString *bizSubId; // @synthesize bizSubId=_bizSubId;
@property(copy, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)ampDeepCopy;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

