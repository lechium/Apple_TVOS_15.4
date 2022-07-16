//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GPBCodedInputStream : NSObject
{
    struct GPBCodedInputStreamState state_;	// 8 = 0x8
    NSData *buffer_;	// 56 = 0x38
}

+ (id)streamWithData:(id)arg1;	// IMP=0x000000000000ba36
- (long long)readSInt64;	// IMP=0x000000000000c131
- (int)readSInt32;	// IMP=0x000000000000c117
- (long long)readSFixed64;	// IMP=0x000000000000c0e5
- (int)readSFixed32;	// IMP=0x000000000000c0b4
- (int)readEnum;	// IMP=0x000000000000c0a6
- (unsigned int)readUInt32;	// IMP=0x000000000000c098
- (id)readBytes;	// IMP=0x000000000000c082
- (void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4;	// IMP=0x000000000000bfd3
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x000000000000bf2f
- (void)readUnknownGroup:(int)arg1 message:(id)arg2;	// IMP=0x000000000000beb2
- (void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3;	// IMP=0x000000000000be30
- (id)readString;	// IMP=0x000000000000be1a
- (_Bool)readBool;	// IMP=0x000000000000be05
- (unsigned int)readFixed32;	// IMP=0x000000000000bdd4
- (unsigned long long)readFixed64;	// IMP=0x000000000000bda2
- (int)readInt32;	// IMP=0x000000000000bd94
- (long long)readInt64;	// IMP=0x000000000000bd86
- (unsigned long long)readUInt64;	// IMP=0x000000000000bd78
- (float)readFloat;	// IMP=0x000000000000bd45
- (double)readDouble;	// IMP=0x000000000000bd12
- (void)popLimit:(unsigned long long)arg1;	// IMP=0x000000000000bd08
- (unsigned long long)pushLimit:(unsigned long long)arg1;	// IMP=0x000000000000bccb
- (unsigned long long)position;	// IMP=0x000000000000bcc1
- (_Bool)isAtEnd;	// IMP=0x000000000000bca8
- (void)skipMessage;	// IMP=0x000000000000bc64
- (_Bool)skipField:(int)arg1;	// IMP=0x000000000000bb4e
- (void)checkLastTagWas:(int)arg1;	// IMP=0x000000000000bb2f
- (int)readTag;	// IMP=0x000000000000bb21
- (void)dealloc;	// IMP=0x000000000000bae6
- (id)initWithData:(id)arg1;	// IMP=0x000000000000ba65

@end
