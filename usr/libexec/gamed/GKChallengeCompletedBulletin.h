//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKChallengeCompletedBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000002af70
- (void)handleAction:(id)arg1;	// IMP=0x004000000002d1de
- (unsigned long long)launchEventType;	// IMP=0x001000000002d1d3
- (void)assembleBulletin;	// IMP=0x001000000002cbe9
- (void)notifyClient:(id)arg1;	// IMP=0x001000000002ca39
- (id)init;	// IMP=0x001000000002af41

@end

