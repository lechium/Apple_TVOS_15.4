//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADAccessInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADAccessOperationGroup <CADAccessInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x000000000003a565
+ (_Bool)requiresReminderAccess;	// IMP=0x000000000003a55d
+ (_Bool)requiresEventAccess;	// IMP=0x000000000003a555
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a6f1
- (void)CADDatabaseGetAccess:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a673
- (void)CADDatabaseSetInitializationOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a56d

@end
