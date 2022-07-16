//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLMobilityWalkingBoutServiceProtocol;

@interface CLMobilityHealthKitWriter : NSObject
{
    id <CLMobilityWalkingBoutServiceProtocol> _delegate;	// 8 = 0x8
}

- (void)dataCollectorDidRequestCollectionThroughDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000948d2b
- (_Bool)areWalkingSteadinessNotificationsEnabled;	// IMP=0x0010000000948d23
- (_Bool)isWalkingSteadinessAvailable;	// IMP=0x0010000000948d1b
- (void)_writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;	// IMP=0x0010000000948d15
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x0010000000948d0f
- (void)writeToHealthKitType:(int)arg1 value:(double)arg2 startDate:(id)arg3 endDate:(id)arg4 deviceSide:(unsigned char)arg5;	// IMP=0x0010000000948d09
- (void)writeSteadinessEvent:(int)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000948d03
- (void)writeToHealthKitAppleWalkingSteadiness:(double)arg1 startDate:(id)arg2 endDate:(id)arg3 source:(id)arg4;	// IMP=0x0010000000948cfd
- (void)dealloc;	// IMP=0x0010000000948cce
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000948c91

@end
