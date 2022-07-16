//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <NSCopying>
{
    _Bool _allowsAuthorizationWithPhotoKitEntitlement;	// 8 = 0x8
    long long _requiredAuthorization;	// 16 = 0x10
    NSArray *_requiredEntitlements;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000112a39
@property(copy, nonatomic) NSArray *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(nonatomic) _Bool allowsAuthorizationWithPhotoKitEntitlement; // @synthesize allowsAuthorizationWithPhotoKitEntitlement=_allowsAuthorizationWithPhotoKitEntitlement;
@property(nonatomic) long long requiredAuthorization; // @synthesize requiredAuthorization=_requiredAuthorization;
- (id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000112889
- (id)_verifyEntitlementsWithContext:(id)arg1;	// IMP=0x00000000001126ee
- (_Bool)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1;	// IMP=0x00000000001126c2
- (_Bool)_isAuthorizedForWriteOnlyWithContext:(id)arg1;	// IMP=0x0000000000112674
- (_Bool)_isAuthorizedForReadWriteWithContext:(id)arg1;	// IMP=0x000000000011265f
- (_Bool)_isAuthorizedViaTCCWithContext:(id)arg1;	// IMP=0x00000000001125fe
- (id)_verifyAuthorizationWithContext:(id)arg1;	// IMP=0x0000000000112570
- (void)refreshCachedAuthorizationsWithContext:(id)arg1;	// IMP=0x00000000001124e6
- (id)verifyPermissionsWithContext:(id)arg1;	// IMP=0x000000000011231f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001122f1
- (id)initWithPermissions:(id)arg1;	// IMP=0x00000000001121da

@end

