//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface EJFontLayout : NSObject
{
    NSData *_glyphLayout;
    long long _glyphCount;
    struct {
        float width;
        float ascent;
        float descent;
    } _metrics;
}

@property(nonatomic) long long glyphCount; // @synthesize glyphCount=_glyphCount;
@property(nonatomic) CDStruct_869f9c67 metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSData *glyphLayout; // @synthesize glyphLayout=_glyphLayout;
- (void).cxx_destruct;

@end

