//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADAlarmEngineInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAlarmEngineOperationGroup <CADAlarmEngineInterface>
{
}

+ (id)whitelistedBundles;	// IMP=0x0000000000005429
+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x0000000000005421
+ (_Bool)requiresReminderAccess;	// IMP=0x0000000000005419
+ (_Bool)requiresEventAccess;	// IMP=0x0000000000005411
- (void)CADDatabaseGetVehicleTriggerAlarmsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000060ec
- (void)CADDatabaseGetLocationBasedAlarmsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005dd6
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000000566b
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000054d9
- (_Bool)_hasAccessToAlarmsOnCalendar:(void *)arg1;	// IMP=0x0000000000005436

@end

