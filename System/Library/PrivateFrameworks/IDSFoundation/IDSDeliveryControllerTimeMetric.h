//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric>
{
    double _timeToSend;	// 8 = 0x8
    long long _endpointCount;	// 16 = 0x10
    _Bool _usedPipeline;	// 24 = 0x18
    _Bool _usedMMCS;	// 25 = 0x19
    long long _responseCode;	// 32 = 0x20
}

@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) _Bool usedMMCS; // @synthesize usedMMCS=_usedMMCS;
@property(readonly, nonatomic) _Bool usedPipeline; // @synthesize usedPipeline=_usedPipeline;
@property(readonly, nonatomic) long long endpointCount; // @synthesize endpointCount=_endpointCount;
@property(readonly, nonatomic) double timeToSend; // @synthesize timeToSend=_timeToSend;
@property(readonly, nonatomic) unsigned short rtcType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(_Bool)arg4 usedMMCS:(_Bool)arg5 responseCode:(long long)arg6;	// IMP=0x00000000000f169f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
