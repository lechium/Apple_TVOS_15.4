//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, NSUserDefaults;

@interface MorphunAssets : NSObject
{
    NSUserDefaults *subscriptionCache;	// 8 = 0x8
    NSMutableDictionary *subscriptionView;	// 16 = 0x10
    NSLock *subscriptionViewLock;	// 24 = 0x18
    NSString *subscriptionProcessKey;	// 32 = 0x20
    NSMutableDictionary *readyLanguages;	// 40 = 0x28
}

+ (id)blockingOnDemandDownloadForLocale:(id)arg1 withTimeout:(unsigned long long)arg2 withProgress:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002e6b
+ (id)blockingOnDemandDownloadForLanguageCode:(id)arg1 withTimeout:(unsigned long long)arg2 withProgress:(CDUnknownBlockType)arg3;	// IMP=0x00000000000029f4
+ (void)onDemandDownloadForLocale:(id)arg1 withProgress:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002962
+ (void)onDemandDownloadForLanguageCode:(id)arg1 withProgress:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000025fe
+ (void)removeAssetForLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002582
+ (void)removeAssetForLanguageCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002386
+ (id)blockingRemoveAssetForLocale:(id)arg1 withTimeout:(unsigned long long)arg2;	// IMP=0x000000000000231b
+ (id)blockingRemoveAssetForLanguageCode:(id)arg1 withTimeout:(unsigned long long)arg2;	// IMP=0x0000000000001d39
+ (id)getAssetPathForCurrentSiriLanguage;	// IMP=0x0000000000001b41
+ (id)getFactorNameForLocale:(id)arg1;	// IMP=0x0000000000001adb
+ (id)getFactorNameForLanguageCode:(id)arg1;	// IMP=0x0000000000001a62
+ (id)getAssetPathForLanguageCode:(id)arg1;	// IMP=0x00000000000015ce
+ (id)getAssetPathForLocale:(id)arg1;	// IMP=0x0000000000001568
+ (id)EmbeddedVersion;	// IMP=0x000000000000154f
+ (_Bool)isLocaleEmbedded:(id)arg1;	// IMP=0x00000000000014f5
+ (_Bool)isLanguageEmbedded:(id)arg1;	// IMP=0x0000000000001469
+ (id)EmbeddedLocales;	// IMP=0x0000000000001331
+ (id)EmbeddedLanguages;	// IMP=0x0000000000001318
+ (id)SupportedLocales;	// IMP=0x00000000000011fb
+ (id)SupportedLanguages;	// IMP=0x00000000000011e7
+ (id)MorphunDomain;	// IMP=0x00000000000011d3
+ (id)getCurrentNamespaceName;	// IMP=0x00000000000011b0
+ (long long)getCurrentNamespace;	// IMP=0x00000000000011a0
+ (void)setTrialNamespaceToUse:(long long)arg1;	// IMP=0x0000000000001190
+ (_Bool)validateLanguageCode:(id)arg1;	// IMP=0x000000000000345f
+ (id)getAssetForLanguageCode:(id)arg1;	// IMP=0x0000000000003368
+ (id)getTRINamespaceName:(long long)arg1;	// IMP=0x000000000000334d
+ (id)getTRIClient;	// IMP=0x0000000000003274
+ (void)registerForTRINamespaceUpdates;	// IMP=0x000000000000301f
+ (void)MorphunAssetsLazyInitIfNeeded;	// IMP=0x0000000000002fdd
+ (id)subscriptionDbInitializerWithKey:(id)arg1;	// IMP=0x0000000000003f9f
+ (id)get;	// IMP=0x0000000000003f4a
- (void).cxx_destruct;	// IMP=0x0000000000002f94
@property(retain) NSMutableDictionary *readyLanguages; // @synthesize readyLanguages;
@property(retain, nonatomic) NSString *subscriptionProcessKey; // @synthesize subscriptionProcessKey;
@property(retain) NSLock *subscriptionViewLock; // @synthesize subscriptionViewLock;
@property(retain, nonatomic) NSMutableDictionary *subscriptionView; // @synthesize subscriptionView;
@property(retain, nonatomic) NSUserDefaults *subscriptionCache; // @synthesize subscriptionCache;
- (_Bool)validateLocale:(id)arg1;	// IMP=0x0000000000006c54
- (id)getMorphunDataPathForLocale:(id)arg1;	// IMP=0x0000000000006b6f
- (id)listSubscriptions;	// IMP=0x0000000000006b5d
- (_Bool)isAssetReadyForLocale:(id)arg1;	// IMP=0x0000000000006961
- (_Bool)isSubscribedToLocale:(id)arg1;	// IMP=0x00000000000067e4
- (void)unsubscribeFromLocale:(id)arg1;	// IMP=0x000000000000638f
- (void)subscribeToLocale:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005ea8
- (void)removeLanguageIfNeeded:(id)arg1;	// IMP=0x0000000000005958
- (void)downloadLanguageIfNeeded:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005061
- (id)referenceCountsFromSubscriptionView;	// IMP=0x0000000000004caf
- (void)writeSubscriptionView;	// IMP=0x0000000000004c38
- (void)readSubscriptionView;	// IMP=0x00000000000048ce
- (id)processSubscriptions;	// IMP=0x0000000000004821
- (id)init;	// IMP=0x000000000000427d
- (void)setLanguageReadinessFromTrial;	// IMP=0x000000000000405f

@end

