//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CCDDeviceIdentitySupport : NSObject
{
}

+ (id)requestWithPayload:(id)arg1 URL:(id)arg2 privateKey:(id)arg3 clientCertificates:(id)arg4 outError:(id *)arg5;	// IMP=0x004000000000c8ad
+ (id)_signPayloadData:(id)arg1 withPrivateKey:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000000c64e
+ (void)retrieveClientCertificateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c5a3

@end

