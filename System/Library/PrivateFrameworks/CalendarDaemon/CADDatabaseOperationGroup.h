//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADDatabaseInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADDatabaseOperationGroup <CADDatabaseInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x000000000000fe70
+ (_Bool)requiresReminderAccess;	// IMP=0x000000000000fe68
+ (_Bool)requiresEventAccess;	// IMP=0x000000000000fe60
- (void)CADDatabaseMigrateSubscribedCalendar:(id)arg1 toSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001378c
- (void)CADDatabaseRollbackWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013732
- (int)_updatePropertiesAndRelations:(id)arg1 database:(struct CalDatabase *)arg2 insertedObjectMap:(id)arg3;	// IMP=0x0000000000013249
- (int)_deleteObjects:(id)arg1 database:(struct CalDatabase *)arg2;	// IMP=0x000000000001309c
- (id)_insertObjectsWithTemporaryObjectIDs:(id)arg1 database:(struct CalDatabase *)arg2 error:(int *)arg3;	// IMP=0x0000000000012ace
- (id)_insert:(id)arg1 delete:(id)arg2 update:(id)arg3 database:(struct CalDatabase *)arg4 error:(int *)arg5;	// IMP=0x00000000000129cc
- (int)preflightObjectID:(id)arg1;	// IMP=0x000000000001286f
- (int)preflightAccessForDeletes:(id)arg1 updates:(id)arg2;	// IMP=0x0000000000012416
- (void)CADDatabaseInsert:(id)arg1 delete:(id)arg2 update:(id)arg3 andCommit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000011f55
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011da8
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011d75
- (void)CADDatabaseExportICSDataForCalendar:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011c75
- (void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011a55
- (id)_importEvents:(id)arg1 data:(id)arg2 intoCalendarWithID:(int)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 outError:(int *)arg6;	// IMP=0x0000000000011700
- (void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000000010e19
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010ccc
- (_Bool)_CADDatabaseCanModifyCalendarDatabase;	// IMP=0x0000000000010c70
- (void)CADDatabaseCanModifyCalendarDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010c22
- (void)CADDatabaseGetNextAssignableColorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010bb6
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010b33
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010ac2
- (void)CADDatabaseGetSequenceNumber:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010a66
- (struct __CFSet *)_copyToIntCFSetRef:(id)arg1;	// IMP=0x00000000000108f7
- (struct __CFArray *)_copyToIntCFArrayRef:(id)arg1;	// IMP=0x0000000000010788
- (void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010490
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000103f4
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010293
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001015c
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010076
- (void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fef0
- (void)CADDatabaseGetUUID:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fe78

@end
