//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, NSURL, NSUUID, TUConversationActivitySession, TUConversationParticipant;

@interface TUConversationActivityEvent : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_sessionUUID;	// 8 = 0x8
    TUConversationParticipant *_originator;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    long long _queueItemType;	// 32 = 0x20
    NSString *_item;	// 40 = 0x28
    NSString *_localizedDescription;	// 48 = 0x30
    TUConversationActivitySession *_session;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a90c2
- (void).cxx_destruct;	// IMP=0x00000000000a96f1
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) TUConversationActivitySession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(retain, nonatomic) NSString *item; // @synthesize item=_item;
@property(nonatomic) long long queueItemType; // @synthesize queueItemType=_queueItemType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) TUConversationParticipant *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a93a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a90ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a8f64
- (unsigned long long)hash;	// IMP=0x00000000000a8e14
- (_Bool)isEqualToConversationActivityEvent:(id)arg1;	// IMP=0x00000000000a8ba3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a8b46
- (id)description;	// IMP=0x00000000000a8990
- (id)initWithSessionUUID:(id)arg1 originator:(id)arg2 type:(long long)arg3;	// IMP=0x00000000000a88ce

@end

