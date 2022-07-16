//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDState;

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>
{
    DNDState *_previousState;	// 8 = 0x8
    DNDState *_state;	// 16 = 0x10
    unsigned long long _reason;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fc89
- (void).cxx_destruct;	// IMP=0x000000000000fecd
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) DNDState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) DNDState *previousState; // @synthesize previousState=_previousState;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fdae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fc91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fc7e
- (id)description;	// IMP=0x000000000000fb6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f8eb
- (unsigned long long)hash;	// IMP=0x000000000000f83d
- (id)initWithPreviousState:(id)arg1 state:(id)arg2 reason:(unsigned long long)arg3 source:(long long)arg4;	// IMP=0x000000000000f772

@end
