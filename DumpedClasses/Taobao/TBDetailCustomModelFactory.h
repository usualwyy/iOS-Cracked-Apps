//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModelBaseFactory.h"

@class NSDictionary;

@interface TBDetailCustomModelFactory : AliDetailComponentModelBaseFactory
{
    NSDictionary *_componentCreateRules;
}

@property(retain, nonatomic) NSDictionary *componentCreateRules; // @synthesize componentCreateRules=_componentCreateRules;
- (void).cxx_destruct;
- (id)createComponentModelDic;
- (id)componentMapDic;
- (void)setComponentMapDic:(id)arg1;

@end

