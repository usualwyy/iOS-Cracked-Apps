//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailConsumerProtectionItemModel : TBJSONModel
{
    long long _serviceId;
    NSString *_title;
    NSString *_icon;
    NSString *_desc;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long serviceId; // @synthesize serviceId=_serviceId;
- (void).cxx_destruct;

@end

