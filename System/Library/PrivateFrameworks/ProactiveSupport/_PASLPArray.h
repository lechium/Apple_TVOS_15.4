//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSupport/NSFastEnumeration-Protocol.h>

@class _PASLPArrayContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPArray <NSFastEnumeration>
{
    id <_PASLPReaderProtocol> _reader;	// 8 = 0x8
    _PASLPArrayContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002477f
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024754
- (unsigned long long)count;	// IMP=0x0000000000024736
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002472b
- (id)init;	// IMP=0x0000000000024725
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024716
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000246c7
- (id)initWithLazyPlistReader:(id)arg1 context:(id)arg2;	// IMP=0x0000000000024536

@end

