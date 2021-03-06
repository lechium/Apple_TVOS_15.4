//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMManagementTestMessageMessage <CEMRegisteredTypeProtocol>
{
    NSString *_payloadEcho;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithEcho:(id)arg1;	// IMP=0x0000000000056795
+ (id)buildWithEcho:(id)arg1;	// IMP=0x000000000005673f
+ (id)allowedPayloadKeys;	// IMP=0x000000000005669c
+ (id)registeredIdentifier;	// IMP=0x000000000005668f
+ (id)registeredClassName;	// IMP=0x0000000000056682
- (void).cxx_destruct;	// IMP=0x0000000000056a75
@property(copy, nonatomic) NSString *payloadEcho; // @synthesize payloadEcho=_payloadEcho;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000569ee
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000056963
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000567eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

