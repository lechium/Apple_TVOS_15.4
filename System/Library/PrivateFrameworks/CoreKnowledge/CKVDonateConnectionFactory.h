//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/KVDonateServiceProvider-Protocol.h>

@class CKVDonationManager, KVDonateVersionLog, NSString;

@interface CKVDonateConnectionFactory : NSObject <KVDonateServiceProvider>
{
    CKVDonationManager *_donationManager;	// 8 = 0x8
    KVDonateVersionLog *_versionLog;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a2f1b
- (id)versionLog;	// IMP=0x00000000000a2f0d
- (id)makeXPCConnection:(id)arg1;	// IMP=0x00000000000a2eb0
- (id)makeConnection:(id)arg1;	// IMP=0x00000000000a2e77
- (id)initWithDonationManager:(id)arg1;	// IMP=0x00000000000a2d4c
- (id)init;	// IMP=0x00000000000a2d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
