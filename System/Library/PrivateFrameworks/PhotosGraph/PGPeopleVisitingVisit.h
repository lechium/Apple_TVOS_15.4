//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PGGraphAddressNode;

@interface PGPeopleVisitingVisit : NSObject
{
    NSMutableArray *_momentNodes;	// 8 = 0x8
    _Bool _hasVeryCloseMoments;	// 16 = 0x10
    PGGraphAddressNode *_addressNode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005926b9
@property(readonly) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly) PGGraphAddressNode *addressNode; // @synthesize addressNode=_addressNode;
- (id)description;	// IMP=0x000000000059243f
@property(readonly) _Bool matchesCloseVisitCriteria;
@property(readonly) _Bool matchesFarVisitCriteria;
@property(readonly) _Bool isValid;
- (void)addMomentNode:(id)arg1 isVeryClose:(_Bool)arg2;	// IMP=0x0000000000592275
- (id)initWithAddressNode:(id)arg1;	// IMP=0x00000000005921f0

@end

