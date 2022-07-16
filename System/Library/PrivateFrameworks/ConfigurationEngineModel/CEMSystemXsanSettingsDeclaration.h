//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMSystemXsanSettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSanName;	// 16 = 0x10
    NSArray *_payloadSanConfigURLs;	// 24 = 0x18
    NSArray *_payloadFsnameservers;	// 32 = 0x20
    NSString *_payloadSanAuthMethod;	// 40 = 0x28
    NSString *_payloadSharedSecret;	// 48 = 0x30
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSharedSecret:(id)arg5;	// IMP=0x00000000000cab1a
+ (id)buildWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSanAuthMethod:(id)arg5 withSharedSecret:(id)arg6;	// IMP=0x00000000000ca94d
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000ca908
+ (id)allowedPayloadKeys;	// IMP=0x00000000000ca839
+ (id)profileType;	// IMP=0x00000000000ca82c
+ (id)registeredIdentifier;	// IMP=0x00000000000ca81f
+ (id)registeredClassName;	// IMP=0x00000000000ca812
- (void).cxx_destruct;	// IMP=0x00000000000cb3be
@property(copy, nonatomic) NSString *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property(copy, nonatomic) NSString *payloadSanAuthMethod; // @synthesize payloadSanAuthMethod=_payloadSanAuthMethod;
@property(copy, nonatomic) NSArray *payloadFsnameservers; // @synthesize payloadFsnameservers=_payloadFsnameservers;
@property(copy, nonatomic) NSArray *payloadSanConfigURLs; // @synthesize payloadSanConfigURLs=_payloadSanConfigURLs;
@property(copy, nonatomic) NSString *payloadSanName; // @synthesize payloadSanName=_payloadSanName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb214
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000cb093
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cacac
- (id)assetReferences;	// IMP=0x00000000000ca940
- (int)activationLevel;	// IMP=0x00000000000ca938
- (_Bool)mustBeSupervised;	// IMP=0x00000000000ca930
- (_Bool)multipleAllowed;	// IMP=0x00000000000ca928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

