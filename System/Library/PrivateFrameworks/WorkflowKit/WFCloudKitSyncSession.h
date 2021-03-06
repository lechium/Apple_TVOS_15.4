//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFCloudKitSyncSession : NSObject
{
}

+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f6d9
+ (long long)currentDefaultShortcutsVersion;	// IMP=0x000000000000f6ce
+ (long long)syncedFlagsHash;	// IMP=0x000000000000f67f
+ (void)setLastSyncedFlagsHash:(long long)arg1;	// IMP=0x000000000000f625
+ (long long)lastSyncedFlagsHash;	// IMP=0x000000000000f5d3
+ (_Bool)needsDefaultShortcutUpdate;	// IMP=0x000000000000f594
+ (void)setDefaultShortcutsVersion:(long long)arg1;	// IMP=0x000000000000f53a
+ (long long)defaultShortcutsVersion;	// IMP=0x000000000000f4e8
+ (void)setVoiceShortcutMigrationDidSync:(_Bool)arg1;	// IMP=0x000000000000f48e
+ (_Bool)voiceShortcutMigrationDidSync;	// IMP=0x000000000000f43c
+ (void)setVoiceShortcutMigrationDidRun:(_Bool)arg1;	// IMP=0x000000000000f3e2
+ (_Bool)voiceShortcutMigrationDidRun;	// IMP=0x000000000000f390
+ (void)setIgnoresUserDeletedZoneErrors:(_Bool)arg1;	// IMP=0x000000000000f336
+ (_Bool)ignoresUserDeletedZoneErrors;	// IMP=0x000000000000f2e4
+ (void)setZoneWasPurged:(_Bool)arg1;	// IMP=0x000000000000f28a
+ (_Bool)zoneWasPurged;	// IMP=0x000000000000f238
+ (void)setSyncEnabled:(_Bool)arg1;	// IMP=0x000000000000f1de
+ (_Bool)isSyncEnabled;	// IMP=0x000000000000f18c
+ (void)initialize;	// IMP=0x000000000000f168
- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000000000fc45

@end

