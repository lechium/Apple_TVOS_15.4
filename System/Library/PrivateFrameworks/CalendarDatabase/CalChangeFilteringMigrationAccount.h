//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDatabase/CalMigrationAccount-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CalMigrationAccount;

@interface CalChangeFilteringMigrationAccount : NSObject <CalMigrationAccount>
{
    NSString *_accountTypeIdentifier;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    NSMutableDictionary *_modifiedPropertyValues;	// 24 = 0x18
    id <CalMigrationAccount> _backingAccount;	// 32 = 0x20
    NSString *_parentAccountIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001208c
@property(retain, nonatomic) NSString *parentAccountIdentifier; // @synthesize parentAccountIdentifier=_parentAccountIdentifier;
@property(readonly, nonatomic) id <CalMigrationAccount> backingAccount; // @synthesize backingAccount=_backingAccount;
@property(readonly, nonatomic) NSMutableDictionary *modifiedPropertyValues; // @synthesize modifiedPropertyValues=_modifiedPropertyValues;
@property(readonly, nonatomic) _Bool dirty;
@property(nonatomic) _Bool enabledForCalendarsDataClass;
@property(nonatomic) _Bool visible;
@property(retain, nonatomic) NSString *accountDescription;
- (void)setAuthenticationTypeNone;	// IMP=0x0000000000011c10
- (void)setAuthenticationTypeParent;	// IMP=0x0000000000011bc5
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000011b3f
- (id)accountTypeIdentifier;	// IMP=0x0000000000011b31
- (id)identifier;	// IMP=0x0000000000011b23
- (id)accountPropertyForKey:(id)arg1;	// IMP=0x0000000000011a4d
- (id)initWithAccountIdentifier:(id)arg1 accountTypeIdentifier:(id)arg2;	// IMP=0x000000000001199a
- (id)initWithBackingAccount:(id)arg1;	// IMP=0x00000000000118e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

