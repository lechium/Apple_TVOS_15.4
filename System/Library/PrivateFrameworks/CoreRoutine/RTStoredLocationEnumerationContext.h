//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>
{
    RTStoredLocationEnumerationOptions *_options;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002f83
- (void).cxx_destruct;	// IMP=0x00000000000032b7
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options; // @synthesize options=_options;
- (id)description;	// IMP=0x0000000000003276
- (unsigned long long)hash;	// IMP=0x0000000000003200
- (_Bool)isEqualToContext:(id)arg1;	// IMP=0x000000000000310e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000030a6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002ffd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002f8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002f03
- (id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000002e61
- (id)initWithEnumerationOptions:(id)arg1;	// IMP=0x0000000000002e4d
- (id)init;	// IMP=0x0000000000002e0b

@end

