//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUserDefaults;

@interface VSPreferencesInterface : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _lock;	// 16 = 0x10
}

+ (id)dictionaryRepresentationOfVoices:(id)arg1;	// IMP=0x0000000000035caf
+ (id)defaultInstance;	// IMP=0x0000000000035749
- (void).cxx_destruct;	// IMP=0x0000000000036c06
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSString *deviceUUID;
@property(retain, nonatomic) NSDate *lastTTSRequestDate;
@property(nonatomic) _Bool OOBNeedsToBeMeasured;
@property(retain, nonatomic) NSDate *OOBTriggeredDate;
- (void)removeSubscriptionsForAccessory:(id)arg1;	// IMP=0x000000000003690d
- (void)setSubscribedVoices:(id)arg1 forClientID:(id)arg2 accessoryID:(id)arg3;	// IMP=0x0000000000036728
- (id)subscribedVoicesForClientID:(id)arg1 accessoryID:(id)arg2;	// IMP=0x0000000000036133
- (void)migrateDefaults;	// IMP=0x00000000000357b5
- (void)dealloc;	// IMP=0x000000000003570f
- (id)initWithSuiteName:(id)arg1;	// IMP=0x0000000000035626

@end

