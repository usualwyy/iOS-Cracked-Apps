//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"
#import "YWDBFadeArrayDataSource.h"

@class NSArray, NSDictionary, NSFetchedResultsController, NSMutableArray, NSMutableDictionary, NSString, YWIMCore, YWMemoryCache;

@interface YWFetchedResultsController : NSObject <YWDBFadeArrayDataSource, NSFetchedResultsControllerDelegate>
{
    _Bool _disableFRCChangeTransaction;
    _Bool _bHasInsert;
    _Bool _bHasDelete;
    NSDictionary *_bridgeProperties;
    NSString *_frcCacheName;
    YWIMCore *_imCore;
    CDUnknownBlockType _didResetContentBlock;
    CDUnknownBlockType _willChangeContentBlock;
    CDUnknownBlockType _didChangeContentBlock;
    CDUnknownBlockType _objectDidChangeBlock;
    CDUnknownBlockType _sectionDidChangeBlock;
    id <YWFetchedResultsControllerDelegate> _delegate;
    YWMemoryCache *_convertCache;
    NSMutableDictionary *_internalUserInfo;
    NSMutableDictionary *_externalUserInfo;
    NSFetchedResultsController *_frc;
    CDUnknownBlockType _makeNSFRCBlock;
    CDUnknownBlockType _convertObjectBlock;
    CDUnknownBlockType _revertObjectBlock;
    Class _sectionInfoSubclass;
    Class _objectClass;
    NSMutableArray *_FRCChangeTransaction;
}

+ (id)fetchedResultsControllerForObjectClass:(Class)arg1 imCore:(id)arg2;
+ (void)onLoginIdChanged:(id)arg1;
@property(nonatomic) _Bool bHasDelete; // @synthesize bHasDelete=_bHasDelete;
@property(nonatomic) _Bool bHasInsert; // @synthesize bHasInsert=_bHasInsert;
@property(retain, nonatomic) NSMutableArray *FRCChangeTransaction; // @synthesize FRCChangeTransaction=_FRCChangeTransaction;
@property(nonatomic) _Bool disableFRCChangeTransaction; // @synthesize disableFRCChangeTransaction=_disableFRCChangeTransaction;
@property(copy, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(copy, nonatomic) Class sectionInfoSubclass; // @synthesize sectionInfoSubclass=_sectionInfoSubclass;
@property(copy, nonatomic) CDUnknownBlockType revertObjectBlock; // @synthesize revertObjectBlock=_revertObjectBlock;
@property(copy, nonatomic) CDUnknownBlockType convertObjectBlock; // @synthesize convertObjectBlock=_convertObjectBlock;
@property(copy, nonatomic) CDUnknownBlockType makeNSFRCBlock; // @synthesize makeNSFRCBlock=_makeNSFRCBlock;
@property(readonly, nonatomic) NSFetchedResultsController *frc; // @synthesize frc=_frc;
@property(readonly, copy, nonatomic) NSMutableDictionary *externalUserInfo; // @synthesize externalUserInfo=_externalUserInfo;
@property(copy, nonatomic) NSMutableDictionary *internalUserInfo; // @synthesize internalUserInfo=_internalUserInfo;
@property(retain, nonatomic) YWMemoryCache *convertCache; // @synthesize convertCache=_convertCache;
@property(nonatomic) __weak id <YWFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType sectionDidChangeBlock; // @synthesize sectionDidChangeBlock=_sectionDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType objectDidChangeBlock; // @synthesize objectDidChangeBlock=_objectDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didChangeContentBlock; // @synthesize didChangeContentBlock=_didChangeContentBlock;
@property(copy, nonatomic) CDUnknownBlockType willChangeContentBlock; // @synthesize willChangeContentBlock=_willChangeContentBlock;
@property(copy, nonatomic) CDUnknownBlockType didResetContentBlock; // @synthesize didResetContentBlock=_didResetContentBlock;
@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)resetContent;
@property(readonly, copy, nonatomic) NSString *frcCacheName; // @synthesize frcCacheName=_frcCacheName;
- (void)setFrc:(id)arg1 cacheName:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *bridgeProperties; // @synthesize bridgeProperties=_bridgeProperties;
- (id)initWithNSFetchedResultsController:(id)arg1 convertObjectBlock:(CDUnknownBlockType)arg2 revertObjectBlock:(CDUnknownBlockType)arg3 imCore:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)_convertNSSectionInfo:(id)arg1;
- (id)_revertToManagedObject:(id)arg1;
- (id)_convertFromManagedObject:(id)arg1;
- (id)bridgedObjectFromManagedObject:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)_convertManagedObject:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)_convertManagedObject:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (id)dbBridgeProperties;
- (id)dbRevertTargetObject:(id)arg1;
- (id)dbConvertSourceObject:(id)arg1;
- (id)dbSourceArray;
- (void)removeAllBlocks;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfFetchedObjects;
@property(readonly, nonatomic) NSArray *fetchedObjects;
- (id)_forceConvertedFetchedObjects;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSArray *sections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

