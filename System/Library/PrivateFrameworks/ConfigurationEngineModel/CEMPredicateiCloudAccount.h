//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMPredicateiCloudAccount <CEMRegisteredTypeProtocol>
{
    NSString *_payloadDSID;	// 24 = 0x18
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000976a6
+ (id)buildWithDSID:(id)arg1;	// IMP=0x0000000000097638
+ (id)allowedPayloadKeys;	// IMP=0x000000000009758a
+ (id)registeredIdentifier;	// IMP=0x000000000009757d
+ (id)registeredClassName;	// IMP=0x0000000000097570
- (void).cxx_destruct;	// IMP=0x0000000000097a37
@property(copy, nonatomic) NSString *payloadDSID; // @synthesize payloadDSID=_payloadDSID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009797f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000978c2
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000976e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

