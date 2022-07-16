//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@class NSBundle, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol PKPlugIn;

@interface EXConcreteExtension : NSExtension
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    _Bool _observingHostAppStateChanges;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSDictionary *_attributes;	// 32 = 0x20
    NSDictionary *_infoDictionary;	// 40 = 0x28
    NSString *__localizedName;	// 48 = 0x30
    NSString *__localizedShortName;	// 56 = 0x38
    NSString *_extensionPointIdentifier;	// 64 = 0x40
    NSUUID *_connectionUUID;	// 72 = 0x48
    id <PKPlugIn> __plugIn;	// 80 = 0x50
    NSMutableDictionary *__extensionServiceConnections;	// 88 = 0x58
    NSMutableDictionary *__extensionExpirationIdentifiers;	// 96 = 0x60
    NSMutableDictionary *__extensionContexts;	// 104 = 0x68
    id __stashedPlugInConnection;	// 112 = 0x70
    CDUnknownBlockType _requestCompletionBlock;	// 120 = 0x78
    CDUnknownBlockType _requestCancellationBlock;	// 128 = 0x80
    CDUnknownBlockType _requestInterruptionBlock;	// 136 = 0x88
    CDUnknownBlockType __requestPostCompletionBlock;	// 144 = 0x90
    CDUnknownBlockType __requestPostCompletionBlockWithItems;	// 152 = 0x98
    NSBundle *__extensionBundle;	// 160 = 0xa0
    NSSet *__allowedErrorClasses;	// 168 = 0xa8
    long long _wantsDedicatedQueue;	// 176 = 0xb0
}

+ (id)globalStateQueueForExtension:(id)arg1;	// IMP=0x0000000000003785
+ (void)endMatchingExtensions:(id)arg1;	// IMP=0x000000000000370f
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003266
+ (void)extensionWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002f6b
+ (void)extensionWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002b9b
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000029f9
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000029e2
+ (void)extensionsWithMatchingAttributes:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000026a0
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002682
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000240f
+ (_Bool)_shouldLogExtensionDiscovery;	// IMP=0x0000000000002403
+ (void)initialize;	// IMP=0x000000000000230d
+ (_Bool)_evaluateActivationRule:(id)arg1 withDictionaryIfItMatchesActiveWebPageAlternative:(id)arg2 matchResult:(out long long *)arg3;	// IMP=0x0000000000017542
+ (_Bool)_evaluateActivationRule:(id)arg1 withInputItemsIfTheyMatchActiveWebPageAlternative:(id)arg2 matchResult:(out long long *)arg3;	// IMP=0x000000000001744f
+ (id)_dictionaryIncludingOnlyItemsWithRegisteredTypeIdentifier:(id)arg1 fromMatchingDictionary:(id)arg2;	// IMP=0x0000000000016fb5
+ (_Bool)_genericValuesMatchActiveWebPageAlternativeWithExtensionItems:(id)arg1 attachmentsLens:(CDUnknownBlockType)arg2 registeredTypeIdentifiersLens:(CDUnknownBlockType)arg3 isActiveWebPageAttachmentCheck:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016b35
+ (_Bool)_inputItemsMatchActiveWebPageAlternative:(id)arg1;	// IMP=0x00000000000169d5
+ (_Bool)_matchingDictionaryMatchesActiveWebPageAlternative:(id)arg1;	// IMP=0x00000000000167d9
+ (id)_inputItemsByApplyingActiveWebPageAlternative:(id)arg1 ifNeededByActivationRule:(id)arg2;	// IMP=0x0000000000016400
+ (id)predicateForActivationRule:(id)arg1;	// IMP=0x000000000001dda0
+ (_Bool)_evaluateActivationRuleWithoutWorkarounds:(id)arg1 withExtensionItemsRepresentation:(id)arg2;	// IMP=0x000000000001d5a1
+ (_Bool)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;	// IMP=0x000000000001d507
+ (void)initializeFiltering;	// IMP=0x000000000001d4d8
- (void).cxx_destruct;	// IMP=0x000000000000ccb8
@property(nonatomic) long long wantsDedicatedQueue; // @synthesize wantsDedicatedQueue=_wantsDedicatedQueue;
@property(nonatomic, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) _Bool observingHostAppStateChanges; // @synthesize observingHostAppStateChanges=_observingHostAppStateChanges;
@property(copy, nonatomic, setter=_setAllowedErrorClasses:) NSSet *_allowedErrorClasses; // @synthesize _allowedErrorClasses=__allowedErrorClasses;
@property(copy) CDUnknownBlockType _requestPostCompletionBlockWithItems; // @synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems;
@property(copy) CDUnknownBlockType _requestPostCompletionBlock; // @synthesize _requestPostCompletionBlock=__requestPostCompletionBlock;
- (void)setRequestInterruptionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cbf5
- (CDUnknownBlockType)requestInterruptionBlock;	// IMP=0x000000000000cbe4
- (void)setRequestCancellationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cbd3
- (CDUnknownBlockType)requestCancellationBlock;	// IMP=0x000000000000cbc2
- (void)setRequestCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cbb1
- (CDUnknownBlockType)requestCompletionBlock;	// IMP=0x000000000000cba0
@property(retain) id _stashedPlugInConnection; // @synthesize _stashedPlugInConnection=__stashedPlugInConnection;
@property(retain, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // @synthesize _extensionContexts=__extensionContexts;
@property(retain, nonatomic, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary *_extensionExpirationIdentifiers; // @synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers;
@property(retain, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // @synthesize _extensionServiceConnections=__extensionServiceConnections;
@property(retain, setter=_setPlugIn:) id <PKPlugIn> _plugIn; // @synthesize _plugIn=__plugIn;
@property(copy, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
- (id)extensionPointIdentifier;	// IMP=0x000000000000cab0
@property(readonly, copy) NSString *_localizedShortName; // @synthesize _localizedShortName=__localizedShortName;
@property(readonly, copy) NSString *_localizedName; // @synthesize _localizedName=__localizedName;
- (id)infoDictionary;	// IMP=0x000000000000ca73
- (id)attributes;	// IMP=0x000000000000ca62
- (id)version;	// IMP=0x000000000000ca51
- (id)identifier;	// IMP=0x000000000000ca40
- (void)_hostDidBecomeActiveNote:(id)arg1;	// IMP=0x000000000000c802
- (void)_hostWillResignActiveNote:(id)arg1;	// IMP=0x000000000000c5c4
- (void)_hostDidEnterBackgroundNote:(id)arg1;	// IMP=0x000000000000c386
- (void)_hostWillEnterForegroundNote:(id)arg1;	// IMP=0x000000000000c0bc
- (void)_dropAssertion;	// IMP=0x000000000000be83
- (id)extensionContexts;	// IMP=0x000000000000be04
- (void)_kill:(int)arg1;	// IMP=0x000000000000bcfe
- (void)_safelyEndUsingRequestWithPKUUID:(id)arg1 processAssertion:(id)arg2 continuation:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b967
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b94e
- (_Bool)_beginUsingAndCreateExtensionAssertionWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b69a
- (void)_safelyBeginUsingWithRequest:(id)arg1 readyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b5a6
- (void)_safelyBeginUsingSynchronously:(_Bool)arg1 request:(id)arg2 readyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a519
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a447
- (int)_plugInProcessIdentifier;	// IMP=0x000000000000a3f8
- (id)_allowedItemPayloadClasses;	// IMP=0x000000000000a3a7
- (Class)_hostContextClass;	// IMP=0x000000000000a273
@property(readonly) double requestTeardownDelay;
- (_Bool)_wantsProcessPerRequest;	// IMP=0x000000000000a0b2
- (_Bool)_isSystemExtension;	// IMP=0x0000000000009fa3
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009e70
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009b92
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000955a
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009186
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008784
- (_Bool)_isPhotoServiceAccessGranted;	// IMP=0x0000000000008490
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;	// IMP=0x00000000000080ef
- (id)_extensionContextForUUID:(id)arg1;	// IMP=0x000000000000804f
@property(readonly, retain, nonatomic) NSBundle *_extensionBundle; // @synthesize _extensionBundle=__extensionBundle;
- (id)icons;	// IMP=0x0000000000007eaa
- (id)objectForInfoDictionaryKey:(id)arg1;	// IMP=0x0000000000007c58
- (void)_didCreateExtensionContext:(id)arg1;	// IMP=0x0000000000007991
- (int)pidForRequestIdentifier:(id)arg1;	// IMP=0x000000000000784f
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;	// IMP=0x000000000000718c
- (id)beginExtensionRequestWithInputItems:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007175
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000715e
- (id)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000713e
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000711e
- (id)_beginExtensionRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006c20
- (void)_beginExtensionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006355
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000006285
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 listenerEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000061b2
- (id)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000610d
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006066
- (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005cb2
- (void)_reallyBeginExtensionRequest:(id)arg1 synchronously:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005729
- (_Bool)makeExtensionContextAndXPCConnectionForRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004754
- (void)_reallyBeginExtensionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000043fb
- (id)_bareExtensionServiceConnection;	// IMP=0x000000000000410c
- (_Bool)attemptOptOut:(id *)arg1;	// IMP=0x00000000000040a2
- (_Bool)attemptOptIn:(id *)arg1;	// IMP=0x0000000000004054
- (_Bool)optedIn;	// IMP=0x0000000000004031
- (id)description;	// IMP=0x0000000000003f82
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003ea8
- (unsigned long long)hash;	// IMP=0x0000000000003e59
- (void)dealloc;	// IMP=0x0000000000003b2d
- (id)init;	// IMP=0x0000000000003ae9
- (id)_initWithPKPlugin:(id)arg1;	// IMP=0x0000000000003815
- (void)_resetExtensionState;	// IMP=0x000000000000d26d
- (void)_didShowNewExtensionIndicator;	// IMP=0x000000000000d16f
- (void)_didShowExtensionManagementInterface;	// IMP=0x000000000000d09f
- (_Bool)_isMarkedNew;	// IMP=0x000000000000cef7
@property(copy, nonatomic, getter=_extensionState, setter=_setExtensionState:) NSDictionary *_extensionState; // @dynamic _extensionState;

@end

