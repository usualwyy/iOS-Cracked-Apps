//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBMeasureUtil : NSObject
{
}

+ (_Bool)isBooleanString:(id)arg1;
+ (_Bool)isNumberString:(id)arg1;
+ (id)getConfigBy:(unsigned long long)arg1;
+ (_Bool)setUserDefaultCache:(id)arg1 value:(id)arg2;
+ (id)getUserDefaultCache:(id)arg1;
+ (void)postEvent:(unsigned long long)arg1 eventToken:(id)arg2 params:(id)arg3;
+ (_Bool)isIPhone4;
+ (double)screenHeightIPhone4;
+ (double)getScreenRatioCompareToIPhone6H;
+ (double)getScreenRatioCompareToIPhone6W;
+ (id)drawFullDivisionLine:(double)arg1;
+ (double)getCurrentDeviceHeight;
+ (double)getCurrentDeviceWidth;
+ (id)fontWithStyle:(int)arg1 specificSize:(double)arg2;
+ (id)fontWithStyle:(int)arg1 size:(unsigned long long)arg2;
+ (int)fontWithSizeType:(unsigned long long)arg1;
+ (void)renderGradient:(id)arg1 style:(unsigned long long)arg2;
+ (id)colorWithHexString:(id)arg1 alpha:(float)arg2;
+ (id)colorTypeToString:(unsigned long long)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithStyle:(unsigned long long)arg1 alpha:(float)arg2;
+ (id)colorWithStyle:(unsigned long long)arg1;
+ (_Bool)isBlank:(id)arg1;
+ (double)navibarHeight;
+ (double)borderGap;

@end

