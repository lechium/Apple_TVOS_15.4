//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCNotifier, NSFileManager;

@interface MCMigrator : NSObject
{
    _Bool _systemProfileStorageWasMigratedFromLegacyStorage;	// 8 = 0x8
    NSFileManager *_fileManager;	// 16 = 0x10
    MCNotifier *_notifier;	// 24 = 0x18
}

+ (id)stringWithContext:(int)arg1;	// IMP=0x0040000000029c62
- (void).cxx_destruct;	// IMP=0x00200000000390d5
@property(nonatomic) _Bool systemProfileStorageWasMigratedFromLegacyStorage; // @synthesize systemProfileStorageWasMigratedFromLegacyStorage=_systemProfileStorageWasMigratedFromLegacyStorage;
@property(retain, nonatomic) MCNotifier *notifier; // @synthesize notifier=_notifier;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void)_checkForStaleAPNCarrierFile;	// IMP=0x0010000000038be9
- (void)_wakeDaemonsPostMigration;	// IMP=0x0010000000038b9c
- (void)_correctCloudConfigurationIfNecessary;	// IMP=0x001000000003852d
- (void)_validateCloudConfiguration;	// IMP=0x001000000003829e
- (void);	// IMP=0x001000000003823a
- (void)_tagManagedAccounts;	// IMP=0x0010000000037eb8
- (void)_correctInstallOptionsOnProfileStubs;	// IMP=0x0010000000037a1b
- (void)_removeUnmanageableApps;	// IMP=0x0010000000037537
- (void)_migrateManagedPreferencesToSystemContainer;	// IMP=0x0010000000036e2f
- (void)_cleanUpAppConfiguration;	// IMP=0x0010000000036384
- (void)_removeSupervisionProfiles;	// IMP=0x0010000000036071
- (id)_generatedManifestIfNeededFromOrderedProfiles:(id)arg1 hiddenProfiles:(id)arg2 existingManifest:(id)arg3;	// IMP=0x0010000000035e9f
- (void)_profilesFromStubsAtPath:(id)arg1 orderedProfiles:(id *)arg2 hiddenProfiles:(id *)arg3;	// IMP=0x00100000000359aa
- (id)_profilesFromManifestAtPath:(id)arg1;	// IMP=0x0010000000035639
- (void)_fixManifestFromStubsIfNecessaryWithStubPath:(id)arg1 manifestPath:(id)arg2;	// IMP=0x00100000000353a2
- (void)_fixManifestFromStubsIfNecessary;	// IMP=0x00100000000352e7
- (void)_migrateLostModeLastLocationRequestDate;	// IMP=0x0010000000034d19
- (void)_migrateSharedDeviceConfiguration;	// IMP=0x0010000000034bf2
- (void)_applyImpliedSettings;	// IMP=0x0010000000034ab2
- (void)_updateProfileRestrictions;	// IMP=0x0010000000034736
- (id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1;	// IMP=0x00100000000344b5
- (void)_updateClientRestrictions;	// IMP=0x00100000000340e6
- (void)_migrateClientRestrictions;	// IMP=0x0010000000033955
- (void)_migrateSettings;	// IMP=0x00100000000327d1
- (void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(_Bool)arg4;	// IMP=0x00100000000326ed
- (void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5;	// IMP=0x001000000003234d
- (void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5;	// IMP=0x0010000000031f8a
- (void)_applyDefaultSettings;	// IMP=0x00100000000317fa
- (void)_removeOriginalCopies;	// IMP=0x00100000000314d9
- (void)_transferTagsToProfileStubs;	// IMP=0x00100000000310f1
- (_Bool)_applyAccountTagsToProfile:(id)arg1;	// IMP=0x0010000000030d1a
- (void)_transferInstallationDatesFromOriginalProfiles;	// IMP=0x001000000003072e
- (void)_migrateOTAProfiles;	// IMP=0x001000000002f7c4
- (void)_transferRemovalPasswordsFromOriginalProfiles;	// IMP=0x001000000002f066
- (void)_transferSignerCertificates;	// IMP=0x001000000002e72b
- (void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1;	// IMP=0x001000000002e460
- (id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1;	// IMP=0x001000000002de0d
- (void)_removeOrphanedManifestEntries;	// IMP=0x001000000002dc7a
- (void)_createStubs;	// IMP=0x001000000002d478
- (void)_removeDuplicatedHiddenIdentifiers;	// IMP=0x001000000002d104
- (void)_removeUnusedManifestArrays;	// IMP=0x001000000002cfa1
- (void)_migrateManifestLocation;	// IMP=0x001000000002ca67
- (void)_moveFilesToPublicDirectories;	// IMP=0x001000000002c875
- (void)_removeLegacyProfileStorageDirectory;	// IMP=0x001000000002c702
- (_Bool)_isDirectoryEmptyAtPath:(id)arg1;	// IMP=0x001000000002c660
- (_Bool)_isLegacyProfileStoragePresent;	// IMP=0x001000000002c5e8
- (_Bool)_shouldAttemptToMigrateLegacyProfileStorage;	// IMP=0x001000000002c591
- (_Bool)_copyAlmostAtomicallyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002c260
- (id)_attributeDictionaryForProfileStorageWithPosixPermissions:(unsigned long long)arg1;	// IMP=0x001000000002c199
- (id)_attributesForUserProfileStorageItem;	// IMP=0x001000000002c182
- (id)_attributesForSystemProfileStorageItems;	// IMP=0x001000000002c16b
- (void)_setAttributesOnSystemProfileStorageDirectory;	// IMP=0x001000000002c03e
- (void)_removeExistingSystemProfileStorageDirectoryBlockingMigration;	// IMP=0x001000000002bf06
- (void)_migrateLegacySystemProfileStorage;	// IMP=0x001000000002bd77
- (void)_createSystemProfileStorageDirectoryMigratingFromLegacyStorageIfNecessary;	// IMP=0x001000000002bc73
- (void)_sendCloudConfigurationChangedNotificationIfWeMigratedLegacyProfileStorage;	// IMP=0x001000000002bc1a
- (void)_fixPermissionsOnTheSystemProfileLibraryDirectoryAndContents;	// IMP=0x001000000002bb06
- (void)_createSystemGroupContainerAndMoveFiles;	// IMP=0x001000000002b943
- (void)_removeInvalidOptionsFromLegacyCloudConfiguration;	// IMP=0x001000000002b7b0
- (void)_createDirectories;	// IMP=0x001000000002b66e
- (void)_fixDirectoryAtPath:(id)arg1 permissions:(id)arg2;	// IMP=0x001000000002b5a1
- (void)_createDirectoryAtPath:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000002b427
- (void)_createDirectoryAtPath:(id)arg1;	// IMP=0x001000000002b377
- (void)migrateWithPostMigrationTaskQueue:(id)arg1;	// IMP=0x001000000002aa50
- (void)migrateCleanupMigratorWithContext:(int)arg1;	// IMP=0x001000000002a36c
- (void)_removeMDMProfileIfUserEnrollment;	// IMP=0x001000000002a04a
- (void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2;	// IMP=0x0010000000029cb8
- (void)_removeOSXServerPayloadAccount;	// IMP=0x0010000000029c15
- (void)_removeiPCUCertificates;	// IMP=0x0010000000029969
- (_Bool)_isMultiUserMode;	// IMP=0x00100000000298ce
- (void)_migratePasscodeDidRestore:(_Bool)arg1 passcodeWasSet:(_Bool)arg2;	// IMP=0x0010000000029841
- (id)_lastUserMigratedBuildVersion;	// IMP=0x00100000000297e7
- (id)_lastSystemMigratedBuildVersion;	// IMP=0x001000000002978d
- (void)setUserMetadataDictionary:(id)arg1;	// IMP=0x0010000000029735
- (id)userMetadataDictionary;	// IMP=0x001000000002964d
- (void)setSystemMetadataDictionary:(id)arg1;	// IMP=0x00100000000295f5
- (id)systemMetadataDictionary;	// IMP=0x001000000002950d
- (id)init;	// IMP=0x0010000000029494

@end
