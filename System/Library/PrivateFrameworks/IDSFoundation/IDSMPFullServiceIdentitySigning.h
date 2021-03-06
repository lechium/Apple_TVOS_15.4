//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IDSMPFullServiceIdentitySigning
{
}

+ (id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001094e3
+ (id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001094cb
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x00000000001094db
- (id)publicServiceIdentitySigningWithError:(id *)arg1;	// IMP=0x00000000001094d3
@property(readonly, nonatomic) NSString *identityServiceTypeName;
@property(readonly, nonatomic) long long identityServiceType;

@end

