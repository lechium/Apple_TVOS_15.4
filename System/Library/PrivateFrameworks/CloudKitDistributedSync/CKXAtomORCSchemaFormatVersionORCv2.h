//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/CKXORCHelpers-Protocol.h>

@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORCv2 : NSObject <CKXORCHelpers>
{
    CKXAtomBindingImplementation *_binding;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000da37c
@property(readonly, nonatomic) CKXAtomBindingImplementation *binding; // @synthesize binding=_binding;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)arg1;	// IMP=0x00000000000da287
- (unsigned long long)listColumnIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da1d3
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)arg1;	// IMP=0x00000000000da10f
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)arg1;	// IMP=0x00000000000da034
- (void)configureColumnsWithRootColumn:(void *)arg1;	// IMP=0x00000000000d9e62
- (id)generateSchema;	// IMP=0x00000000000d9ca9
- (id)initWithBinding:(id)arg1;	// IMP=0x00000000000d9c2a

@end

