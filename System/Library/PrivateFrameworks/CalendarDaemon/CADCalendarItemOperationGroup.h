//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADCalendarItemInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup <CADCalendarItemInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x000000000001f1ac
+ (_Bool)requiresReminderAccess;	// IMP=0x000000000001f1a4
+ (_Bool)requiresEventAccess;	// IMP=0x000000000001f19c
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002090c
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020879
- (void)CADDatabaseRemoveContactIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000206c9
- (void)CADDatabaseAddContactWithIdentifier:(id)arg1 forCalendarItem:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000205a0
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002042c
- (void)CADDatabaseExportCalendarItemAsICS:(id)arg1 withOptions:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000202fc
- (void)CADDatabaseiTIPImport:(id)arg1 intoCalendarID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000200bf
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;	// IMP=0x000000000001ff37
- (id)_resultsFilteredForJunkEvents:(id)arg1;	// IMP=0x000000000001fcb9
- (id)_resultsFilteredForTCCAccess:(id)arg1;	// IMP=0x000000000001fa3b
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001f69b
- (void)CADDatabaseGetAlarmWithExternalID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f568
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001f2aa
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f1b4

@end

