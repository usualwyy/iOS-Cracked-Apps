//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentBaseFactory.h"

@class NSDictionary;

@interface TBDetailCustomComponentFactory : AliDetailComponentBaseFactory
{
    NSDictionary *_mapDic;
}

@property(retain, nonatomic) NSDictionary *mapDic; // @synthesize mapDic=_mapDic;
- (void).cxx_destruct;
- (id)customComponents;
- (id)componentMapDic;
- (void)setComponentMapDic:(id)arg1;
- (id)make:(id)arg1 data:(id)arg2;

@end

