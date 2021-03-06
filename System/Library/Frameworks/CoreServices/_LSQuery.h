//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@interface _LSQuery : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _legacy;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000eb507
@property(nonatomic, getter=isLegacy) _Bool legacy; // @synthesize legacy=_legacy;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eb528
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000eb515
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000eb50f
- (unsigned long long)hash;	// IMP=0x00000000000eb4be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eb429
- (id)init;	// IMP=0x00000000000eb3ce
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x00000000000eb60e
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eb57b
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014ce6d
- (_Bool)_remoteResolutionIsExpensive;	// IMP=0x00000000000eb573
- (_Bool)_canResolveLocallyWithoutMappingDatabase;	// IMP=0x00000000000eb56b
- (id)_init;	// IMP=0x00000000000eb53c

@end

