//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSMutableArray, TBSCIKImageRule;

@interface TBSCIKNavigationController : UINavigationController
{
    NSMutableArray *_photos;
    TBSCIKImageRule *_imageRule;
    NSMutableArray *_curAssetsGroup;
    long long _iSelectGroupIndex;
    CDUnknownBlockType _ResultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ResultBlock; // @synthesize ResultBlock=_ResultBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithInitPhotos:(id)arg1 rootViewController:(id)arg2 withImageRule:(id)arg3;

@end

