//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSString, NSUUID;

@interface NCNotificationAlertOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    unsigned long long _suppression;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
    NSUUID *_activeModeUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015c1c
@property(readonly, copy, nonatomic) NSUUID *activeModeUUID; // @synthesize activeModeUUID=_activeModeUUID;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long suppression; // @synthesize suppression=_suppression;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000015be2
- (id)succinctDescription;	// IMP=0x0000000000015b92
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001593f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000158ef
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000158c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000158b6
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000156e4
@property(readonly, nonatomic) _Bool shouldSuppress; // @dynamic shouldSuppress;
- (id)initWithNotificationAlertOptions:(id)arg1;	// IMP=0x0000000000015608

// Remaining properties
@property(readonly) Class superclass;

@end
