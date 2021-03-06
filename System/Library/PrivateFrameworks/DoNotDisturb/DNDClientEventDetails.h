//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDContactHandle, NSString;

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    unsigned long long _urgency;	// 32 = 0x20
    DNDContactHandle *_sender;	// 40 = 0x28
    NSString *_threadIdentifier;	// 48 = 0x30
    _Bool _notifyAnyway;	// 56 = 0x38
    unsigned long long _behavior;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000020dbd
- (void).cxx_destruct;	// IMP=0x000000000002116e
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) _Bool notifyAnyway; // @synthesize notifyAnyway=_notifyAnyway;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) DNDContactHandle *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) unsigned long long urgency; // @synthesize urgency=_urgency;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020f78
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020dc5
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020d8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020d84
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x0000000000020afa
- (id)redactedDescription;	// IMP=0x0000000000020ae3
- (id)description;	// IMP=0x0000000000020acf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020620
- (unsigned long long)hash;	// IMP=0x00000000000204da
@property(readonly, nonatomic) _Bool shouldAlwaysInterrupt; // @dynamic shouldAlwaysInterrupt;
- (id)_initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 urgency:(unsigned long long)arg4 sender:(id)arg5 threadIdentifier:(id)arg6 notifyAnyway:(_Bool)arg7 behavior:(unsigned long long)arg8;	// IMP=0x000000000002030c
- (id)_initWithDetails:(id)arg1;	// IMP=0x00000000000201c7
- (id)init;	// IMP=0x00000000000201b3

@end

