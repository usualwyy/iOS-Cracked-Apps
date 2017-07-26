//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyleProxy.h"

@class NSString;

@interface TTImageStyleProxy : TTStyleProxy
{
    NSString *_imageURL;
    long long _contentMode;
    struct CGSize _size;
}

@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)applyStyleWithView:(id)arg1 contentBounds:(struct CGRect)arg2;

@end

