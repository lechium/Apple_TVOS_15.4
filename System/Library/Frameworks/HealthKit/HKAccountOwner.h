//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    HKMedicalDate *_birthDate;	// 16 = 0x10
}

+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000005691a
+ (_Bool)supportsEquivalence;	// IMP=0x00000000000564db
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000056345
+ (id)_newAccountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14 config:(CDUnknownBlockType)arg15;	// IMP=0x0000000000055f44
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 name:(id)arg13 birthDate:(id)arg14;	// IMP=0x0000000000055eed
+ (id)accountOwnerWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 name:(id)arg12 birthDate:(id)arg13;	// IMP=0x00000000000691d5
- (void).cxx_destruct;	// IMP=0x0000000000056934
@property(readonly, copy) HKAccountOwnerType *accountOwnerType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;	// IMP=0x0000000000056859
- (void)_setBirthDate:(id)arg1;	// IMP=0x0000000000056825
@property(readonly, copy) HKMedicalDate *birthDate;
- (void)_setName:(id)arg1;	// IMP=0x00000000000567dc
@property(readonly, copy) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000567bc
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x00000000000564e3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000563ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005634d
- (id)description;	// IMP=0x0000000000056277
- (id)init;	// IMP=0x00000000000561fd

@end
