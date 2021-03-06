//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMImageDeclaration <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;	// 16 = 0x10
    CEMAssetBaseReference *_payloadReference;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;	// IMP=0x000000000004ff73
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;	// IMP=0x000000000004fe2e
+ (id)allowedPayloadKeys;	// IMP=0x000000000004fd80
+ (id)registeredIdentifier;	// IMP=0x000000000004fd73
+ (id)registeredClassName;	// IMP=0x000000000004fd66
- (void).cxx_destruct;	// IMP=0x0000000000050553
@property(copy, nonatomic) CEMAssetBaseReference *payloadReference; // @synthesize payloadReference=_payloadReference;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005047a
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000502b7
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000500b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

