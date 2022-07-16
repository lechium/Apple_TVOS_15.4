//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying>
{
    _Bool _is256Bit;	// 8 = 0x8
    unsigned long long _wireType;	// 16 = 0x10
}

@property _Bool is256Bit; // @synthesize is256Bit=_is256Bit;
@property unsigned long long wireType; // @synthesize wireType=_wireType;
- (id)initWithEncryptionType:(unsigned long long)arg1;	// IMP=0x000000000008be7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008be11
- (unsigned long long)hash;	// IMP=0x000000000008bdc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008bcff
@property(readonly) _Bool isIIV;
@property(readonly) _Bool isGCM;
@property(readonly) _Bool isAuthenticated;
- (id)description;	// IMP=0x000000000008bbc7
- (id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(_Bool)arg2;	// IMP=0x000000000008baf8
@property(readonly) unsigned int icvLength;
@property(readonly) unsigned int ivLength;
@property(readonly) unsigned int blockLength;
@property(readonly) unsigned int keyLength;
- (unsigned int)ccAlgorithm;	// IMP=0x00000000000a0bc0

@end

