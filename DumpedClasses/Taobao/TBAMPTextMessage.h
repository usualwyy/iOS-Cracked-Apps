//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBAMPMessage.h"

#import "TBAMPMessage.h"

@class NSArray, NSAttributedString, NSString;

@interface TBAMPTextMessage : TBAMPMessage <TBAMPMessage>
{
    NSString *_content;
    NSArray *_links;
    long long _styleVersion;
    NSAttributedString *_attributedContent;
    double _width;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(copy, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(nonatomic) long long styleVersion; // @synthesize styleVersion=_styleVersion;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setExtData:(id)arg1;
- (void)setExt:(id)arg1;
- (void)parseFromDict:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

