//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBSThemeModel : NSObject
{
    NSString *_code;
    NSString *_url;
    NSString *_zipUrl;
    NSString *_usedTime;
    NSDictionary *_config;
}

+ (id)modelWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *usedTime; // @synthesize usedTime=_usedTime;
@property(readonly, copy, nonatomic) NSString *zipUrl; // @synthesize zipUrl=_zipUrl;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *info;
- (_Bool)isEqualZipUrlToDictionary:(id)arg1;
- (_Bool)isEqualUrlToDictionary:(id)arg1;
- (_Bool)isEqualCodeToDictionary:(id)arg1;
- (_Bool)isEqualInfoToDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

