//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface WeAppExpressionItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSString *_type;
    id _left;
    id _right;
    WeAppExpressionItem *_leftExpression;
    WeAppExpressionItem *_rightExpression;
}

@property(retain, nonatomic) WeAppExpressionItem *rightExpression; // @synthesize rightExpression=_rightExpression;
@property(retain, nonatomic) WeAppExpressionItem *leftExpression; // @synthesize leftExpression=_leftExpression;
@property(retain, nonatomic) id right; // @synthesize right=_right;
@property(retain, nonatomic) id left; // @synthesize left=_left;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseStaticDataWithWeAppDataManager:(id)arg1;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2 prefix:(id)arg3;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 weAppDataManager:(id)arg2;

@end

