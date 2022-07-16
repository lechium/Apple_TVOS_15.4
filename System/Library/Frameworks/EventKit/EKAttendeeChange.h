//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKOwnerIDProviding-Protocol.h>

@class EKObjectID, NSString;

@interface EKAttendeeChange <EKOwnerIDProviding>
{
    _Bool _attendeeRole;	// 8 = 0x8
    _Bool _attendeeStatus;	// 9 = 0x9
    EKObjectID *_ownerID;	// 16 = 0x10
    NSString *_attendeeEmailAddress;	// 24 = 0x18
}

+ (void)fetchAttendeeChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014eaa
+ (void)fetchAttendeeChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014da8
+ (void)fetchAttendeeChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014ca6
+ (int)entityType;	// IMP=0x0000000000014c9b
- (void).cxx_destruct;	// IMP=0x0000000000015166
@property(readonly, nonatomic) NSString *attendeeEmailAddress; // @synthesize attendeeEmailAddress=_attendeeEmailAddress;
@property(readonly, nonatomic) _Bool attendeeStatus; // @synthesize attendeeStatus=_attendeeStatus;
@property(readonly, nonatomic) _Bool attendeeRole; // @synthesize attendeeRole=_attendeeRole;
@property(readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;
- (id)initWithChangeProperties:(id)arg1;	// IMP=0x0000000000014fac

@end
