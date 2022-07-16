//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteEntity : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x002000000019221f
+ (Class)memoryEntityClass;	// IMP=0x0010000000190933
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x001000000019092b
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0010000000190923
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x001000000019091b
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0010000000190913
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x001000000019090b
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0010000000190848
+ (id)databaseTable;	// IMP=0x0010000000190816
+ (id)memoryEntityForPersistentID:(long long)arg1 withProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x0010000000081e44
+ (id)memoryEntityForPersistentID:(long long)arg1 usingConnection:(id)arg2;	// IMP=0x0010000000081e2d
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x001000000011e9fb
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 entityClass:(Class)arg5;	// IMP=0x001000000011e8cb
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 entityClass:(Class)arg4;	// IMP=0x001000000011e8a9
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 entityClass:(Class)arg3;	// IMP=0x001000000011e884
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x001000000011e865
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000011e850
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000011e83b
+ (id)sumForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x001000000011e7d2
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x001000000011e7b3
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x001000000011e794
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x001000000011e775
+ (id)allOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000011e5a0
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000011e376
- (void).cxx_destruct;	// IMP=0x0010000000192b8c
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x0010000000192a7f
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x0010000000192813
- (id)valueForProperty:(id)arg1;	// IMP=0x0010000000192142
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000192130
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x001000000019181a
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x001000000019172e
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x001000000019171c
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0010000000190f75
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000190944
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x001000000019056f
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x00100000001904f9
- (id)urlValueForProperty:(id)arg1;	// IMP=0x0010000000192db3
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x0010000000192d5c
- (id)stringValueForProperty:(id)arg1;	// IMP=0x0010000000192d05
- (id)numberValueForProperty:(id)arg1;	// IMP=0x0010000000192cae
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x0010000000192c6a
- (id)errorValueForProperty:(id)arg1;	// IMP=0x0010000000192be0
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x0010000000192b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
