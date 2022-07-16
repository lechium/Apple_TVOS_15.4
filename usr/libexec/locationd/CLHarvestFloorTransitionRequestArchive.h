//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface CLHarvestFloorTransitionRequestArchive
{
    unsigned int _unslammedAPCount;	// 8 = 0x8
    unsigned int _index;	// 12 = 0xc
    NSMutableSet *_macsNotInALSDatabase;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableSet *macsNotInALSDatabase; // @synthesize macsNotInALSDatabase=_macsNotInALSDatabase;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(nonatomic) unsigned int unslammedAPCount; // @synthesize unslammedAPCount=_unslammedAPCount;
- (id)debugDescription;	// IMP=0x001000000072fa59
- (id)description;	// IMP=0x001000000072f9f5
- (id)initWithArchive:(id)arg1 index:(unsigned int)arg2 score:(float)arg3 unslammedAPCount:(unsigned int)arg4 macsNotInALSDatabase:(id)arg5;	// IMP=0x001000000072f95b

@end

