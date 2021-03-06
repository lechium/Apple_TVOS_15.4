//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemWebDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceLimitAdTracking;	// 16 = 0x10
    NSNumber *_payloadSafariAllowAutoFill;	// 24 = 0x18
    NSNumber *_payloadSafariForceFraudWarning;	// 32 = 0x20
    NSNumber *_payloadSafariAllowJavaScript;	// 40 = 0x28
    NSNumber *_payloadSafariAllowPopups;	// 48 = 0x30
    NSNumber *_payloadSafariAcceptCookies;	// 56 = 0x38
    NSNumber *_payloadForceAuthenticationBeforeAutoFill;	// 64 = 0x40
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000c7a09
+ (id)buildWithIdentifier:(id)arg1 withForceLimitAdTracking:(id)arg2 withSafariAllowAutoFill:(id)arg3 withSafariForceFraudWarning:(id)arg4 withSafariAllowJavaScript:(id)arg5 withSafariAllowPopups:(id)arg6 withSafariAcceptCookies:(id)arg7 withForceAuthenticationBeforeAutoFill:(id)arg8;	// IMP=0x00000000000c77ad
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000c76a0
+ (id)allowedPayloadKeys;	// IMP=0x00000000000c75bb
+ (id)profileType;	// IMP=0x00000000000c75ae
+ (id)registeredIdentifier;	// IMP=0x00000000000c75a1
+ (id)registeredClassName;	// IMP=0x00000000000c7594
- (void).cxx_destruct;	// IMP=0x00000000000c82e4
@property(copy, nonatomic) NSNumber *payloadForceAuthenticationBeforeAutoFill; // @synthesize payloadForceAuthenticationBeforeAutoFill=_payloadForceAuthenticationBeforeAutoFill;
@property(copy, nonatomic) NSNumber *payloadSafariAcceptCookies; // @synthesize payloadSafariAcceptCookies=_payloadSafariAcceptCookies;
@property(copy, nonatomic) NSNumber *payloadSafariAllowPopups; // @synthesize payloadSafariAllowPopups=_payloadSafariAllowPopups;
@property(copy, nonatomic) NSNumber *payloadSafariAllowJavaScript; // @synthesize payloadSafariAllowJavaScript=_payloadSafariAllowJavaScript;
@property(copy, nonatomic) NSNumber *payloadSafariForceFraudWarning; // @synthesize payloadSafariForceFraudWarning=_payloadSafariForceFraudWarning;
@property(copy, nonatomic) NSNumber *payloadSafariAllowAutoFill; // @synthesize payloadSafariAllowAutoFill=_payloadSafariAllowAutoFill;
@property(copy, nonatomic) NSNumber *payloadForceLimitAdTracking; // @synthesize payloadForceLimitAdTracking=_payloadForceLimitAdTracking;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c80c1
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000c7f2d
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c7af0
- (id)assetReferences;	// IMP=0x00000000000c77a0
- (int)activationLevel;	// IMP=0x00000000000c7795
- (_Bool)mustBeSupervised;	// IMP=0x00000000000c778d
- (_Bool)multipleAllowed;	// IMP=0x00000000000c7785

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

