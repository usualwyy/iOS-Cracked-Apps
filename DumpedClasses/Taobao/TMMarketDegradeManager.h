//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TMMarketVersion;

@interface TMMarketDegradeManager : NSObject
{
    TMMarketVersion *_bundleVersion;
}

+ (id)defaultManager;
@property(retain, nonatomic) TMMarketVersion *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
- (void).cxx_destruct;
- (_Bool)currentAreaIsDegrade:(id)arg1;
- (_Bool)isDegrade;
- (void)loadBundleVersionFromLocal;
- (id)init;

@end

