//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Symbolication/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding>
{
    NSMutableArray *_strings;	// 8 = 0x8
    void *_stringToIndexMapVoidPtr;	// 16 = 0x10
    void *_nodeToStringIndexMapVoidPtr;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0000000000028a58
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028a50
- (void).cxx_destruct;	// IMP=0x0000000000029dbf
- (void)enumerateHexAddressesInStrings:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029b84
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)arg1;	// IMP=0x000000000002959e
- (id)stringForNode:(unsigned int)arg1;	// IMP=0x0000000000029535
- (void)setString:(id)arg1 forNode:(unsigned int)arg2;	// IMP=0x00000000000294c1
- (unsigned int)_indexForString:(id)arg1;	// IMP=0x000000000002941f
- (unsigned int)uniquedStringCount;	// IMP=0x0000000000029409
- (unsigned int)count;	// IMP=0x00000000000293fc
- (id)description;	// IMP=0x0000000000029310
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028eb5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028bc5
- (void)dealloc;	// IMP=0x0000000000028b4e
- (id)init;	// IMP=0x0000000000028a96

@end

