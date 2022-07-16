//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFTimeOfDayTimeSpecification-Protocol.h>
#import <HomeKitDaemon/MKFTimeOfDayTimeSpecificationPrivateExtensions-Protocol.h>

@class MKFTimeOfDayTimeSpecificationDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFTimePeriodBulletinCondition;

@interface _MKFTimeOfDayTimeSpecification <MKFTimeOfDayTimeSpecification, MKFTimeOfDayTimeSpecificationPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000002ca106
+ (id)backingModelProtocol;	// IMP=0x00000000002ca0f5
+ (id)fetchRequest;	// IMP=0x0000000000b580be
- (id)castIfTimeOfDayTimeSpecification;	// IMP=0x00000000002ca0ec
@property(readonly, copy, nonatomic) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> endCondition;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *hour; // @dynamic hour;
@property(copy, nonatomic) NSNumber *minute; // @dynamic minute;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> startCondition;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

