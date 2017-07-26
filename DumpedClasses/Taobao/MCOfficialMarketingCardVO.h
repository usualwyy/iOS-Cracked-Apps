//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialMessageVO.h"

#import "MCOfficialMarketingCardVOProtocol.h"

@class NSArray, NSString;

@interface MCOfficialMarketingCardVO : MCOfficialMessageVO <MCOfficialMarketingCardVOProtocol>
{
    NSString *_title;
    NSString *_imageUrl;
    NSString *_content;
    NSArray *_recommandVO;
}

@property(retain, nonatomic) NSArray *recommandVO; // @synthesize recommandVO=_recommandVO;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *actionURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long direction;
@property(readonly) unsigned long long hash;
@property(nonatomic) double height;
@property(retain, nonatomic) id <MCOfficialMessageDOProtocol> officialMessageDO;
@property(readonly) Class superclass;

@end

