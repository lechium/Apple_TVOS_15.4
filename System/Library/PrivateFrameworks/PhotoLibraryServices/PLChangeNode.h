//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PLCoreDataChangeMerger, PLDelayedSaveActionsProcessor, PLLibraryServicesManager, PLUpdatedOrderKeys;
@protocol PLChangePublisher;

@interface PLChangeNode : NSObject
{
    NSURL *_libraryUrl;	// 8 = 0x8
    PLLibraryServicesManager *_libraryServicesManager;	// 16 = 0x10
    unsigned char _nodeUUID[16];	// 24 = 0x18
    NSString *_nodeUUIDShortString;	// 40 = 0x28
    PLUpdatedOrderKeys *_updatedOrderKeys;	// 48 = 0x30
    PLCoreDataChangeMerger *_changeMerger;	// 56 = 0x38
    id <PLChangePublisher> _changePublisher;	// 64 = 0x40
    PLDelayedSaveActionsProcessor *_delayedSaveActionsProcessor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000019495c
- (void)publishChangesForDidSaveObjectIDsNotification:(id)arg1;	// IMP=0x00000000001941cc
- (void)disconnectManagedObjectContext:(id)arg1;	// IMP=0x0000000000194146
- (void)connectManagedObjectContext:(id)arg1;	// IMP=0x00000000001940ab
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;	// IMP=0x0000000000193ca5
- (_Bool)_isInvalidRemoteChangeEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000193b2f
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000001939ea
- (void)invalidate;	// IMP=0x00000000001938ef
- (void)dealloc;	// IMP=0x000000000019381b
- (id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4;	// IMP=0x00000000001934b8

@end

