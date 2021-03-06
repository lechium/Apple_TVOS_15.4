//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject
{
    _Bool _reportInProgressUpgrades;	// 8 = 0x8
    PLLibraryServicesManager *_libraryServicesManager;	// 16 = 0x10
}

+ (_Bool)canAutomaticallyCreateLibrary;	// IMP=0x00000000003a3fba
- (void).cxx_destruct;	// IMP=0x00000000003a3faa
@property(readonly) PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (_Bool)lightweightPermissionCheckWithPath:(id)arg1 isDir:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000003a378c
- (_Bool)lightweightPermissionCheckWithError:(id *)arg1;	// IMP=0x00000000003a3439
- (_Bool)openPhotoLibraryDatabaseWithAutoUpgrade:(_Bool)arg1 autoCreate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000003a2a27
- (_Bool)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003a22ee
- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(_Bool)arg2;	// IMP=0x00000000003a2265

@end

