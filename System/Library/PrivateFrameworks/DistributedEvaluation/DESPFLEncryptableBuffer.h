//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData;

@interface DESPFLEncryptableBuffer : NSObject
{
    NSMutableData *_serializedData;	// 8 = 0x8
    unsigned long long _dataLengthVarintOffset;	// 16 = 0x10
    unsigned long long _mutableFloatsOffset;	// 24 = 0x18
    unsigned long long _ivOffset;	// 32 = 0x20
    unsigned long long _sizeOfDataTransport;	// 40 = 0x28
    unsigned long long _sizeOfDataTransportOffset;	// 48 = 0x30
    NSError *_encryptionError;	// 56 = 0x38
    _Bool _encryptionWasAttempted;	// 64 = 0x40
    _Bool _transportIsBfloat16;	// 65 = 0x41
    unsigned long long _count;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001b128
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)encryptedDataWithPublicKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a9bc
@property(readonly, nonatomic) float *mutableDataNumbers;
- (id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001a3b3

@end
