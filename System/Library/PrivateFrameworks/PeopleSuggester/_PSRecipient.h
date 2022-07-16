//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface _PSRecipient : NSObject <NSSecureCoding>
{
    _Bool _familyHeuristic;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_handle;	// 24 = 0x18
    NSString *_handleString;	// 32 = 0x20
    long long _handleType;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    CNContact *_contact;	// 56 = 0x38
    NSString *_senderHandle;	// 64 = 0x40
    NSString *_givenName;	// 72 = 0x48
    NSString *_familyName;	// 80 = 0x50
    NSString *_mostRecentTransportBundleId;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000088c46
+ (id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2;	// IMP=0x0000000000088b20
- (void).cxx_destruct;	// IMP=0x000000000008944d
@property(copy, nonatomic) NSString *mostRecentTransportBundleId; // @synthesize mostRecentTransportBundleId=_mostRecentTransportBundleId;
@property(nonatomic) _Bool familyHeuristic; // @synthesize familyHeuristic=_familyHeuristic;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property long long handleType; // @synthesize handleType=_handleType;
@property(copy, nonatomic) NSString *handleString; // @synthesize handleString=_handleString;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000089206
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000088fc1
- (unsigned long long)hash;	// IMP=0x0000000000088f82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000088e85
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000088c4e
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 mostRecentTransportBundleId:(id)arg6;	// IMP=0x000000000008899a
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5;	// IMP=0x000000000008897e
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 mostRecentTransportBundleId:(id)arg4;	// IMP=0x0000000000088956
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4;	// IMP=0x0000000000088931
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3;	// IMP=0x0000000000088919

@end

