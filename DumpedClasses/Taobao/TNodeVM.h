//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TNodeVM : NSObject
{
    id _data;
    id _defaultData;
    NSDictionary *_attributes;
    NSMutableDictionary *_observers;
    TNodeVM *_parent;
    unsigned long long _index;
    NSMutableArray *_subVMs;
}

@property(readonly, nonatomic) NSMutableArray *subVMs; // @synthesize subVMs=_subVMs;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) __weak TNodeVM *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) id defaultData; // @synthesize defaultData=_defaultData;
@property(readonly, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)getBindData:(id)arg1 engine:(id)arg2 observer:(CDUnknownBlockType)arg3;
- (id)getBindData:(id)arg1 engine:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observer:(id)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)addSubVM:(id)arg1;
@property(readonly, nonatomic) __weak TNodeVM *rootVM;
- (id)initWithData:(id)arg1 el:(id)arg2 attrs:(id)arg3 parent:(id)arg4 append:(_Bool)arg5;
- (id)initWithData:(id)arg1 el:(id)arg2 attrs:(id)arg3 parent:(id)arg4;

@end

