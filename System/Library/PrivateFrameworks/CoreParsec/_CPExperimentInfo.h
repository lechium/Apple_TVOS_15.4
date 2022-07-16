//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPExperimentInfo-Protocol.h>

@class NSData, NSString;

@interface _CPExperimentInfo : PBCodable <_CPExperimentInfo, NSSecureCoding>
{
    int _deploymentId;	// 8 = 0x8
    int _version;	// 12 = 0xc
    NSString *_namespaceId;	// 16 = 0x10
    NSString *_experimentId;	// 24 = 0x18
    NSString *_treatmentId;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004bc6c
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int deploymentId; // @synthesize deploymentId=_deploymentId;
@property(copy, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property(copy, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(copy, nonatomic) NSString *namespaceId; // @synthesize namespaceId=_namespaceId;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004b79f
- (void)writeTo:(id)arg1;	// IMP=0x000000000004b658
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004b64b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

