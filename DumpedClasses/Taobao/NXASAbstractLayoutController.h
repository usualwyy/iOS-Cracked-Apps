//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXASLayoutController.h"

@class NSString;

@interface NXASAbstractLayoutController : NSObject <NXASLayoutController>
{
    struct vector<std::__1::vector<NXASRangeTuningParameters, std::__1::allocator<NXASRangeTuningParameters>>, std::__1::allocator<std::__1::vector<NXASRangeTuningParameters, std::__1::allocator<NXASRangeTuningParameters>>>> _tuningParameters;
    struct CGSize _viewportSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)viewportSize;
- (void)setViewportSize:(struct CGSize)arg1;
- (id)indexPathsForScrolling:(long long)arg1 rangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (void)setTuningParameters:(CDStruct_2c43369c)arg1 forRangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (CDStruct_2c43369c)tuningParametersForRangeMode:(unsigned long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_2c43369c)arg1 forRangeType:(long long)arg2;
- (CDStruct_2c43369c)tuningParametersForRangeType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

