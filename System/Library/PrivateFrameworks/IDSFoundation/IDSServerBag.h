//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMConnectionMonitor, IMRemoteURLConnection, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableURLRequest, NSNumber, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface IDSServerBag : NSObject
{
    _Bool _allowSelfSignedCertificates;	// 8 = 0x8
    _Bool _allowUnsignedBags;	// 9 = 0x9
    BOOL _hashAlgorithm;	// 10 = 0xa
    int _trustStatus;	// 12 = 0xc
    int _token;	// 16 = 0x10
    IMConnectionMonitor *_connectionMonitor;	// 24 = 0x18
    NSURL *_bagURL;	// 32 = 0x20
    NSString *_apsEnvironmentName;	// 40 = 0x28
    NSDictionary *_bag;	// 48 = 0x30
    NSDictionary *_cachedBag;	// 56 = 0x38
    NSMutableURLRequest *_urlRequest;	// 64 = 0x40
    IMRemoteURLConnection *_remoteURLConnection;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_bagQueue;	// 80 = 0x50
    NSString *_cachedURLString;	// 88 = 0x58
    NSData *_certData;	// 96 = 0x60
    NSString *_cachedHash;	// 104 = 0x68
    NSDate *_loadDate;	// 112 = 0x70
    NSNumber *_cacheTime;	// 120 = 0x78
    unsigned long long _hasPairedDeviceState;	// 128 = 0x80
    NSData *_serverSignature;	// 136 = 0x88
    NSArray *_serverCerts;	// 144 = 0x90
    NSData *_serverGivenBag;	// 152 = 0x98
    CDUnknownBlockType _remoteURLCreationBlock;	// 160 = 0xa0
    CDUnknownBlockType _connectionMonitorCreationBlock;	// 168 = 0xa8
    NSMutableDictionary *_overrideValues;	// 176 = 0xb0
}

+ (id)_bagCreationLock;	// IMP=0x0000000000087c9c
+ (id)defaultBag;	// IMP=0x0000000000087c87
+ (id)sharedInstanceForBagType:(long long)arg1;	// IMP=0x0000000000087c37
+ (id)_sharedInstance;	// IMP=0x0000000000087c09
+ (id)_sharedInstanceForClass:(Class)arg1;	// IMP=0x0000000000087b59
+ (id)sharedInstance;	// IMP=0x0000000000087b3e
- (void).cxx_destruct;	// IMP=0x000000000008d1e9
@property(retain) NSMutableDictionary *overrideValues; // @synthesize overrideValues=_overrideValues;
@property(copy) CDUnknownBlockType connectionMonitorCreationBlock; // @synthesize connectionMonitorCreationBlock=_connectionMonitorCreationBlock;
@property(copy) CDUnknownBlockType remoteURLCreationBlock; // @synthesize remoteURLCreationBlock=_remoteURLCreationBlock;
@property BOOL hashAlgorithm; // @synthesize hashAlgorithm=_hashAlgorithm;
@property(retain) NSData *serverGivenBag; // @synthesize serverGivenBag=_serverGivenBag;
@property(retain) NSArray *serverCerts; // @synthesize serverCerts=_serverCerts;
@property(retain) NSData *serverSignature; // @synthesize serverSignature=_serverSignature;
@property unsigned long long hasPairedDeviceState; // @synthesize hasPairedDeviceState=_hasPairedDeviceState;
@property int token; // @synthesize token=_token;
@property _Bool allowUnsignedBags; // @synthesize allowUnsignedBags=_allowUnsignedBags;
@property _Bool allowSelfSignedCertificates; // @synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates;
@property(retain) NSNumber *_cacheTime; // @synthesize _cacheTime;
@property(retain) NSDate *_loadDate; // @synthesize _loadDate;
@property(retain, setter=_setCachedHash:) NSString *_cachedHash; // @synthesize _cachedHash;
@property(retain) NSData *_certData; // @synthesize _certData;
@property(setter=_setTrustStatus:) int _trustStatus; // @synthesize _trustStatus;
@property(retain, setter=_setCachedURLString:) NSString *_cachedURLString; // @synthesize _cachedURLString;
@property(retain) NSObject<OS_dispatch_queue> *_bagQueue; // @synthesize _bagQueue;
@property(retain) IMRemoteURLConnection *_remoteURLConnection; // @synthesize _remoteURLConnection;
@property(retain) NSMutableURLRequest *_urlRequest; // @synthesize _urlRequest;
@property(retain, setter=_setCachedBag:) NSDictionary *_cachedBag; // @synthesize _cachedBag;
@property(retain, setter=_setBag:) NSDictionary *_bag; // @synthesize _bag;
@property(retain) NSString *apsEnvironmentName; // @synthesize apsEnvironmentName=_apsEnvironmentName;
@property(retain) NSURL *bagURL; // @synthesize bagURL=_bagURL;
@property(retain) IMConnectionMonitor *_connectionMonitor; // @synthesize _connectionMonitor;
- (void)connectionMonitorDidUpdate:(id)arg1;	// IMP=0x000000000008cc93
- (_Bool)_allowedToLoadBag;	// IMP=0x000000000008ca04
@property(readonly) _Bool isServerAvailable;
- (_Bool)_forceAllowBagLoading;	// IMP=0x000000000008c972
- (id)_overrideValues;	// IMP=0x000000000008c92c
- (void)_setOverrideValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000008c7c9
- (void)_clearOverrideValues;	// IMP=0x000000000008c698
- (id)urlWithKey:(id)arg1;	// IMP=0x000000000008c5e1
- (id)objectForKey:(id)arg1;	// IMP=0x000000000008c3d3
@property(readonly) _Bool requiresIDSConnection;
@property(readonly) _Bool requiresIDSHost;
@property(readonly) _Bool isInDebilitatedMode;
@property(readonly) _Bool isLoaded;
@property(readonly) _Bool isLoading;
- (void)forceBagLoad;	// IMP=0x000000000008c2eb
- (void)startBagLoad;	// IMP=0x000000000008c222
- (void)_startBagLoad:(_Bool)arg1;	// IMP=0x000000000008b6ec
- (void)_cancelCurrentLoad;	// IMP=0x000000000008b606
- (void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(_Bool)arg3;	// IMP=0x000000000008b0d8
- (_Bool)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000008a918
- (_Bool)trustRefFromCertificates:(id)arg1 canReportFailure:(_Bool)arg2 trustRef:(struct __SecTrust **)arg3;	// IMP=0x000000000008a1b0
- (_Bool)_allowInvalid;	// IMP=0x000000000008a1a8
- (void)_invalidate;	// IMP=0x000000000008a194
- (_Bool)_loadFromDictionary:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000008a0ad
- (void)dealloc;	// IMP=0x000000000008a03a
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4 hashAlgorithm:(BOOL)arg5 remoteURLCreationBlock:(CDUnknownBlockType)arg6 connectionMonitorCreationBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000000089c13
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(_Bool)arg3 allowUnsignedBags:(_Bool)arg4 hashAlgorithm:(BOOL)arg5;	// IMP=0x0000000000089b1f
- (void)_generateURLRequest;	// IMP=0x000000000008983a
- (void)_bagExternallyReloaded;	// IMP=0x0000000000089776
- (void)_saveToCache;	// IMP=0x00000000000894cd
- (void)_saveCacheToPrefs;	// IMP=0x0000000000089411
- (void)__saveCacheToPrefs;	// IMP=0x0000000000088d4f
- (void)_loadFromCache;	// IMP=0x0000000000087de9
- (void)_clearCache;	// IMP=0x0000000000087cb1
- (id)_bagDefaultsDomain;	// IMP=0x0000000000087ca9
- (unsigned long long)_bagDomain;	// IMP=0x0000000000087c8f

@end

