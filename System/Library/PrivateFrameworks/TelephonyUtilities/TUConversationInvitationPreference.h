//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding>
{
    long long _handleType;	// 8 = 0x8
    long long _notificationStyles;	// 16 = 0x10
}

+ (id)incomingCallInvitationPreferences;	// IMP=0x000000000001e690
+ (id)letMeInResponseInvitationPreferences;	// IMP=0x000000000001e671
+ (id)standardInvitationPreferencesForLink;	// IMP=0x000000000001e652
+ (id)invitationPreferencesForAllHandlesWithStyles:(long long)arg1;	// IMP=0x000000000001e51e
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e3af
+ (long long)validateNotificationStyles:(long long)arg1;	// IMP=0x000000000001e0c1
@property(readonly, nonatomic) long long notificationStyles; // @synthesize notificationStyles=_notificationStyles;
@property(readonly, nonatomic) long long handleType; // @synthesize handleType=_handleType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e472
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e3b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e362
- (unsigned long long)hash;	// IMP=0x000000000001e326
- (_Bool)isEqualToInvitationPreference:(id)arg1;	// IMP=0x000000000001e2a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e244
- (id)description;	// IMP=0x000000000001e0d8
- (id)initWithHandleType:(long long)arg1 notificationStyles:(long long)arg2;	// IMP=0x000000000001e054

@end

