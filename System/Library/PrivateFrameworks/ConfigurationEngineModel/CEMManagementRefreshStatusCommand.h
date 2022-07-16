//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMManagementRefreshStatusCommand <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadIdentifiers;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000052e28
+ (id)buildWithIdentifier:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x0000000000052d20
+ (id)allowedPayloadKeys;	// IMP=0x0000000000052c6a
+ (id)registeredIdentifier;	// IMP=0x0000000000052c5d
+ (id)registeredClassName;	// IMP=0x0000000000052c50
- (void).cxx_destruct;	// IMP=0x00000000000531ed
@property(copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053166
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000530c4
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000052eff
- (int)executionLevel;	// IMP=0x0000000000052d15
- (_Bool)mustBeSupervised;	// IMP=0x0000000000052d0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

