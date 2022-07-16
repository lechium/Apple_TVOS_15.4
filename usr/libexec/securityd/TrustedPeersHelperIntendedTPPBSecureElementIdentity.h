//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TPPBSecureElementIdentity;

__attribute__((visibility("hidden")))
@interface TrustedPeersHelperIntendedTPPBSecureElementIdentity : NSObject
{
    TPPBSecureElementIdentity *_secureElementIdentity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001bfd82
+ (id)intendedEmptyIdentity;	// IMP=0x00100000001bfd57
- (void).cxx_destruct;	// IMP=0x00200000001bfd47
@property(retain) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001bfcab
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001bfc1a
- (id)description;	// IMP=0x00100000001bfbae
- (id)initWithSecureElementIdentity:(id)arg1;	// IMP=0x00100000001bfb43

@end
