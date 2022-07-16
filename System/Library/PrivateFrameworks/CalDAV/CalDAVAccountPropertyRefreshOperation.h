//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol CalDAVAccountPropertyRefreshDelegate, OS_dispatch_group;

@interface CalDAVAccountPropertyRefreshOperation
{
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;	// 88 = 0x58
    _Bool _fetchPrincipalSearchProperties;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000010dfe
@property(nonatomic) _Bool fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;	// IMP=0x00000000000106c4
- (void)_reallyRefreshProperties;	// IMP=0x00000000000104e0
- (void)refreshProperties;	// IMP=0x000000000001043a
- (void)sendLocallyChangedPropertiesIfNeeded;	// IMP=0x000000000000feb1
- (id)propPatchForProperty:(id)arg1 value:(id)arg2;	// IMP=0x000000000000fe09
- (id)initWithPrincipal:(id)arg1;	// IMP=0x000000000000fdb3

// Remaining properties
@property(nonatomic) id <CalDAVAccountPropertyRefreshDelegate> delegate; // @dynamic delegate;

@end

