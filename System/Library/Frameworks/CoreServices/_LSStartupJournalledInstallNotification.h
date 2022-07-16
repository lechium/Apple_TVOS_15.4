//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/_LSStartupJournalledNotification-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _LSStartupJournalledInstallNotification : NSObject <_LSStartupJournalledNotification>
{
    _Bool _plugins;	// 8 = 0x8
    int _notification;	// 12 = 0xc
    NSArray *_proxies;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013492e
@property(readonly, nonatomic) _Bool plugins; // @synthesize plugins=_plugins;
@property(readonly, nonatomic) NSArray *proxies; // @synthesize proxies=_proxies;
@property(readonly, nonatomic) int notification; // @synthesize notification=_notification;
- (void)dispatchToObserver:(id)arg1 forInstallProgressService:(id)arg2;	// IMP=0x00000000001347a1
- (id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(_Bool)arg3;	// IMP=0x0000000000134718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

