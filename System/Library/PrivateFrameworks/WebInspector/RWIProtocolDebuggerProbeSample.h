//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample
{
}

@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *payload;
@property(nonatomic) double timestamp;
@property(nonatomic) int batchId;
@property(nonatomic) int sampleId;
@property(nonatomic) int probeId;
- (id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5;	// IMP=0x000000000004bcf8

@end

