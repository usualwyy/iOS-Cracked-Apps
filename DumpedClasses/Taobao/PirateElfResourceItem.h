//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSArray, NSString;

@interface PirateElfResourceItem : PirateDataModel
{
    long long _type;
    NSArray *_image;
    NSString *_resZip;
    NSString *_pageUrl;
    NSString *_clickPageUrl;
}

@property(retain, nonatomic) NSString *clickPageUrl; // @synthesize clickPageUrl=_clickPageUrl;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *resZip; // @synthesize resZip=_resZip;
@property(retain, nonatomic) NSArray *image; // @synthesize image=_image;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;

@end

