//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFTimePeriodBulletinCondition-Protocol.h>
#import <HomeKitDaemon/MKFTimePeriodBulletinConditionPrivateExtensions-Protocol.h>

@class MKFTimePeriodBulletinConditionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFBulletinRegistration, MKFBulletinTimeSpecification;

@interface _MKFTimePeriodBulletinCondition <MKFTimePeriodBulletinCondition, MKFTimePeriodBulletinConditionPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000002a3392
+ (id)backingModelProtocol;	// IMP=0x00000000002a3381
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000002a32cb
+ (id)fetchRequest;	// IMP=0x0000000000b580de
- (void)removeStartElementObject:(id)arg1;	// IMP=0x00000000002a32af
- (void)addStartElementObject:(id)arg1;	// IMP=0x00000000002a3293
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002a3270
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002a324a
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002a3227
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002a3201
- (id)materializeOrCreateStartElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002a3177
- (void)removeEndElementObject:(id)arg1;	// IMP=0x00000000002a315b
- (void)addEndElementObject:(id)arg1;	// IMP=0x00000000002a313f
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002a311c
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002a30f6
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002a30d3
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002a30ad
- (id)materializeOrCreateEndElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002a3023
- (id)castIfTimePeriodBulletinCondition;	// IMP=0x00000000002a301a
@property(readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFBulletinRegistration> bulletinRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> endElement; // @dynamic endElement;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> startElement; // @dynamic startElement;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
