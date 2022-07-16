//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASLPReaderProtocol-Protocol.h>

@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol>
{
    NSData *_backingData;	// 8 = 0x8
    CDStruct_601793be _mappedRegion;	// 16 = 0x10
    struct __CFAllocator *_releaseReaderDeallocator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000852c
- (id)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(id)arg2;	// IMP=0x0000000000008452
- (id)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;	// IMP=0x00000000000082d6
- (id)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;	// IMP=0x0000000000007f1f
- (id)objectForKey:(id)arg1 usingDictionaryContext:(id)arg2;	// IMP=0x00000000000078df
- (id)rootObjectWithErrMsg:(id *)arg1;	// IMP=0x00000000000078c4
- (id)initWithData:(id)arg1 sourcedFromPath:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000068bc
- (void)dealloc;	// IMP=0x000000000000687d
- (id)init;	// IMP=0x0000000000006877

@end
