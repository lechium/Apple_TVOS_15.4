//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding>
{
    NSSet *_gainedInheritances;	// 8 = 0x8
    NSSet *_lostInheritances;	// 16 = 0x10
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000006188
- (void).cxx_destruct;	// IMP=0x0000000000006339
@property(readonly, copy, nonatomic) NSSet *lostInheritances; // @synthesize lostInheritances=_lostInheritances;
@property(readonly, copy, nonatomic) NSSet *gainedInheritances; // @synthesize gainedInheritances=_gainedInheritances;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000000621d
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000006190
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006012
- (id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2;	// IMP=0x0000000000005f59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

