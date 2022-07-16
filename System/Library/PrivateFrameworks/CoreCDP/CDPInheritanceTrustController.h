//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDPInheritanceTrustController : NSObject
{
}

- (void)validateAccessKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ab73
- (void)deleteInheritanceAccessKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000aabb
- (_Bool)isInheritanceAccessKeyValid:(id)arg1;	// IMP=0x000000000000aa59
- (void)recoverOctagonWithContext:(id)arg1 inheritanceKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a8a1
- (void)createInheritanceKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a564

@end
