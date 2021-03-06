//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface IMMessagePartGUID : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_prefix;	// 8 = 0x8
    unsigned long long _partNumber;	// 16 = 0x10
    NSString *_messageGUID;	// 24 = 0x18
    NSString *_encodedMessagePartGUID;	// 32 = 0x20
    struct IMMessagePartRanges _ranges;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001febe
+ (id)encodeMessagePartGUID:(id)arg1 prefix:(id)arg2 partNumber:(unsigned long long)arg3;	// IMP=0x000000000001fcb4
+ (id)encodeMessagePartGUID:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000001fc98
- (void).cxx_destruct;	// IMP=0x000000000001ff0e
@property(readonly, nonatomic) struct IMMessagePartRanges ranges; // @synthesize ranges=_ranges;
@property(readonly, copy, nonatomic) NSString *encodedMessagePartGUID; // @synthesize encodedMessagePartGUID=_encodedMessagePartGUID;
@property(readonly, copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(readonly, nonatomic) unsigned long long partNumber; // @synthesize partNumber=_partNumber;
@property(readonly, copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fe5e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001fde5
- (id)description;	// IMP=0x000000000001fae8
@property(readonly, nonatomic) struct _NSRange messageGUIDRange;
@property(readonly, nonatomic) struct _NSRange partNumberRange;
@property(readonly, nonatomic) struct _NSRange prefixRange;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fa09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f903
- (id)initWithMessageGUID:(id)arg1 prefix:(id)arg2;	// IMP=0x000000000001f8e7
- (id)initWithEncodedMessagePartGUID:(id)arg1 messageGUID:(id)arg2 prefix:(id)arg3 partNumber:(unsigned long long)arg4 ranges:(struct IMMessagePartRanges)arg5;	// IMP=0x000000000001f658
- (id)initWithMessageGUID:(id)arg1 prefix:(id)arg2 partNumber:(unsigned long long)arg3;	// IMP=0x000000000001f5b7
- (_Bool)decodeRangesWithEncodedGuid:(id)arg1 ranges:(struct IMMessagePartRanges *)arg2;	// IMP=0x000000000001f47b
- (id)initWithEncodedMessagePartGUID:(id)arg1;	// IMP=0x000000000001f288
- (id)init;	// IMP=0x000000000001f27a

@end

