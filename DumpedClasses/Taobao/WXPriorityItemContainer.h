//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WXPriorityItemContainer : NSObject
{
    NSMutableDictionary *_dictionaryItems;
}

@property(retain, nonatomic) NSMutableDictionary *dictionaryItems; // @synthesize dictionaryItems=_dictionaryItems;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)itemForKey:(id)arg1;
- (void)removeAllItems;
- (id)allItems;
- (void)enumerateItemsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeItemForKey:(id)arg1;
- (void)addItem:(id)arg1 withPriority:(long long)arg2 forKey:(id)arg3;
- (id)init;

@end

