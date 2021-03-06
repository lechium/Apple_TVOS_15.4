//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLProgramAddressTableMappedBinary-Protocol.h>

@class NSString;

@interface _MTLProgramAddressTableMappedBinary : NSObject <MTLProgramAddressTableMappedBinary>
{
    unsigned long long _mappedAddress;	// 8 = 0x8
    unsigned long long _mappedSize;	// 16 = 0x10
    unsigned long long _binaryUniqueId;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

@property(readonly) NSString *type; // @synthesize type=_type;
@property(readonly) unsigned long long binaryUniqueId; // @synthesize binaryUniqueId=_binaryUniqueId;
@property(readonly) unsigned long long mappedSize; // @synthesize mappedSize=_mappedSize;
@property(readonly) unsigned long long mappedAddress; // @synthesize mappedAddress=_mappedAddress;
- (id)initWithMappedAddress:(unsigned long long)arg1 mappedSize:(unsigned long long)arg2 binaryUniqueId:(unsigned long long)arg3 type:(id)arg4;	// IMP=0x00000000000305b3
- (id)initWithMappedAddress:(unsigned long long)arg1 mappedSize:(unsigned long long)arg2 binaryUniqueId:(unsigned long long)arg3;	// IMP=0x0000000000030555

@end

