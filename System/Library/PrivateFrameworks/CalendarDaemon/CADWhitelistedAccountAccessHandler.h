//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@protocol CADACAccountsProvider;

__attribute__((visibility("hidden")))
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    id <CADACAccountsProvider> _accountsProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009a9d
@property(readonly, nonatomic) id <CADACAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
- (void)reset;	// IMP=0x0000000000009a8d
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;	// IMP=0x00000000000099c9
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x0000000000009929
- (_Bool)isAccountManaged:(id)arg1;	// IMP=0x00000000000097c9
- (id)initWithAccountsProvider:(id)arg1;	// IMP=0x000000000000975e

@end

