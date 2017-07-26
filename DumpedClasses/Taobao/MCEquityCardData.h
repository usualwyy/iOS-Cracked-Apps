//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCEquityCardDataProtocol.h"

@class NSString;

@interface MCEquityCardData : NSObject <MCEquityCardDataProtocol>
{
    NSString *_innerTitle;
    NSString *_innerImageUrl;
    NSString *_innerCardName;
    NSString *_innerCardIcon;
    NSString *_innerOpenUrl;
}

@property(retain, nonatomic) NSString *innerOpenUrl; // @synthesize innerOpenUrl=_innerOpenUrl;
@property(retain, nonatomic) NSString *innerCardIcon; // @synthesize innerCardIcon=_innerCardIcon;
@property(retain, nonatomic) NSString *innerCardName; // @synthesize innerCardName=_innerCardName;
@property(retain, nonatomic) NSString *innerImageUrl; // @synthesize innerImageUrl=_innerImageUrl;
@property(retain, nonatomic) NSString *innerTitle; // @synthesize innerTitle=_innerTitle;
- (void).cxx_destruct;
- (id)openUrl;
- (id)cardIcon;
- (id)cardName;
- (id)imageUrl;
- (id)title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

