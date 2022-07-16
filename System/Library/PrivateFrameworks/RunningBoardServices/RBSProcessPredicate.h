//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSProcessMatching-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, RBSProcessIdentity, RBSProcessPredicateImpl;

@interface RBSProcessPredicate : NSObject <RBSXPCSecureCoding, RBSProcessMatching>
{
    RBSProcessPredicateImpl *_predicate;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x000000000001613d
+ (id)predicateNotMatchingPredicate:(id)arg1;	// IMP=0x0000000000015da3
+ (id)predicateMatchingAnyPredicate:(id)arg1;	// IMP=0x0000000000015a8c
+ (id)predicateMatchingPredicates:(id)arg1;	// IMP=0x0000000000015775
+ (id)predicateMatching:(id)arg1;	// IMP=0x0000000000015675
+ (id)predicate;	// IMP=0x0000000000015663
+ (id)predicateMatchingProcessTypeApplication;	// IMP=0x000000000000210c
+ (id)predicatePowerLogProcesses;	// IMP=0x000000000000b99b
+ (id)predicateForClearTheBoard;	// IMP=0x000000000000b9eb
+ (id)predicateMatchingAuid:(unsigned int)arg1;	// IMP=0x000000000001a0b9
+ (id)predicateMatchingEuid:(unsigned int)arg1;	// IMP=0x000000000001a04b
+ (id)predicateMatchingPlatform:(int)arg1;	// IMP=0x0000000000023a8f
+ (id)predicateMatchingExecPathStartsWith:(id)arg1;	// IMP=0x000000000002c7a5
+ (id)predicateMatchingBundleIdentifiers:(id)arg1;	// IMP=0x000000000002c717
+ (id)predicateMatchingBeforeTranslocationBundlePath:(id)arg1;	// IMP=0x000000000002c689
+ (id)predicateMatchingExtensionPoint:(id)arg1;	// IMP=0x000000000002c5fb
+ (id)predicateMatchingBundleIdentifier:(id)arg1;	// IMP=0x000000000002c56d
+ (id)predicateMatchingHandle:(id)arg1;	// IMP=0x0000000000031fd5
+ (id)predicateMatchingIdentifier:(id)arg1;	// IMP=0x0000000000031e81
+ (id)predicateMatchingLaunchServicesProcesses;	// IMP=0x0000000000032942
+ (id)predicateMatchingSuspendableProcesses;	// IMP=0x0000000000033614
+ (id)predicateMatchingTarget:(id)arg1;	// IMP=0x0000000000033d8b
+ (id)predicateMatchingIdentity:(id)arg1;	// IMP=0x0000000000033d0f
+ (id)predicateMatchingServiceName:(id)arg1;	// IMP=0x0000000000033c81
+ (id)predicateMatchingJobLabel:(id)arg1;	// IMP=0x0000000000033bf3
- (void).cxx_destruct;	// IMP=0x00000000000161ed
@property(readonly, nonatomic) RBSProcessPredicateImpl *predicate; // @synthesize predicate=_predicate;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000016168
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000016145
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016104
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016009
@property(readonly) unsigned long long hash;
- (id)processPredicate;	// IMP=0x0000000000015fea
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000015fd4
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000015ec2
- (unsigned int)auid;	// IMP=0x000000000001a1a4
@property(readonly, nonatomic) unsigned int euid;
@property(readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property(readonly, copy, nonatomic) NSString *extensionPoint;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)processIdentifier;	// IMP=0x0000000000032063
@property(readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property(readonly, copy, nonatomic) NSString *serviceName;
@property(readonly, copy, nonatomic) NSString *jobLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

