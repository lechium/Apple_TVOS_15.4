//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/TIUserModelDataStoring-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring>
{
    NSString *_path;	// 8 = 0x8
    struct sqlite3 *_user_model_db;	// 16 = 0x10
    _Bool _user_model_db_failed;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_database_queue;	// 32 = 0x20
}

+ (id)initializeDataStoreAtPath:(id)arg1;	// IMP=0x0000000000073194
- (void).cxx_destruct;	// IMP=0x000000000006f93a
- (_Bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;	// IMP=0x000000000006f7a7
- (_Bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;	// IMP=0x000000000006f62f
- (id)getAllKnownInputModesSinceDate:(id)arg1;	// IMP=0x000000000006f4e1
- (id)getAllKnownInputModes;	// IMP=0x000000000006f4cd
- (id)getInputModesForKey:(id)arg1;	// IMP=0x000000000006f3b0
- (id)getDurableValueForKey:(id)arg1;	// IMP=0x000000000006f281
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;	// IMP=0x000000000006f04e
- (id)getDailyAndWeeklyValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 weeklyKeySuffixes:(id)arg3 endDate:(id)arg4;	// IMP=0x000000000006ece5
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;	// IMP=0x000000000006eb11
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;	// IMP=0x000000000006e965
- (_Bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;	// IMP=0x000000000006e835
- (_Bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;	// IMP=0x000000000006e644
- (id)transientMigrationSchemaForDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006e418
- (id)durableMigrationSchemaForDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006e06f
- (id)propertiesMigrationSchemaForDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006deaf
- (id)lastMigrationDateForKey:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;	// IMP=0x000000000006ddbc
- (int)versionForKey:(id)arg1 fromDatabase:(struct sqlite3 *)arg2;	// IMP=0x000000000006dce9
@property(readonly) NSDate *transientLastMigrationDate;
- (id)transientLastMigrationDateFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006dc14
@property(readonly) int transientVersion;
- (int)transientVersionFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006db2a
@property(readonly) NSDate *durableLastMigrationDate;
- (id)durableLastMigrationDateFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006da55
@property(readonly) int durableVersion;
- (int)durableVersionFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006d968
@property(readonly) NSDate *propertiesLastMigrationDate;
- (id)propertiesLastMigrationDateFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006d893
@property(readonly) int propertiesVersion;
- (int)propertiesVersionFromDatabase:(struct sqlite3 *)arg1;	// IMP=0x000000000006d78c
- (id)transientCreationSchema;	// IMP=0x000000000006d705
- (id)transientResetSchema;	// IMP=0x000000000006d6f8
- (id)durableMigrationFromV3Schema;	// IMP=0x000000000006d671
- (id)durableMigrationFromV2Schema;	// IMP=0x000000000006d5ea
- (id)durableCreationSchema;	// IMP=0x000000000006d563
- (id)durableResetSchema;	// IMP=0x000000000006d556
- (id)propertiesMigrationFromV1Schema;	// IMP=0x000000000006d4c6
- (id)propertiesCreationSchema;	// IMP=0x000000000006d43f
- (_Bool)closeDatabase;	// IMP=0x000000000006d3b1
- (_Bool)createOrOpenDatabase;	// IMP=0x000000000006cd33
- (_Bool)isDatabaseValid;	// IMP=0x000000000006cd0e
@property(readonly) _Bool isValid;
- (void)dealloc;	// IMP=0x000000000006cc42
- (id)initWithPath:(id)arg1;	// IMP=0x000000000006cb65
- (_Bool)purgeDurableDataForKeyPrefix:(id)arg1;	// IMP=0x00000000000731de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
