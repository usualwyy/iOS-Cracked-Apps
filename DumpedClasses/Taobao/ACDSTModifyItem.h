//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACDSTQLTreeNode.h"

@class NSObject, NSString;

@interface ACDSTModifyItem : ACDSTQLTreeNode
{
    NSString *_key;
    NSObject *_value;
}

@property(retain, nonatomic) NSObject *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 withValue:(id)arg2;

@end

