//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutOperationModel : TBJSONModel
{
    _Bool _success;
    NSString *_errorMsg;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

