//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADNotificationCountInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CADNotificationCountOperationGroup <CADNotificationCountInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x0000000000031eee
+ (_Bool)requiresReminderAccess;	// IMP=0x0000000000031ee6
+ (_Bool)requiresEventAccess;	// IMP=0x0000000000031ede
- (void)CADDatabaseGetNotificationCount:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031ef6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
