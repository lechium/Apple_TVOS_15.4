//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSMPFullDeviceIdentity
{
}

+ (id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f31e1
+ (id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f31d9
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x00000000000f31f9
- (id)publicDeviceIdentityWithError:(id *)arg1;	// IMP=0x00000000000f31f1
- (_Bool)purgeFromKeychain:(id *)arg1;	// IMP=0x00000000000f31e9

@end

