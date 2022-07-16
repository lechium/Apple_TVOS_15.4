//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSSet, NSString, NSURL;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;	// 8 = 0x8
    _Bool _shouldCaptureAudioInUIProcess;	// 192 = 0xc0
}

@property(nonatomic) _Bool shouldCaptureAudioInUIProcess; // @synthesize shouldCaptureAudioInUIProcess=_shouldCaptureAudioInUIProcess;
@property(readonly) struct Object *_apiObject;
@property(nonatomic) _Bool configureJSCForTesting;
@property(copy, nonatomic) NSString *customWebContentServiceBundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029dd24
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool shouldTakeUIBackgroundAssertion;
@property(nonatomic) _Bool alwaysRunsAtBackgroundPriority;
@property(copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property(nonatomic, getter=isJITEnabled) _Bool JITEnabled;
@property(nonatomic) _Bool usesSingleWebProcess;
@property(nonatomic) _Bool pageCacheEnabled;
@property(nonatomic) _Bool processSwapsOnNavigationWithinSameNonHTTPFamilyProtocol;
@property(nonatomic) _Bool processSwapsOnWindowOpenWithOpener;
@property(nonatomic) _Bool alwaysKeepAndReuseSwappedProcesses;
@property(nonatomic) _Bool usesWebProcessCache;
@property(nonatomic) _Bool prewarmsProcessesAutomatically;
@property(nonatomic) _Bool processSwapsOnNavigation;
@property(nonatomic) CDStruct_6ad76789 presentingApplicationProcessToken;
@property(nonatomic) int presentingApplicationPID;
@property(copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property(copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property(copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property(copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property(nonatomic) _Bool shouldThrowExceptionForGlobalConstantRedeclaration;
@property(nonatomic) _Bool attrStyleEnabled;
@property(nonatomic) _Bool ignoreSynchronousMessagingTimeoutsForTesting;
@property(nonatomic) _Bool diskCacheSpeculativeValidationEnabled;
@property(nonatomic) long long diskCacheSizeOverride;
@property(nonatomic) unsigned long long maximumProcessCount;
@property(copy, nonatomic) NSSet *customClassesForParameterCoder;
@property(copy, nonatomic) NSURL *injectedBundleURL;
- (void)dealloc;	// IMP=0x000000000029d05a
- (id)init;	// IMP=0x000000000029cffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

