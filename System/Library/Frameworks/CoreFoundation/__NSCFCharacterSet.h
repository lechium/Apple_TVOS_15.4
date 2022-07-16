//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c070
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000005bf7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c0a7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c073
- (Class)classForCoder;	// IMP=0x000000000005c04d
- (void)makeCharacterSetFast;	// IMP=0x000000000005c048
- (void)makeCharacterSetCompact;	// IMP=0x000000000005c043
- (void)invert;	// IMP=0x000000000005c03e
- (void)formIntersectionWithCharacterSet:(id)arg1;	// IMP=0x000000000005c036
- (void)formUnionWithCharacterSet:(id)arg1;	// IMP=0x000000000005c02e
- (void)removeCharactersInString:(id)arg1;	// IMP=0x000000000005c026
- (void)addCharactersInString:(id)arg1;	// IMP=0x000000000005c01e
- (void)removeCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005c013
- (void)addCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000005c008
- (id)invertedSet;	// IMP=0x000000000005bff1
- (id)bitmapRepresentation;	// IMP=0x000000000005bfda
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x000000000005bfc8
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x000000000005bfb5
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x000000000005bfa3
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x000000000005bf91
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bf87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bf7d
- (unsigned long long)retainCount;	// IMP=0x000000000005bf75
- (_Bool)_isDeallocating;	// IMP=0x000000000005bf65
- (_Bool)_tryRetain;	// IMP=0x000000000005bf54
- (oneway void)release;	// IMP=0x000000000005bf4f
- (id)retain;	// IMP=0x000000000005bf4a
- (unsigned long long)hash;	// IMP=0x000000000005bf45
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005bf22

@end

