//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionAdvising-Protocol.h>

@class NSError, NSXPCConnection;

@interface _CDInteractionAdvisor : NSObject <_CDInteractionAdvising>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)interactionAdvisor;	// IMP=0x0000000000022821
- (void).cxx_destruct;	// IMP=0x0000000000023a57
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;	// IMP=0x0000000000023895
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;	// IMP=0x0000000000023623
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;	// IMP=0x0000000000023398
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;	// IMP=0x0000000000023126
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;	// IMP=0x0000000000022eb4
- (id)adviseInteractionsUsingSettings:(id)arg1;	// IMP=0x0000000000022c60
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;	// IMP=0x000000000002299f
- (void)dealloc;	// IMP=0x000000000002295d
- (id)initWithServiceName:(id)arg1;	// IMP=0x000000000002288d

@end

