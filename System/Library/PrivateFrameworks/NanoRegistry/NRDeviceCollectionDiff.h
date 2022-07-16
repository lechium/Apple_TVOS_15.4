//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRPBDeviceCollectionDiff, NSDictionary;

@interface NRDeviceCollectionDiff <NSFastEnumeration>
{
    NSDictionary *_diffDeviceDiffs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000047829
- (void).cxx_destruct;	// IMP=0x0000000000048908
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000488f6
- (id)description;	// IMP=0x000000000004852e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000484ad
- (unsigned long long)hash;	// IMP=0x000000000004834b
@property(readonly, nonatomic) NRPBDeviceCollectionDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000047d5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047cce
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047ab3
- (id)allPairingIDs;	// IMP=0x000000000004780c
- (unsigned long long)count;	// IMP=0x00000000000477ef
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000477d2
- (id)diffCollectionDiffForPairingID:(id)arg1;	// IMP=0x00000000000477b5
- (id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1;	// IMP=0x0000000000047713

@end

