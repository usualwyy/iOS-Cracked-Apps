//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString;

@interface TBSearchOnesearchNXConfigModel : TBJSONModel
{
    NSString *_nx_force_h5;
    NSString *_nx_url;
    NSString *_nxsdk_version;
    NSString *_nx_abtest_name;
    NSArray *_h5_js;
    NSString *_h5_title;
    NSDictionary *_nx_preload;
}

@property(retain, nonatomic) NSDictionary *nx_preload; // @synthesize nx_preload=_nx_preload;
@property(retain, nonatomic) NSString *h5_title; // @synthesize h5_title=_h5_title;
@property(retain, nonatomic) NSArray *h5_js; // @synthesize h5_js=_h5_js;
@property(retain, nonatomic) NSString *nx_abtest_name; // @synthesize nx_abtest_name=_nx_abtest_name;
@property(retain, nonatomic) NSString *nxsdk_version; // @synthesize nxsdk_version=_nxsdk_version;
@property(retain, nonatomic) NSString *nx_url; // @synthesize nx_url=_nx_url;
@property(retain, nonatomic) NSString *nx_force_h5; // @synthesize nx_force_h5=_nx_force_h5;
- (void).cxx_destruct;

@end

