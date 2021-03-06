//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface MCMMigrationStatus : NSObject
{
    NSMutableDictionary *_migrationInfo;	// 8 = 0x8
    NSURL *_migrationFileURL;	// 16 = 0x10
}

+ (id)currentBuildVersion;	// IMP=0x00400000000a00c9
- (void).cxx_destruct;	// IMP=0x00200000000a0063
@property(retain, nonatomic) NSURL *migrationFileURL; // @synthesize migrationFileURL=_migrationFileURL;
@property(retain, nonatomic) NSMutableDictionary *migrationInfo; // @synthesize migrationInfo=_migrationInfo;
- (id)_iso8601DateFormatter;	// IMP=0x001000000009fffd
- (_Bool)isBuildUpgrade;	// IMP=0x001000000009f938
- (void)writeCurrentBuildInfoToDisk;	// IMP=0x001000000009f76c
- (void)setMigrationCompleteForType:(id)arg1;	// IMP=0x001000000009f47e
- (_Bool)hasMigrationOccurredForType:(id)arg1;	// IMP=0x001000000009f3f4
- (_Bool)_writeMigrationStatusToDisk;	// IMP=0x001000000009f126
- (id)_readMigrationStatusFromDisk;	// IMP=0x001000000009ee3d
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)arg1;	// IMP=0x001000000009ec59
- (void)_removeMarkerFileWithName:(id)arg1 libraryPath:(id)arg2;	// IMP=0x001000000009ea1f
- (void)_readStatusFromMarkerFileWithName:(id)arg1 andSetAsType:(id)arg2 libraryPath:(id)arg3;	// IMP=0x001000000009e747
- (id)init;	// IMP=0x001000000009e735
- (id)initForMobileUserMigration;	// IMP=0x001000000009e43a
- (id)initForSystemMigration;	// IMP=0x001000000009e12a

@end

