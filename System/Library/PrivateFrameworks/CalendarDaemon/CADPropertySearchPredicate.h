//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKCustomPropertiesLoading-Protocol.h>

@class CADObjectID, NSArray, NSString;

@interface CADPropertySearchPredicate <EKCustomPropertiesLoading>
{
    NSArray *_propertiesToLoad;	// 16 = 0x10
    int _entityType;	// 24 = 0x18
    NSArray *_filters;	// 32 = 0x20
    NSArray *_calendarRowIDs;	// 40 = 0x28
    CADObjectID *_sourceID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039119
- (void).cxx_destruct;	// IMP=0x00000000000391b2
@property(readonly, nonatomic) CADObjectID *sourceID; // @synthesize sourceID=_sourceID;
@property(readonly, nonatomic) NSArray *calendarRowIDs; // @synthesize calendarRowIDs=_calendarRowIDs;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) NSArray *defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;	// IMP=0x0000000000039121
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039025
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038dd0
- (_Bool)validate;	// IMP=0x0000000000038ac6
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3 source:(id)arg4;	// IMP=0x00000000000389b0
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendars:(id)arg3;	// IMP=0x000000000003899b
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 source:(id)arg3;	// IMP=0x0000000000038983
- (id)initWithEntityType:(int)arg1 filters:(id)arg2 calendar:(id)arg3;	// IMP=0x0000000000038879
- (id)predicateFormat;	// IMP=0x000000000003973f
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000396a2
- (id)buildWhereClauseWithValues:(id)arg1 andTypes:(id)arg2;	// IMP=0x000000000003949f
- (id)extendWhereClauseWithCalendarOrSourceLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;	// IMP=0x0000000000039300
- (id)extendWhereClauseWithEntityTypeLimitation:(id)arg1 withValues:(id)arg2 andTypes:(id)arg3;	// IMP=0x0000000000039205

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
