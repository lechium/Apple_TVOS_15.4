//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNContactsEnvironment, CNUIAccountsFacade, CNUIContactsEnvironmentServicesProvider, CNUIFMFFacade, CNUIMeMonitor, PRPersonaStore, _DECConsumer;
@protocol CNSchedulerProvider, CNUIPRLikenessProviderCache;

@interface CNUIContactsEnvironment : NSObject
{
    long long _duetConsumer_once;	// 8 = 0x8
    long long _accountsFacade_once;	// 16 = 0x10
    long long _fmfFacade_once;	// 24 = 0x18
    long long _personaStore_once;	// 32 = 0x20
    long long _contactStore_once;	// 40 = 0x28
    long long _defaultSchedulerProvider_once;	// 48 = 0x30
    long long _likenessProviderCache_once;	// 56 = 0x38
    long long _meMonitor_once;	// 64 = 0x40
    CNUIContactsEnvironmentServicesProvider *_servicesProvider;	// 72 = 0x48
    CNUIAccountsFacade *_accountsFacade;	// 80 = 0x50
    CNUIFMFFacade *_fmfFacade;	// 88 = 0x58
    PRPersonaStore *_personaStore;	// 96 = 0x60
    id <CNSchedulerProvider> _defaultSchedulerProvider;	// 104 = 0x68
    CNContactStore *_contactStore;	// 112 = 0x70
    id <CNUIPRLikenessProviderCache> _likenessProviderCache;	// 120 = 0x78
    CNUIMeMonitor *_meMonitor;	// 128 = 0x80
    CNContactsEnvironment *_cnEnvironment;	// 136 = 0x88
}

+ (id)currentEnvironment;	// IMP=0x00000000000aa6af
- (void).cxx_destruct;	// IMP=0x00000000000aad6c
@property(readonly, nonatomic) CNContactsEnvironment *cnEnvironment; // @synthesize cnEnvironment=_cnEnvironment;
@property(retain, nonatomic) CNUIMeMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) id <CNUIPRLikenessProviderCache> likenessProviderCache; // @synthesize likenessProviderCache=_likenessProviderCache;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) id <CNSchedulerProvider> defaultSchedulerProvider; // @synthesize defaultSchedulerProvider=_defaultSchedulerProvider;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
@property(retain, nonatomic) CNUIAccountsFacade *accountsFacade; // @synthesize accountsFacade=_accountsFacade;
@property(readonly, nonatomic) CNUIContactsEnvironmentServicesProvider *servicesProvider; // @synthesize servicesProvider=_servicesProvider;
@property(readonly, nonatomic) _DECConsumer *duetConsumer;
- (id)initWithContactsEnvironment:(id)arg1;	// IMP=0x00000000000aa7df
- (id)init;	// IMP=0x00000000000aa785

@end
