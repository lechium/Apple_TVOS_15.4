//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SHMatcher;

__attribute__((visibility("hidden")))
@interface SHManagedShazamCatalog
{
    _Bool _sendNotifications;	// 8 = 0x8
    id <SHMatcher> _proxyMatcher;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c8b2
@property(retain, nonatomic) id <SHMatcher> proxyMatcher; // @synthesize proxyMatcher=_proxyMatcher;
@property(nonatomic) _Bool sendNotifications; // @synthesize sendNotifications=_sendNotifications;
- (id)_createMatcher;	// IMP=0x000000000000c82c
- (void)stop;	// IMP=0x000000000000c792
- (void)startMatchingUntilResultFound;	// IMP=0x000000000000c70c
- (void)startMatchingUntilDeadline:(id)arg1;	// IMP=0x000000000000c662
- (void)startMatching;	// IMP=0x000000000000c5ae
- (void)startOneMatchAttempt;	// IMP=0x000000000000c528
- (id)_initWithInstallationID:(id)arg1;	// IMP=0x000000000000c4f9
- (id)init;	// IMP=0x000000000000c47e

@end

