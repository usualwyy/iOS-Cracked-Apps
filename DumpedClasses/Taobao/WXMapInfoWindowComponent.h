//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXMapViewMarkerComponent.h"

@class MAPointAnnotation, NSString;

@interface WXMapInfoWindowComponent : WXMapViewMarkerComponent
{
    _Bool _isOpen;
    MAPointAnnotation *_annotation;
    NSString *_identifier;
}

@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) MAPointAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)_removeViewFromSuperView;
- (void)_addSubView;
- (void)updateAttributes:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

