//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface TRIPBCodedInputStream : NSObject
{
    struct TRIPBCodedInputStreamState state_;	// 8 = 0x8
    NSData *buffer_;	// 56 = 0x38
}

+ (id)streamWithData:(id)arg1;	// IMP=0x000000000002273d
- (long long)readSInt64;	// IMP=0x0000000000022f18
- (int)readSInt32;	// IMP=0x0000000000022efe
- (long long)readSFixed64;	// IMP=0x0000000000022ecc
- (int)readSFixed32;	// IMP=0x0000000000022e9b
- (int)readEnum;	// IMP=0x0000000000022e8d
- (unsigned int)readUInt32;	// IMP=0x0000000000022e7f
- (id)readBytes;	// IMP=0x0000000000022e69
- (void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4;	// IMP=0x0000000000022dba
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x0000000000022d16
- (void)readUnknownGroup:(int)arg1 message:(id)arg2;	// IMP=0x0000000000022c99
- (void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3;	// IMP=0x0000000000022c17
- (id)readString;	// IMP=0x0000000000022c01
- (_Bool)readBool;	// IMP=0x0000000000022bed
- (unsigned int)readFixed32;	// IMP=0x0000000000022bbc
- (unsigned long long)readFixed64;	// IMP=0x0000000000022b8a
- (int)readInt32;	// IMP=0x0000000000022b7c
- (long long)readInt64;	// IMP=0x0000000000022b6e
- (unsigned long long)readUInt64;	// IMP=0x0000000000022b60
- (float)readFloat;	// IMP=0x0000000000022b2d
- (double)readDouble;	// IMP=0x0000000000022afa
- (void)popLimit:(unsigned long long)arg1;	// IMP=0x0000000000022af0
- (unsigned long long)pushLimit:(unsigned long long)arg1;	// IMP=0x0000000000022ab3
- (unsigned long long)position;	// IMP=0x0000000000022aa9
- (_Bool)isAtEnd;	// IMP=0x0000000000022a90
- (void)skipMessage;	// IMP=0x0000000000022a4c
- (_Bool)skipField:(int)arg1;	// IMP=0x00000000000228d3
- (void)checkLastTagWas:(int)arg1;	// IMP=0x00000000000228b4
- (int)readTag;	// IMP=0x00000000000228a6
- (void)dealloc;	// IMP=0x000000000002286b
- (id)initWithData:(id)arg1;	// IMP=0x000000000002276c

@end
