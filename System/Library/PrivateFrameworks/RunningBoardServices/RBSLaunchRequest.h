//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString, RBSLaunchContext;

@interface RBSLaunchRequest <RBSXPCSecureCoding, NSCopying>
{
    RBSLaunchContext *_context;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x000000000003087e
- (void).cxx_destruct;	// IMP=0x0000000000030959
@property(readonly, nonatomic) RBSLaunchContext *context; // @synthesize context=_context;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000308b0
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000030886
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030873
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003073e
- (_Bool)execute:(out id *)arg1;	// IMP=0x00000000000306da
- (_Bool)execute:(out id *)arg1 error:(out id *)arg2;	// IMP=0x0000000000030669
- (_Bool)execute:(out id *)arg1 assertion:(out id *)arg2 error:(out id *)arg3;	// IMP=0x00000000000305f3
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000030579

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

