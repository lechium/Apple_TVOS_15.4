//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriObservation/SOAlarmsSnapshotMutating-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet, NSString, SOAlarmsSnapshot;

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating>
{
    SOAlarmsSnapshot *_baseModel;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSDictionary *_alarmsByID;	// 24 = 0x18
    NSOrderedSet *_firingAlarmIDs;	// 32 = 0x20
    NSOrderedSet *_dismissedAlarmIDs;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDate:1;
        unsigned int hasAlarmsByID:1;
        unsigned int hasFiringAlarmIDs:1;
        unsigned int hasDismissedAlarmIDs:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000009ce5
- (id)generate;	// IMP=0x0000000000009b50
- (void)setDismissedAlarmIDs:(id)arg1;	// IMP=0x0000000000009b30
- (void)setFiringAlarmIDs:(id)arg1;	// IMP=0x0000000000009b10
- (void)setAlarmsByID:(id)arg1;	// IMP=0x0000000000009af0
- (void)setDate:(id)arg1;	// IMP=0x0000000000009ad0
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000009a65
- (id)init;	// IMP=0x0000000000009a51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
