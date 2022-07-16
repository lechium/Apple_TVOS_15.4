//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskDelegate-Protocol.h>

@class NSString, NSURL;
@protocol CoreDAVContainerInfoSyncProvider;

@interface CoreDAVContainerInfoSyncTaskGroup <CoreDAVTaskDelegate>
{
    NSString *_previousSyncToken;	// 88 = 0x58
    NSURL *_containerURL;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005a2a1
- (id)copyContainerParserMappings;	// IMP=0x000000000005a288
- (Class)containerItemClass;	// IMP=0x000000000005a277
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000059830
- (void)startTaskGroup;	// IMP=0x00000000000595f7
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <CoreDAVContainerInfoSyncProvider> delegate;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;	// IMP=0x000000000005945c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

