//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLSecurity : NSObject
{
}

+ (_Bool)connectionIsEntitledForPhotoKit:(id)arg1;	// IMP=0x00000000000664c3
+ (_Bool)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(CDStruct_4c969caf)arg1;	// IMP=0x00000000000663b7
+ (_Bool)isEntitledForPhotoKit;	// IMP=0x0000000000066366
+ (_Bool)containsPhotoKitEntitlement:(id)arg1;	// IMP=0x000000000006634a
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;	// IMP=0x000000000006625a
+ (_Bool)connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00000000000661b2
+ (id)connection:(id)arg1 valueForEntitlement:(id)arg2;	// IMP=0x000000000006609f
+ (id)connection:(id)arg1 valuesForEntitlements:(id)arg2;	// IMP=0x0000000000065e1c
+ (_Bool)auditToken:(CDStruct_4c969caf)arg1 hasEntitlement:(id)arg2;	// IMP=0x0000000000065da4
+ (_Bool)secTask:(struct __SecTask *)arg1 hasEntitlement:(id)arg2;	// IMP=0x0000000000065cc6
+ (id)_secTask:(struct __SecTask *)arg1 grantedEntitlements:(id)arg2;	// IMP=0x0000000000065a71

@end

