//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTPerfBaseMeasurementData-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MTPerfBaseMeasurementTransformation;

@interface MTPerfBaseMeasurement : NSObject <MTPerfBaseMeasurementData>
{
    NSMutableArray *_additionalData;	// 8 = 0x8
    NSArray *_eventData;	// 16 = 0x10
    NSMutableDictionary *_timestamps;	// 24 = 0x18
    NSMutableDictionary *_measurementSpecificData;	// 32 = 0x20
    id <MTPerfBaseMeasurementTransformation> _measurementTransformer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000032b2e
@property(nonatomic) __weak id <MTPerfBaseMeasurementTransformation> measurementTransformer; // @synthesize measurementTransformer=_measurementTransformer;
@property(retain, nonatomic) NSMutableDictionary *measurementSpecificData; // @synthesize measurementSpecificData=_measurementSpecificData;
@property(retain, nonatomic) NSMutableDictionary *timestamps; // @synthesize timestamps=_timestamps;
- (id)getAdditionalData;	// IMP=0x0000000000032a86
- (id)metricsData;	// IMP=0x0000000000032a15
- (id)record;	// IMP=0x00000000000329c5
- (void)addFieldsWithPromise:(id)arg1;	// IMP=0x00000000000329af
- (void)addFieldsWithDictionary:(id)arg1;	// IMP=0x0000000000032999
- (void)addFields:(id)arg1;	// IMP=0x00000000000327c3
- (id)initWithMeasurementTransformer:(id)arg1 eventData:(id)arg2;	// IMP=0x00000000000326bf
@property(readonly, copy, nonatomic) NSArray *eventData;
@property(readonly, copy, nonatomic) NSArray *additionalFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
