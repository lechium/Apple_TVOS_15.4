//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@class NSSet;
@protocol CADCalCalendarInfoProvider, CADCalStoreInfoProvider, OS_dispatch_queue;

@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    id <CADCalStoreInfoProvider> _calStoreInfoProvider;	// 8 = 0x8
    id <CADCalCalendarInfoProvider> _calCalendarInfoProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 24 = 0x18
    NSSet *_cachedDelegateCalStoreInfos;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c265
@property(retain, nonatomic) NSSet *cachedDelegateCalStoreInfos; // @synthesize cachedDelegateCalStoreInfos=_cachedDelegateCalStoreInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(readonly, nonatomic) id <CADCalCalendarInfoProvider> calCalendarInfoProvider; // @synthesize calCalendarInfoProvider=_calCalendarInfoProvider;
@property(readonly, nonatomic) id <CADCalStoreInfoProvider> calStoreInfoProvider; // @synthesize calStoreInfoProvider=_calStoreInfoProvider;
- (id)_delegateCalStoreInfos;	// IMP=0x000000000004beea
- (void)reset;	// IMP=0x000000000004be5e
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;	// IMP=0x000000000004bb71
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x000000000004b8df
- (_Bool)isAccountManaged:(id)arg1;	// IMP=0x000000000004b8d7
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2;	// IMP=0x000000000004b7f1

@end

