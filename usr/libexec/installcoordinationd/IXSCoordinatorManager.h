//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IXSCoordinatorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mapQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_createQueue;	// 16 = 0x10
    MISSING_TYPE *_bundleIDToCoordinatorMap;	// 24 = 0x18
    NSMutableDictionary *_uuidToCoordinatorMap;	// 32 = 0x20
    NSMutableArray *_bundleIDPriority;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x002000000000673b
+ (id)prioritySaveURL;	// IMP=0x00100000000066b1
+ (id)saveDir;	// IMP=0x0010000000006624
+ (id)savePathForCoordinator:(id)arg1;	// IMP=0x0010000000006544
- (void).cxx_destruct;	// IMP=0x002000000000959e
@property(readonly, nonatomic) NSMutableArray *bundleIDPriority; // @synthesize bundleIDPriority=_bundleIDPriority;
@property(readonly, nonatomic) NSMutableDictionary *uuidToCoordinatorMap; // @synthesize uuidToCoordinatorMap=_uuidToCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *bundleIDToCoordinatorMap; // @synthesize bundleIDToCoordinatorMap=_bundleIDToCoordinatorMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *createQueue; // @synthesize createQueue=_createQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
- (void)clearAllCoordinatorsForCreator:(unsigned long long)arg1;	// IMP=0x00100000000091c1
- (void)enumerateCoordinators:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008d67
- (_Bool)prioritizeCoordinator:(id)arg1;	// IMP=0x0010000000008d11
- (_Bool)prioritizeCoordinatorWithBundleID:(id)arg1;	// IMP=0x0010000000008a76
- (void)unregisterCoordinator:(id)arg1;	// IMP=0x00100000000087bd
- (void)performCreationBlockingOperation:(CDUnknownBlockType)arg1;	// IMP=0x00100000000086ee
- (id)coordinatorForBundleID:(id)arg1 creatingIfNotExisting:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008035
- (id)_lookupCoordinatorForBundleID:(id)arg1;	// IMP=0x0010000000007e87
- (id)coordinatorForBundleID:(id)arg1;	// IMP=0x0010000000007e73
- (id)coordinatorForUUID:(id)arg1;	// IMP=0x0010000000007c29
- (void)_saveBundleIDPriority;	// IMP=0x0010000000007ae4
- (id)init;	// IMP=0x00100000000067d4

@end

