//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentBaseFactory.h"

@class NSDictionary;

@interface AliDetailCellFactory : AliDetailComponentBaseFactory
{
    NSDictionary *_mapDic;
}

@property(retain, nonatomic) NSDictionary *mapDic; // @synthesize mapDic=_mapDic;
- (void).cxx_destruct;
- (void)setComponentMapDic:(id)arg1;
- (id)componentMapDic;
- (id)make:(id)arg1 data:(id)arg2;

@end

