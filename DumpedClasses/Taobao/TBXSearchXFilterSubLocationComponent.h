//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchXFilterBaseComponent.h"

@class NSArray, NSMutableArray;

@interface TBXSearchXFilterSubLocationComponent : TBXSearchXFilterBaseComponent
{
    NSArray *_modelArr;
    NSMutableArray *_btnArr;
}

@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) NSArray *modelArr; // @synthesize modelArr=_modelArr;
- (void).cxx_destruct;
- (void)changeControlAccessibility:(_Bool)arg1;
- (void)renderBtn;
- (void)initWithTitle:(id)arg1 model:(id)arg2;

@end

