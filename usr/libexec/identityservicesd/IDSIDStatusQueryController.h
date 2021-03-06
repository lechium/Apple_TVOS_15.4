//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPeerIDManager, IMTimer, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol IDSIDStatusDependencyProvider, IMUserDefaults;

@interface IDSIDStatusQueryController : NSObject
{
    IMTimer *_purgeTimer;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
    NSMutableDictionary *_idStatusCache;	// 24 = 0x18
    NSMutableDictionary *_completionBlocks;	// 32 = 0x20
    NSMutableDictionary *_startQueryDateByTopLevelService;	// 40 = 0x28
    CDUnknownBlockType _purgeCancelBlock;	// 48 = 0x30
    CDUnknownBlockType _purgeEnqueueBlock;	// 56 = 0x38
    _Bool _loaded;	// 64 = 0x40
    NSMutableDictionary *_numQueriesThisHourByTopLevelService;	// 72 = 0x48
    NSMutableSet *_reportedRateLimitedThisHour;	// 80 = 0x50
    _Bool _allowProxyQueries;	// 88 = 0x58
    IDSPeerIDManager *_peerIDManager;	// 96 = 0x60
    id <IMUserDefaults> _userDefaults;	// 104 = 0x68
    id <IDSIDStatusDependencyProvider> _dependencyProvider;	// 112 = 0x70
    NSString *_plistCachePath;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0040000000408640
- (void).cxx_destruct;	// IMP=0x002000000041c300
@property(nonatomic) _Bool allowProxyQueries; // @synthesize allowProxyQueries=_allowProxyQueries;
@property(retain, nonatomic) NSString *plistCachePath; // @synthesize plistCachePath=_plistCachePath;
@property(retain, nonatomic) id <IDSIDStatusDependencyProvider> dependencyProvider; // @synthesize dependencyProvider=_dependencyProvider;
@property(retain, nonatomic) id <IMUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
- (void)_saveCache;	// IMP=0x001000000041be90
- (void)_wipeLegacyCache;	// IMP=0x001000000041bbb0
- (id)_loadLegacyCache;	// IMP=0x001000000041b970
- (void)_loadCache;	// IMP=0x001000000041b0f0
- (id)_plistFilePath;	// IMP=0x001000000041af00
- (void)_pruneExpiredStatusUnknownEntries;	// IMP=0x0010000000419a90
- (void)_loadIfNeeded;	// IMP=0x0010000000419a10
- (void)_setPurgeTimer;	// IMP=0x00100000004199c0
- (void)_flush;	// IMP=0x00100000004195c0
- (void)clearCache;	// IMP=0x0010000000418ef0
- (void)removeCompletionBlockForUniqueIdentifier:(id)arg1;	// IMP=0x0010000000418a80
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forUniqueIdentifier:(id)arg2;	// IMP=0x00100000004182c0
- (void)_sendIDStatusChanges:(id)arg1 forService:(id)arg2 URI:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000417a00
- (void)remoteDevicesForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000416c90
- (id)currentCacheForService:(id)arg1;	// IMP=0x00100000004167a0
- (id)currentCache;	// IMP=0x00100000004161f0
- (unsigned int)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 respectExpiry:(_Bool)arg4;	// IMP=0x00100000004151d0
- (unsigned int)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x0010000000415110
- (void)setCachedIDStatus:(unsigned int)arg1 ForID:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4;	// IMP=0x0010000000414630
- (void)requestIDStatusForID:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00100000004144a0
- (void)requestIDStatusForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 forceQuery:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x00100000004139d0
- (void)_lookupIDStatusForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 forceQuery:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x001000000040e800
- (_Bool)hasValidStatusForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x001000000040e260
- (id)_negativeTTLForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x001000000040e0b0
- (id)_validExpiryForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x001000000040df00
- (id)_lookupDateForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x001000000040dd50
- (id)_cachedResultsForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x001000000040d990
- (void)noteIncomingID:(id)arg1 fromService:(id)arg2;	// IMP=0x001000000040cee0
- (void)removeCachedEntriesForService:(id)arg1;	// IMP=0x001000000040cc30
- (unsigned int)_IDStatusForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x001000000040bd20
- (void)_updateCacheWithStatusUpdates:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 success:(_Bool)arg4 hadError:(_Bool)arg5 negativeCacheHints:(id)arg6;	// IMP=0x001000000040a080
- (void)dealloc;	// IMP=0x001000000040a000
- (id)init;	// IMP=0x0010000000409f10
- (id)initWithShouldAllowProxyQueries:(_Bool)arg1 peerIDManager:(id)arg2 userDefaults:(id)arg3 statusDepencencyProvider:(id)arg4;	// IMP=0x0010000000408700

@end

