//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSCopying-Protocol.h>

@interface XRSpaceDataToken : NSObject <NSCopying>
{
    id _tag;	// 8 = 0x8
    unsigned long long _seq;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011a26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011a1b
- (id)initWithSpaceTag:(id)arg1 sequenceID:(unsigned long long)arg2;	// IMP=0x00000000000119a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011937
- (unsigned long long)hash;	// IMP=0x000000000001192d

@end
