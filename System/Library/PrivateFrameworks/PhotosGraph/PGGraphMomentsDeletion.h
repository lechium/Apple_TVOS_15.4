//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PGGraphMomentsDeletion
{
    NSSet *_momentUUIDs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000448cd8
@property(readonly, nonatomic) NSSet *momentUUIDs; // @synthesize momentUUIDs=_momentUUIDs;
- (id)description;	// IMP=0x0000000000448c1d
- (unsigned long long)changeCount;	// IMP=0x0000000000448c00
- (unsigned long long)type;	// IMP=0x0000000000448bf5
- (id)initWithMomentUUIDs:(id)arg1;	// IMP=0x0000000000448b87

@end

