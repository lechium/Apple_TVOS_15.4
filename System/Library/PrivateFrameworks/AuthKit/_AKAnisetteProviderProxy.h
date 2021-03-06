//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAnisetteProvisioningClientProtocol-Protocol.h>

@class NSString;
@protocol AKAnisetteServiceProtocol;

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol>
{
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000599cc
@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000598dc
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005981e
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059767
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059692
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000595db
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000059570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

