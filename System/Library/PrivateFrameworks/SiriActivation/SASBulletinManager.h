//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/BBObserverDelegate-Protocol.h>

@class BBObserver, NSMutableDictionary, NSString, SASBulletinCache;
@protocol SASBulletinManagerDelegate;

@interface SASBulletinManager : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;	// 8 = 0x8
    SASBulletinCache *_bulletinCache;	// 16 = 0x10
    NSMutableDictionary *_bulletinsOnLockScreen;	// 24 = 0x18
    id <SASBulletinManagerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021818
@property(nonatomic) __weak id <SASBulletinManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;	// IMP=0x00000000000216a2
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;	// IMP=0x0000000000021590
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x0000000000021435
- (void)observer:(id)arg1 removeBulletin:(id)arg2;	// IMP=0x00000000000213bd
- (void)modifyBulletinCompletionWithBulletin:(id)arg1;	// IMP=0x00000000000212d1
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;	// IMP=0x00000000000210cb
- (void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2;	// IMP=0x0000000000020f71
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;	// IMP=0x0000000000020ea8
- (id)bulletinForIdentifier:(id)arg1;	// IMP=0x0000000000020e1a
- (id)bulletinsOnLockScreen;	// IMP=0x0000000000020e04
- (id)allBulletins;	// IMP=0x0000000000020db0
- (id)_displayNameForBulletin:(id)arg1;	// IMP=0x0000000000020d00
- (void)_bulletinsDidChange;	// IMP=0x0000000000020cb4
- (void)dealloc;	// IMP=0x0000000000020c5a
- (void)_setupObserver;	// IMP=0x0000000000020bfc
- (id)init;	// IMP=0x0000000000020b77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
