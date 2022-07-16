//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinTimeSpecificationPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFBulletinTimeSpecificationDatabaseID, NSUUID;
@protocol MKFTimePeriodBulletinCondition;

@protocol MKFBulletinTimeSpecification <MKFModel, MKFBulletinTimeSpecificationPublicExtensions>
@property(readonly, copy, nonatomic) MKFBulletinTimeSpecificationDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> startCondition;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> endCondition;
- (void)removeStartConditionObject:(id <MKFTimePeriodBulletinCondition>)arg1;
- (void)addStartConditionObject:(id <MKFTimePeriodBulletinCondition>)arg1;
- (id <MKFTimePeriodBulletinCondition>)findStartConditionRelationWithModelID:(NSUUID *)arg1;
- (id <MKFTimePeriodBulletinCondition>)materializeOrCreateStartConditionRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (void)removeEndConditionObject:(id <MKFTimePeriodBulletinCondition>)arg1;
- (void)addEndConditionObject:(id <MKFTimePeriodBulletinCondition>)arg1;
- (id <MKFTimePeriodBulletinCondition>)findEndConditionRelationWithModelID:(NSUUID *)arg1;
- (id <MKFTimePeriodBulletinCondition>)materializeOrCreateEndConditionRelationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
@end

