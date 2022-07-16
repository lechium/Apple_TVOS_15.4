//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFCalendarEvent-Protocol.h>
#import <HomeKitDaemon/MKFCalendarEventPrivateExtensions-Protocol.h>

@class MKFCalendarEventDatabaseID, NSData, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

@interface _MKFCalendarEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCalendarEvent, MKFCalendarEventPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000002d658d
+ (id)backingModelProtocol;	// IMP=0x00000000002d657c
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000002d64c6
+ (Class)cd_modelClass;	// IMP=0x0000000000927ac2
+ (id)fetchRequest;	// IMP=0x0000000000b57a3e
@property(readonly) id <MKFHome> home;
- (id)castIfCalendarEvent;	// IMP=0x00000000002d646d
@property(readonly, copy, nonatomic) MKFCalendarEventDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(retain, nonatomic) NSData *fireDateComponents; // @dynamic fireDateComponents;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
