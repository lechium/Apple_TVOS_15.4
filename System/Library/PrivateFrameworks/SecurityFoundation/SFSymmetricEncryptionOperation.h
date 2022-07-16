//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, _SFSymmetricKeySpecifier;

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation>
{
    id _symmetricEncryptionOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011b35
+ (id)_defaultEncryptionOperation;	// IMP=0x0000000000011b23
+ (long long)_defaultEncryptionMode;	// IMP=0x0000000000011b1b
- (void).cxx_destruct;	// IMP=0x0000000000011dff
@property(copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property(nonatomic) long long mode;
- (id)encrypt:(id)arg1 withKey:(id)arg2 ivGenerator:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000011d88
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011d80
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000011d78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011d27
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011d21
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011cf2
- (id)initWithKeySpecifier:(id)arg1 mode:(long long)arg2;	// IMP=0x0000000000011bfb
- (id)initWithKeySpecifier:(id)arg1;	// IMP=0x0000000000011b99
- (id)init;	// IMP=0x0000000000011b3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

