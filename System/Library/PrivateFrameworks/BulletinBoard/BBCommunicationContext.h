//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBContact, NSArray, NSString, NSURL;

@interface BBCommunicationContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _systemImage;	// 8 = 0x8
    _Bool _mentionsCurrentUser;	// 9 = 0x9
    _Bool _notifyRecipientAnyway;	// 10 = 0xa
    _Bool _replyToCurrentUser;	// 11 = 0xb
    NSString *_identifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_associatedObjectUri;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    BBContact *_sender;	// 48 = 0x30
    NSArray *_recipients;	// 56 = 0x38
    NSURL *_contentURL;	// 64 = 0x40
    NSString *_imageName;	// 72 = 0x48
    unsigned long long _recipientCount;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000049cd
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(_Bool)arg9 mentionsCurrentUser:(_Bool)arg10 notifyRecipientAnyway:(_Bool)arg11 replyToCurrentUser:(_Bool)arg12 recipientCount:(unsigned long long)arg13;	// IMP=0x0000000000004206
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 mentionsCurrentUser:(_Bool)arg8 notifyRecipientAnyway:(_Bool)arg9 replyToCurrentUser:(_Bool)arg10 recipientCount:(unsigned long long)arg11;	// IMP=0x00000000000040c8
+ (id)communicationContextWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7;	// IMP=0x0000000000003fb3
- (void).cxx_destruct;	// IMP=0x0000000000004e64
@property(readonly, nonatomic) unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(readonly, nonatomic, getter=isReplyToCurrentUser) _Bool replyToCurrentUser; // @synthesize replyToCurrentUser=_replyToCurrentUser;
@property(readonly, nonatomic) _Bool notifyRecipientAnyway; // @synthesize notifyRecipientAnyway=_notifyRecipientAnyway;
@property(readonly, nonatomic) _Bool mentionsCurrentUser; // @synthesize mentionsCurrentUser=_mentionsCurrentUser;
@property(readonly, nonatomic) _Bool systemImage; // @synthesize systemImage=_systemImage;
@property(readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) BBContact *sender; // @synthesize sender=_sender;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *associatedObjectUri; // @synthesize associatedObjectUri=_associatedObjectUri;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004b2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000049d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000049c2
- (id)description;	// IMP=0x000000000000492c
- (unsigned long long)hash;	// IMP=0x000000000000484c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000453d
- (id)_initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 associatedObjectUri:(id)arg3 displayName:(id)arg4 sender:(id)arg5 recipients:(id)arg6 contentURL:(id)arg7 imageName:(id)arg8 systemImage:(_Bool)arg9 mentionsCurrentUser:(_Bool)arg10 notifyRecipientAnyway:(_Bool)arg11 replyToCurrentUser:(_Bool)arg12 recipientCount:(unsigned long long)arg13;	// IMP=0x0000000000004374

@end

