//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface EKCalendarInviteReplyNotification
{
    unsigned long long _status;	// 80 = 0x50
    unsigned long long _allowedEntityTypes;	// 88 = 0x58
}

@property(nonatomic) unsigned long long allowedEntityTypes; // @synthesize allowedEntityTypes=_allowedEntityTypes;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (_Bool)acknowledgeWithEventStore:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005a885
- (id)inviteReplyNotificationFromEventStore:(id)arg1;	// IMP=0x000000000005a85f
- (id)initWithType:(long long)arg1;	// IMP=0x000000000005a7ac

@end

