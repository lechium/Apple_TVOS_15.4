//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction
{
    UNNotification *_notification;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000064675e
@property(readonly, copy, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000646713
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000006466fc
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000646633
- (long long)UIActionType;	// IMP=0x0000000000646628
- (id)initWithNotification:(id)arg1;	// IMP=0x000000000064652d

@end

