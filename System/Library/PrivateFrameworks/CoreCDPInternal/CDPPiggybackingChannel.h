//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPSecureChannelProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy>
{
    CDPContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035407
- (id)_replyContextWithPakeData:(id)arg1;	// IMP=0x00000000000352a6
- (unsigned long long)approveriCloudKeychainState;	// IMP=0x000000000003529e
- (_Bool)approverBackupRecordsExist;	// IMP=0x0000000000035296
- (void)sendPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000350ad
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000035053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

