//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TBLayout;

@interface PageKitTemplateItem : NSObject
{
    NSString *_templateName;
    NSString *_version;
    NSString *_url;
    NSDictionary *_templateDict;
    TBLayout *_viewItem;
    NSString *_cachedTemplateVersion;
    NSString *_aspectRatio;
    NSString *_scriptVersion;
    struct CGSize _renderSize;
}

@property(retain, nonatomic) NSString *scriptVersion; // @synthesize scriptVersion=_scriptVersion;
@property(retain, nonatomic) NSString *aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(copy, nonatomic) NSString *cachedTemplateVersion; // @synthesize cachedTemplateVersion=_cachedTemplateVersion;
@property(retain, nonatomic) TBLayout *viewItem; // @synthesize viewItem=_viewItem;
@property(retain, nonatomic) NSDictionary *templateDict; // @synthesize templateDict=_templateDict;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;

@end

