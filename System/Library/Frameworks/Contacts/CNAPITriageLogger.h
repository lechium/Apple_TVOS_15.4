//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNAPITriageLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNAPITriageLogger : NSObject <CNAPITriageLogger>
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)threadEntryPoint;	// IMP=0x00000000000f91ec
+ (void)setThreadEntryPoint:(SEL)arg1;	// IMP=0x00000000000f9102
- (void).cxx_destruct;	// IMP=0x00000000000f9d4f
@property(readonly) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)request:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00000000000f9ce6
- (void)request:(id)arg1 willReturnAnchor:(id)arg2;	// IMP=0x00000000000f9b98
- (void)request:(id)arg1 spentTimeInClientCode:(double)arg2;	// IMP=0x00000000000f9a98
- (void)didReturnAllResultsForContactFetchRequest:(id)arg1;	// IMP=0x00000000000f99ed
- (void)clientStoppedEnumerationForRequest:(id)arg1;	// IMP=0x00000000000f9942
- (void)request:(id)arg1 containsContact:(id)arg2;	// IMP=0x00000000000f9844
- (void)request:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00000000000f9772
- (void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000f9600
- (void)willExecuteFetchRequest:(id)arg1;	// IMP=0x00000000000f92e3
- (id)init;	// IMP=0x00000000000f9274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

