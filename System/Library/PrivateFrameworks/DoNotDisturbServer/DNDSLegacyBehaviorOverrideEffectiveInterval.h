//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSString, NSUUID;

@interface DNDSLegacyBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSSecureCoding>
{
    NSDateComponents *_startComponents;	// 8 = 0x8
    NSDateComponents *_endComponents;	// 16 = 0x10
    NSString *_calendarIdentifier;	// 24 = 0x18
    unsigned long long _repeatInterval;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000068a45
- (void).cxx_destruct;	// IMP=0x0000000000068d1b
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(readonly, copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy, nonatomic) NSDateComponents *endComponents; // @synthesize endComponents=_endComponents;
@property(readonly, copy, nonatomic) NSDateComponents *startComponents; // @synthesize startComponents=_startComponents;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000068bad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000068a4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000068a3a
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;	// IMP=0x00000000000688db

@end

