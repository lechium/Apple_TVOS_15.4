//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaServices/MSVRandomSource-Protocol.h>
#import <MediaServices/NSCopying-Protocol.h>
#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSData;

@interface MSVARC4RandomSource : NSObject <MSVRandomSource, NSSecureCoding, NSCopying>
{
    struct MSVArc4State *_state;	// 8 = 0x8
    NSData *_seed;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017260
+ (id)sharedSource;	// IMP=0x0000000000017230
- (void).cxx_destruct;	// IMP=0x0000000000017220
@property(copy, nonatomic) NSData *seed; // @synthesize seed=_seed;
- (id)mutableBytesWithLength:(long long)arg1;	// IMP=0x00000000000170ce
- (id)bytesWithLength:(long long)arg1;	// IMP=0x0000000000016fdd
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;	// IMP=0x0000000000016ed8
- (void)dealloc;	// IMP=0x0000000000016d04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016c6e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016b3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016ae5
- (id)initWithSeed:(id)arg1;	// IMP=0x0000000000016a2f
- (id)init;	// IMP=0x00000000000169d5

@end

