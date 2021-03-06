//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSReceiverPreferences, NSSet;

@interface CSRecieverState : NSObject
{
    int _notifyToken;	// 8 = 0x8
    CSReceiverPreferences *_receiverPreferences;	// 16 = 0x10
    NSSet *_enabledBundleIdentifiers;	// 24 = 0x18
    NSSet *_disabledBundleIdentifiers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000004204a
- (void).cxx_destruct;	// IMP=0x000000000004237a
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
@property(readonly, nonatomic) NSSet *enabledBundleIdentifiers; // @synthesize enabledBundleIdentifiers=_enabledBundleIdentifiers;
@property(readonly, nonatomic) CSReceiverPreferences *receiverPreferences; // @synthesize receiverPreferences=_receiverPreferences;
- (_Bool)checkBundleIdentifier:(id)arg1;	// IMP=0x0000000000042272
- (void)_updateFromPreferences;	// IMP=0x000000000004209f
- (id)init;	// IMP=0x0000000000041fa5

@end

