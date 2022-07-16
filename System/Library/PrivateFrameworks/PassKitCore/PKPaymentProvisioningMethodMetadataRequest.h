//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest
{
    NSString *_productIdentifier;	// 16 = 0x10
    NSString *_provisioningMethod;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b92a5
@property(copy, nonatomic) NSString *provisioningMethod; // @synthesize provisioningMethod=_provisioningMethod;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002b90f9
- (id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2;	// IMP=0x00000000002b9032

@end

