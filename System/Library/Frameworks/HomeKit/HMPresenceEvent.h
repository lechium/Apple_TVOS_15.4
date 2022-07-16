//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMMutableArray, HMPresenceEventActivation, NSString;

@interface HMPresenceEvent <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSString *_presenceType;	// 16 = 0x10
    HMPresenceEventActivation *_activation;	// 24 = 0x18
    unsigned long long _presenceEventType;	// 32 = 0x20
    unsigned long long _presenceUserType;	// 40 = 0x28
    HMMutableArray *_observedUsers;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000202929
+ (id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3;	// IMP=0x0000000000202515
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000002023e3
+ (_Bool)isSupportedForHome:(id)arg1;	// IMP=0x00000000002023ca
- (void).cxx_destruct;	// IMP=0x00000000002022e1
@property(readonly, nonatomic) HMMutableArray *observedUsers; // @synthesize observedUsers=_observedUsers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002022ca
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002020d1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020203e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000201fab
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000201c3a
- (void)updateUsers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002014ab
- (void)updatePresenceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000201045
- (id)_serializeForAdd;	// IMP=0x0000000000200cf6
- (void)_updateFromDictionary:(id)arg1;	// IMP=0x00000000002008f5
- (id)users;	// IMP=0x00000000002008a5
- (void)setPresenceUserType:(unsigned long long)arg1;	// IMP=0x00000000002007da
@property(readonly, nonatomic) unsigned long long presenceUserType; // @synthesize presenceUserType=_presenceUserType;
- (void)setPresenceEventType:(unsigned long long)arg1;	// IMP=0x00000000002006b4
@property(readonly, nonatomic) unsigned long long presenceEventType; // @synthesize presenceEventType=_presenceEventType;
@property(retain, nonatomic) HMPresenceEventActivation *activation; // @synthesize activation=_activation;
@property(readonly, nonatomic) unsigned long long activationGranularity;
@property(retain, nonatomic) NSString *presenceType; // @synthesize presenceType=_presenceType;
- (id)description;	// IMP=0x00000000001fff8c
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4;	// IMP=0x00000000001ffe92
- (id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4;	// IMP=0x00000000001ffdd2
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3;	// IMP=0x00000000001ffc92
- (id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2;	// IMP=0x00000000001ffc79
- (id)initWithPresenceType:(id)arg1 users:(id)arg2;	// IMP=0x00000000001ffb71
- (id)initWithPresenceType:(id)arg1;	// IMP=0x00000000001ffb58

@end

