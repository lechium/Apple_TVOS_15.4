//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSString;
@protocol SFDigestOperation, SFKeyDerivingOperation;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation>
{
    id _x963KeyDerivationOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000102ed
+ (long long)keySource;	// IMP=0x00000000000102e2
- (void).cxx_destruct;	// IMP=0x0000000000010561
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
@property(copy, nonatomic) id <SFKeyDerivingOperation> sharedSecretOperation;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000104ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010484
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001047e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001044f
- (id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2;	// IMP=0x00000000000103b1
- (id)initWithSharedSecretOperation:(id)arg1;	// IMP=0x000000000001034f
- (id)init;	// IMP=0x00000000000102f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
