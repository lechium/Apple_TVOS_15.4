//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPFragmentationPacket : HMFObject
{
    unsigned short _transactionIdentifier;	// 8 = 0x8
    unsigned int _length;	// 12 = 0xc
    unsigned int _offset;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000122e56
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(readonly, nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
- (id)serialize;	// IMP=0x0000000000122ce6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000122c36
- (unsigned long long)hash;	// IMP=0x0000000000122bf9
- (id)description;	// IMP=0x0000000000122b06
- (id)debugDescription;	// IMP=0x0000000000122a0b
- (id)shortDescription;	// IMP=0x00000000001229d7
- (id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4;	// IMP=0x000000000012292e
- (id)initWithFragmentedPacketData:(id)arg1;	// IMP=0x00000000001224d4
- (id)init;	// IMP=0x000000000012242c

@end

