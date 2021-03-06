//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMAlertManager : NSObject
{
    NSMutableDictionary *_activeAlerts;	// 8 = 0x8
    NSMutableDictionary *_activeCFNotificationsByCategory;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000014a7e
- (void).cxx_destruct;	// IMP=0x000000000001593d
@property(retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // @synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory;
@property(retain, nonatomic) NSMutableDictionary *activeAlerts; // @synthesize activeAlerts=_activeAlerts;
- (id)_xpcTransactionNameFor:(id)arg1;	// IMP=0x00000000000158e2
- (void)activateAlert:(id)arg1;	// IMP=0x0000000000014c70
- (id)initSingleton;	// IMP=0x0000000000014b77
- (id)init;	// IMP=0x0000000000014b1f

@end

