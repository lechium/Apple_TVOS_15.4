//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFEncryptionOperation-Protocol.h>

@class NSString, _SFRSAKeySpecifier;

@interface SFRSAEncryptionOperation : NSObject <_SFEncryptionOperation>
{
    id _rsaEncryptionOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000012dad
+ (id)_defaultEncryptionOperation;	// IMP=0x0000000000012d3e
- (void).cxx_destruct;	// IMP=0x0000000000012fe0
@property(copy, nonatomic) _SFRSAKeySpecifier *encryptionKeySpecifier;
- (id)decrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012f85
- (id)encrypt:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012f7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012f30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012f2a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012efb
- (id)initWithKeySpecifier:(id)arg1;	// IMP=0x0000000000012e14
- (id)init;	// IMP=0x0000000000012db5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

