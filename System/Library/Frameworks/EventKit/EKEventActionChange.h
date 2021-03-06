//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKOwnerIDProviding-Protocol.h>

@class EKObjectID;

@interface EKEventActionChange <EKOwnerIDProviding>
{
    EKObjectID *_ownerID;	// 8 = 0x8
}

+ (void)fetchEventActionChangesInCalendar:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b7f0
+ (void)fetchEventActionChangesInSource:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b6ee
+ (void)fetchEventActionChangesInStore:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b5ec
+ (int)entityType;	// IMP=0x000000000006b5e1
- (void).cxx_destruct;	// IMP=0x000000000006b9c9
@property(readonly, nonatomic) EKObjectID *ownerID; // @synthesize ownerID=_ownerID;
- (id)initWithChangeProperties:(id)arg1;	// IMP=0x000000000006b8f2

@end

