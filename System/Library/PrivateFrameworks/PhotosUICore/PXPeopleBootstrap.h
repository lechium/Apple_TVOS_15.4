//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXPeopleBootstrap : NSObject
{
}

+ (void)_mergePerson:(id)arg1 context:(id)arg2 toPerson:(id)arg3;	// IMP=0x00000000007e3281
+ (void)_namePerson:(id)arg1 toContact:(id)arg2 withChangeRequest:(id)arg3;	// IMP=0x00000000007e3115
+ (void)_namePerson:(id)arg1 toString:(id)arg2 withChangeRequest:(id)arg3;	// IMP=0x00000000007e303e
+ (void)_namePerson:(id)arg1 context:(id)arg2 withChangeRequest:(id)arg3;	// IMP=0x00000000007e2c14
+ (void)_unfavoritePersonWithChangeRequest:(id)arg1;	// IMP=0x00000000007e2baf
+ (void)_favoritePersonWithChangeRequest:(id)arg1;	// IMP=0x00000000007e2b44
+ (void)_addToPeopleAlbumWithChangeRequest:(id)arg1;	// IMP=0x00000000007e2b32
+ (void)performBootstrapWithSourcePerson:(id)arg1 context:(id)arg2 synchronous:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000007e27ad
+ (struct CGSize)preferredBootstrapSize;	// IMP=0x00000000007e2797

@end

