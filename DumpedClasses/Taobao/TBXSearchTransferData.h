//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface TBXSearchTransferData : NSObject
{
    int _style;
    NSDictionary *_iconStyleData;
    NSMutableDictionary *_abtestData;
    NSMutableDictionary *_extendData;
}

@property(retain, nonatomic) NSMutableDictionary *extendData; // @synthesize extendData=_extendData;
@property(retain, nonatomic) NSMutableDictionary *abtestData; // @synthesize abtestData=_abtestData;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSDictionary *iconStyleData; // @synthesize iconStyleData=_iconStyleData;
- (void).cxx_destruct;

@end

