//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLModelMigrationContext-Protocol.h>

@class NSDictionary, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager;

@interface PLMigrationContext : NSObject <PLModelMigrationContext>
{
    unsigned short _previousStoreVersion;	// 8 = 0x8
    unsigned int _policy;	// 12 = 0xc
    NSPersistentStoreCoordinator *_coordinator;	// 16 = 0x10
    NSURL *_storeURL;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSPersistentStore *_store;	// 40 = 0x28
    PLCoreAnalyticsEventManager *_analyticsEventManager;	// 48 = 0x30
    PLPhotoLibraryPathManager *_pathManager;	// 56 = 0x38
    long long _libraryIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002e7a4
@property long long libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property unsigned int policy; // @synthesize policy=_policy;
@property(retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager; // @synthesize analyticsEventManager=_analyticsEventManager;
@property unsigned short previousStoreVersion; // @synthesize previousStoreVersion=_previousStoreVersion;
@property(retain, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)initWithPathManager:(id)arg1 coordinator:(id)arg2 onStore:(id)arg3 orStoreURL:(id)arg4 version:(unsigned short)arg5 options:(id)arg6 migrationPolicy:(unsigned int)arg7 analyticsEventManager:(id)arg8;	// IMP=0x000000000002e33d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

