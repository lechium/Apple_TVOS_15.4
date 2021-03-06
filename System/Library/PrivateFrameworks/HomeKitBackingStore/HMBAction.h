//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>
{
    _Bool _shouldUpdateClients;	// 8 = 0x8
}

+ (id)shouldUpdateClientsAction;	// IMP=0x0000000000040fb9
@property(nonatomic) _Bool shouldUpdateClients; // @synthesize shouldUpdateClients=_shouldUpdateClients;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040f39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040f2e
- (unsigned long long)hash;	// IMP=0x0000000000040f18
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040e7d

@end

