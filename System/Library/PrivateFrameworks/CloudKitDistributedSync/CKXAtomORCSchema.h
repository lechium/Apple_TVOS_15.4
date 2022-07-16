//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/CKXORCHelpers-Protocol.h>

@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>
{
    id <CKXORCHelpers> _implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000da5b3
@property(readonly, nonatomic) id <CKXORCHelpers> implementation; // @synthesize implementation=_implementation;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000da593
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da57d
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da567
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000da551
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000da53b
- (id)generateSchema;	// IMP=0x00000000000da525
- (id)initWithBinding:(id)arg1 formatVersion:(unsigned char)arg2;	// IMP=0x00000000000da38c

@end
