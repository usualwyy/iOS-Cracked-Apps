//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBCartItemOperateComponent : NSObject
{
    NSMutableArray *_operates;
}

@property(retain, nonatomic) NSMutableArray *operates; // @synthesize operates=_operates;
- (void).cxx_destruct;
- (_Bool)canEdit;
- (_Bool)canAddFav;
- (_Bool)canDelete;
- (id)initWithData:(id)arg1;

@end

