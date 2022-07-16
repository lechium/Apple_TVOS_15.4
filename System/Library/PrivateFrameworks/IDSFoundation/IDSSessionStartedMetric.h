//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned int _clientType;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSNumber *_protocolVersionNumber;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c9be3
@property(readonly, nonatomic) unsigned int clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSNumber *protocolVersionNumber; // @synthesize protocolVersionNumber=_protocolVersionNumber;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned int)arg4;	// IMP=0x00000000000c9afa
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

