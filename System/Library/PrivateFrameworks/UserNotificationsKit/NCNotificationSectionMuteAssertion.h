//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCNotificationMuteAssertion-Protocol.h>

@class NSString;

@interface NCNotificationSectionMuteAssertion : NSObject <NCNotificationMuteAssertion>
{
}

+ (id)sectionMuteAssertion;	// IMP=0x0000000000003dce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003e9c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003e31
- (unsigned long long)activeMuteAssertionLevelForThreadIdentifier:(id)arg1;	// IMP=0x0000000000003e26
- (id)_init;	// IMP=0x0000000000003df7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
