//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TBFavoritePropertyRequestModel : NSObject
{
    _Bool _isLoading;
    NSArray *_propertyList;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSArray *propertyList; // @synthesize propertyList=_propertyList;
- (void).cxx_destruct;
- (void)fetchPropertyListBySource:(id)arg1 andCategoryName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

