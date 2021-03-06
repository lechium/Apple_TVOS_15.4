//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol AMSPushHandlerDelegate;

@interface AMSPushConfiguration : NSObject
{
    NSString *_userNotificationExtensionId;	// 8 = 0x8
    NSSet *_enabledActionTypes;	// 16 = 0x10
    id <AMSPushHandlerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e1d6a
@property(nonatomic) __weak id <AMSPushHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *enabledActionTypes; // @synthesize enabledActionTypes=_enabledActionTypes;
@property(retain, nonatomic) NSString *userNotificationExtensionId; // @synthesize userNotificationExtensionId=_userNotificationExtensionId;
- (id)initWithEnabledActionTypes:(id)arg1;	// IMP=0x00000000001e1ca2

@end

