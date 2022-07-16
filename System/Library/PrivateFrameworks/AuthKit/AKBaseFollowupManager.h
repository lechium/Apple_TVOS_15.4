//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AKFollowUpItemFactory, AKFollowUpProvider;

@interface AKBaseFollowupManager : NSObject
{
    id <AKFollowUpItemFactory> _factory;	// 8 = 0x8
    id <AKFollowUpProvider> _provider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004d4ef
- (id)_alignedInsertionCandidates:(id)arg1 withExistingItems:(id)arg2;	// IMP=0x000000000004ccb7
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ca63
- (_Bool)synchronizeFollowUpsWithServerPayload:(id)arg1 altDSID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004c23f
- (id)initWithFollowUpFactory:(id)arg1 provider:(id)arg2;	// IMP=0x000000000004c1a6

@end

