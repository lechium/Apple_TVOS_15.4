//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKBulletinService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000193c8b
+ (Class)interfaceClass;	// IMP=0x0010000000193c7a
- (void)sendRefreshContentsForDataTypeToAllClientProxy:(unsigned int)arg1;	// IMP=0x0020000000193c9e
- (_Bool)requiresAuthentication;	// IMP=0x0010000000193c96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

