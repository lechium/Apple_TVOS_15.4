//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICAgeVerifier, ICUserIdentity, NSError, NSURL;

@interface ICAgeVerificationState : NSObject <NSCopying>
{
    long long _status;	// 8 = 0x8
    ICUserIdentity *_userIdentity;	// 16 = 0x10
    long long _treatment;	// 24 = 0x18
    NSURL *_verificationURL;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    ICAgeVerifier *_ageVerifier;	// 48 = 0x30
}

+ (id)_stateFromDictionaryRepresentation:(id)arg1 DSID:(id)arg2;	// IMP=0x00000000000deb30
+ (id)cachedStateForDSID:(id)arg1;	// IMP=0x00000000000de866
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 verificationURL:(id)arg3;	// IMP=0x00000000000de7d8
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2;	// IMP=0x00000000000de775
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000de6ef
+ (id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1;	// IMP=0x00000000000de69c
- (void).cxx_destruct;	// IMP=0x00000000000de65e
@property(readonly, copy, nonatomic) ICAgeVerifier *ageVerifier; // @synthesize ageVerifier=_ageVerifier;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *verificationURL; // @synthesize verificationURL=_verificationURL;
@property(readonly, nonatomic) long long treatment; // @synthesize treatment=_treatment;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (id)_dictionaryRepresentationWithDSID:(id)arg1;	// IMP=0x00000000000de3c8
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)description;	// IMP=0x00000000000de163
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ddc1e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ddab6
- (void)saveToUserDefaults;	// IMP=0x00000000000dd870
@property(readonly, nonatomic, getter=isDynamic) _Bool dynamic;
@property(readonly, nonatomic, getter=isExplicitContentAllowed) _Bool explicitContentAllowed;
- (id)initWithUserIdentity:(id)arg1 ageVerifier:(id)arg2 treatment:(long long)arg3 verificationURL:(id)arg4;	// IMP=0x00000000000dd735
- (id)_initWithUserIdentity:(id)arg1 status:(long long)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 error:(id)arg5;	// IMP=0x00000000000dd62a

@end

