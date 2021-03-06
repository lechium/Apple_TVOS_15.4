//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFSigningOperation-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation>
{
    id _messageAuthenticationCodeOperationInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005117
+ (id)_defaultMacOperation;	// IMP=0x0000000000005105
- (void).cxx_destruct;	// IMP=0x0000000000005184
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000517c
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005174
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005162
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000515c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000512d
- (id)init;	// IMP=0x000000000000511f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier; // @dynamic signingKeySpecifier;
@property(readonly) Class superclass;

@end

