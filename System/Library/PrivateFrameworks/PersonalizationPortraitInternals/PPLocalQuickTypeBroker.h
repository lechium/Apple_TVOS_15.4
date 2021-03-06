//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>
#import <PersonalizationPortraitInternals/PPFeedbackProcessing-Protocol.h>

@class PPQuickTypeConnectionsServant, PPQuickTypeContactsServant, PPQuickTypeEventsServant, PPQuickTypeNavigationServant, PPQuickTypeURLServant, _PASLock;

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>
{
    PPQuickTypeNavigationServant *_navigationServant;	// 8 = 0x8
    PPQuickTypeContactsServant *_contactsServant;	// 16 = 0x10
    PPQuickTypeEventsServant *_eventsServant;	// 24 = 0x18
    PPQuickTypeConnectionsServant *_connectionsServant;	// 32 = 0x20
    PPQuickTypeURLServant *_urlServant;	// 40 = 0x28
    _PASLock *_cacheLock;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000000c204c
- (void).cxx_destruct;	// IMP=0x00000000000c1548
- (id)filterFeedback:(id)arg1;	// IMP=0x00000000000c1112
- (void)processFeedback:(id)arg1;	// IMP=0x00000000000c0bc3
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0937
- (void)hibernateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c08ad
- (void)warmUpWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0823
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c079f
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c06f8
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bf926
- (id)init;	// IMP=0x00000000000bf751

@end

