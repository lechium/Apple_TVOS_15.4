//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKSubscription;

@interface CKSubscriptionInfo : NSObject
{
    CKSubscription *_subscription;	// 8 = 0x8
    CKDatabase *_database;	// 16 = 0x10
    CKContainer *_container;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003573d
- (id)description;	// IMP=0x00000000000356a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035547
- (unsigned long long)hash;	// IMP=0x0000000000035496

@end

