//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/CADTestingInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADTestingOperationGroup <CADTestingInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;	// IMP=0x0000000000041127
+ (_Bool)requiresReminderAccess;	// IMP=0x000000000004111f
+ (_Bool)requiresEventAccess;	// IMP=0x0000000000041117
- (void)CADTestingCloseDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041246
- (void)CADTestingSimulateDaemonCrash;	// IMP=0x00000000000411d9
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;	// IMP=0x000000000004112f

@end

