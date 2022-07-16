//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMDeviceeSIMCellularPlanManagementCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadESIMServerURL;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2;	// IMP=0x000000000003a4fd
+ (id)buildWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2;	// IMP=0x000000000003a3f5
+ (id)allowedPayloadKeys;	// IMP=0x000000000003a342
+ (id)registeredIdentifier;	// IMP=0x000000000003a335
+ (id)registeredClassName;	// IMP=0x000000000003a328
- (void).cxx_destruct;	// IMP=0x000000000003a88f
@property(copy, nonatomic) NSString *payloadESIMServerURL; // @synthesize payloadESIMServerURL=_payloadESIMServerURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003a808
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000003a77d
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003a605
- (int)executionLevel;	// IMP=0x000000000003a3ed
- (_Bool)mustBeSupervised;	// IMP=0x000000000003a3e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

