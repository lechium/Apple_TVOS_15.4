//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionDeleting-Protocol.h>
#import <CoreDuet/_CDInteractionQuerying-Protocol.h>
#import <CoreDuet/_CDInteractionRecording-Protocol.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    _CDInteractionPolicies *_policies;	// 16 = 0x10
    _Bool _enforceDataLimits;	// 24 = 0x18
    _Bool _enforcePrivacy;	// 25 = 0x19
}

+ (id)interactionRecorder;	// IMP=0x00000000001214c4
- (void).cxx_destruct;	// IMP=0x0000000000123e9a
@property _Bool enforcePrivacy; // @synthesize enforcePrivacy=_enforcePrivacy;
@property _Bool enforceDataLimits; // @synthesize enforceDataLimits=_enforceDataLimits;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000123ce0
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000123c10
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 domainIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000123a28
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000123896
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001237c6
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 account:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001235de
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000123418
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012335e
- (void)deleteInteractionsWithBundleId:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001231df
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000122fe3
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000122f0a
- (void)deleteInteractionsMatchingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000122d66
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000122cac
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000122ae6
- (void)countContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000122967
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000012288e
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000122630
- (void)queryContactsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000012248c
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x0000000000122477
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001223bd
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001221f7
- (void)countInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000122078
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000121f9f
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000121d1c
- (void)queryInteractionsUsingPredicate:(id)arg1 synchronous:(_Bool)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000121b78
- (void)recordInteractions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000121ac3
- (_Bool)recordInteractions:(id)arg1;	// IMP=0x0000000000121a1c
- (_Bool)recordInteraction:(id)arg1;	// IMP=0x000000000012196c
- (_Bool)recordInteractions:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121670
- (void)dealloc;	// IMP=0x000000000012162e
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000000121530

@end
