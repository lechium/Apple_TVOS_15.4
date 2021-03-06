//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVOptionsTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, NSURL;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate>
{
    NSURL *_principalURL;	// 88 = 0x58
    NSString *_displayName;	// 96 = 0x60
    NSURL *_resourceID;	// 104 = 0x68
    NSSet *_emailAddresses;	// 112 = 0x70
    NSSet *_collections;	// 120 = 0x78
    NSSet *_principalSearchProperties;	// 128 = 0x80
    _Bool _isExpandPropertyReportSupported;	// 136 = 0x88
    _Bool _fetchPrincipalSearchProperties;	// 137 = 0x89
    _Bool _shouldIgnoreHomeSetOnDifferentHost;	// 138 = 0x8a
    NSMutableSet *_redirectHistory;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000024454
@property(nonatomic) _Bool shouldIgnoreHomeSetOnDifferentHost; // @synthesize shouldIgnoreHomeSetOnDifferentHost=_shouldIgnoreHomeSetOnDifferentHost;
@property(readonly, nonatomic) NSSet *principalSearchProperties; // @synthesize principalSearchProperties=_principalSearchProperties;
@property(nonatomic) _Bool fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;
@property(readonly, nonatomic) _Bool isExpandPropertyReportSupported; // @synthesize isExpandPropertyReportSupported=_isExpandPropertyReportSupported;
@property(readonly, nonatomic) NSSet *collections; // @synthesize collections=_collections;
@property(readonly, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) NSURL *resourceID; // @synthesize resourceID=_resourceID;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSURL *principalURL; // @synthesize principalURL=_principalURL;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000241b3
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;	// IMP=0x0000000000023f07
- (void)processPrincipalHeaders:(id)arg1;	// IMP=0x0000000000023d6a
- (void)coaxServerForPrincipalHeaders;	// IMP=0x0000000000023af4
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x0000000000023080
- (_Bool)forceOptionsRequest;	// IMP=0x0000000000023078
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000022f75
- (void)_setPropertiesFromParsedResponses:(id)arg1;	// IMP=0x00000000000227f0
- (void)startTaskGroup;	// IMP=0x0000000000022689
- (id)homeSet;	// IMP=0x000000000002267f
- (id)_copyAccountPropertiesPropFindElements;	// IMP=0x0000000000022534
- (void)taskGroupWillCancelWithError:(id)arg1;	// IMP=0x0000000000022448
@property(readonly, copy) NSString *description;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;	// IMP=0x0000000000022300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

