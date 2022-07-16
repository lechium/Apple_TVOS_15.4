//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary, NSString, NSURL;

@interface SYDAccount : NSObject
{
    _Bool _allowsCellular;	// 8 = 0x8
    _Bool _needsToReloadAccount;	// 9 = 0x9
    _Bool _registeredForNotifications;	// 10 = 0xa
    NSString *_invalidCredential;	// 16 = 0x10
    ACAccount *_account;	// 24 = 0x18
    NSDictionary *_accountProperties;	// 32 = 0x20
}

+ (id)enabledAccount;	// IMP=0x00400000000080ea
+ (id)primaryAccount;	// IMP=0x0010000000007c7e
+ (id)sharedAccountStore;	// IMP=0x0010000000007c65
- (void).cxx_destruct;	// IMP=0x00200000000092bf
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) _Bool needsToReloadAccount; // @synthesize needsToReloadAccount=_needsToReloadAccount;
@property(retain, nonatomic) NSDictionary *accountProperties; // @synthesize accountProperties=_accountProperties;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (id)description;	// IMP=0x0010000000009163
- (id)credentials;	// IMP=0x00100000000090c0
@property(retain, nonatomic) NSString *invalidCredential; // @synthesize invalidCredential=_invalidCredential;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)_deviceUnlockedSinceBootChangeNotification;	// IMP=0x0010000000008bf4
- (void)_passwordChangedNotification;	// IMP=0x0010000000008b62
- (void)_accountsChangedNotification;	// IMP=0x0010000000008655
- (void)_loadAccountIfNecessary;	// IMP=0x0010000000008297
- (id)init;	// IMP=0x0010000000007c11

@end
