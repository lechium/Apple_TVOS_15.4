//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, SSSQLiteDatabase;

@interface SSWishlist : NSObject
{
    long long _accountIdentifier;	// 8 = 0x8
    SSSQLiteDatabase *_database;	// 16 = 0x10
}

+ (_Bool)existsForAccountIdentifier:(long long)arg1;	// IMP=0x0000000000162e42
@property(readonly, nonatomic) long long accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSNumber *lastSyncTime;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001631dc
- (_Bool)deleteBackingStore;	// IMP=0x0000000000162ea3
- (void)dealloc;	// IMP=0x0000000000162e07
- (id)initWithAccountIdentifier:(long long)arg1;	// IMP=0x0000000000162cb8

@end
