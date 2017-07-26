//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCUpdateCardDataProtocol.h"

@class NSString;

@interface MCUpdateCardData : NSObject <MCUpdateCardDataProtocol>
{
    NSString *_innerContent;
    NSString *_innerUrlText;
    NSString *_innerUrl;
}

@property(retain, nonatomic) NSString *innerUrl; // @synthesize innerUrl=_innerUrl;
@property(retain, nonatomic) NSString *innerUrlText; // @synthesize innerUrlText=_innerUrlText;
@property(retain, nonatomic) NSString *innerContent; // @synthesize innerContent=_innerContent;
- (void).cxx_destruct;
- (id)url;
- (id)urlText;
- (id)content;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

