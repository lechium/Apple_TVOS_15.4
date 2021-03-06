//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>
#import <UserNotifications/UNNotificationSecurityScopeProviding-Protocol.h>

@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding>
{
    UNNotificationContent *_content;	// 8 = 0x8
    UNNotificationTrigger *_trigger;	// 16 = 0x10
    unsigned long long _destinations;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ce2e
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x000000000000c814
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;	// IMP=0x000000000000c77b
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;	// IMP=0x000000000000c6e7
- (void).cxx_destruct;	// IMP=0x000000000000d1d6
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long destinations; // @synthesize destinations=_destinations;
@property(readonly, copy, nonatomic) UNNotificationTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) UNNotificationContent *content; // @synthesize content=_content;
- (unsigned long long)_notificationDestinationsForInterruptionLevel:(unsigned long long)arg1 inputDestinations:(unsigned long long)arg2;	// IMP=0x000000000000d184
- (void)leaveSecurityScope;	// IMP=0x000000000000d147
- (void)enterSecurityScope;	// IMP=0x000000000000d10a
- (void)removeSecurityScope;	// IMP=0x000000000000d0cd
- (void)addSecurityScope:(id)arg1;	// IMP=0x000000000000d05b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ce36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ce23
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000cb9c
@property(readonly) unsigned long long hash;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;	// IMP=0x000000000000c92d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

