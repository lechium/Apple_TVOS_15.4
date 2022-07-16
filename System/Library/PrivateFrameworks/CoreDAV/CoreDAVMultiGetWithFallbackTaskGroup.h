//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVContainerMultiGetSubmittable-Protocol.h>

@class CoreDAVContainerMultiGetTask, NSError, NSMutableSet, NSSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVMultiGetWithFallbackTaskGroup <CoreDAVContainerMultiGetSubmittable>
{
    _Bool _shouldIgnoreResponseErrors;	// 88 = 0x58
    _Bool _usingMultiGet;	// 89 = 0x59
    CoreDAVContainerMultiGetTask *_multiGetTask;	// 96 = 0x60
    CDUnknownBlockType _getBlock;	// 104 = 0x68
    NSMutableSet *_urls;	// 112 = 0x70
    NSMutableSet *_parsedContents;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000073323
@property(nonatomic) _Bool shouldIgnoreResponseErrors; // @synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors;
@property(readonly, nonatomic) NSSet *parsedContents;
@property(readonly, nonatomic) NSSet *deletedURLs;
@property(readonly, nonatomic) NSSet *missingURLs;
@property(readonly, nonatomic) NSError *error;
- (void)startTaskGroup;	// IMP=0x0000000000072e3c
- (void)_fetchOneItem;	// IMP=0x000000000007295d
- (void)_switchToSingleGetMode;	// IMP=0x0000000000072921
- (void)_configureAndSubmitTask:(id)arg1;	// IMP=0x000000000007284c
- (id)initWithURLs:(id)arg1 multiGetBlock:(CDUnknownBlockType)arg2 getBlock:(CDUnknownBlockType)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;	// IMP=0x0000000000072733

// Remaining properties
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) id <CoreDAVTaskManager> taskManager;
@property(nonatomic) double timeoutInterval;

@end

