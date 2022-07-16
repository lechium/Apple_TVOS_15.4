//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLModelMigrationContext-Protocol.h>

@class NSString, PLCoreAnalyticsEventManager, PLDatabaseContext, PLPhotoLibraryPathManager;

@interface PLBackgroundMigrationContext : NSObject <PLModelMigrationContext>
{
    unsigned int _policy;	// 8 = 0x8
    PLDatabaseContext *_databaseContext;	// 16 = 0x10
    PLCoreAnalyticsEventManager *_analyticsEventManager;	// 24 = 0x18
    PLPhotoLibraryPathManager *_pathManager;	// 32 = 0x20
    long long _libraryIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002eab8
@property long long libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property unsigned int policy; // @synthesize policy=_policy;
@property(retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager; // @synthesize analyticsEventManager=_analyticsEventManager;
@property(retain, nonatomic) PLDatabaseContext *databaseContext; // @synthesize databaseContext=_databaseContext;
- (id)initWithPathManager:(id)arg1 databaseContext:(id)arg2 analyticsEventManager:(id)arg3;	// IMP=0x000000000002e87c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

