//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSSQLiteEntity-Protocol.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteEntity : NSObject <AMSSQLiteEntity>
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x00000000001fd490
+ (Class)memoryEntityClass;	// IMP=0x00000000001fbd14
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000000001fbd0c
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00000000001fbd04
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00000000001fbcfc
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x00000000001fbcf4
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x00000000001fbcec
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00000000001fbc29
+ (id)databaseTable;	// IMP=0x00000000001fbbf7
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x00000000002022dc
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x00000000002021d9
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00000000002021c4
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00000000002021a5
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0000000000202186
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x0000000000202167
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000000201f94
- (void).cxx_destruct;	// IMP=0x00000000001fddfd
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x00000000001fdcf0
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x00000000001fda84
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000001fd3b3
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000001fd3a1
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x00000000001fca82
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000001fc996
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000001fc984
- (id)getValuesForProperties:(id)arg1;	// IMP=0x00000000001fc1dd
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x00000000001fbd25
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x00000000001fb92a
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x00000000001fb8b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

