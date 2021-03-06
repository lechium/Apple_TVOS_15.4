//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserActivity/NSCopying-Protocol.h>
#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _preferFileRep;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSNumber *_offset;	// 32 = 0x20
    long long _size;	// 40 = 0x28
    NSFileHandle *_dataFile;	// 48 = 0x30
    NSString *_typeHint;	// 56 = 0x38
    NSNumber *_index;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028ffa
- (void).cxx_destruct;	// IMP=0x0000000000029c4a
@property(copy) NSNumber *index; // @synthesize index=_index;
@property(copy) NSString *typeHint; // @synthesize typeHint=_typeHint;
@property _Bool preferFileRep; // @synthesize preferFileRep=_preferFileRep;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
@property long long size; // @synthesize size=_size;
@property(copy) NSNumber *offset; // @synthesize offset=_offset;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000002982e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000295fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029410
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029248
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029002

@end

