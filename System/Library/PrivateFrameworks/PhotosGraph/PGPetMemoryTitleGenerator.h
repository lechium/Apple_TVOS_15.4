//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PGPetMemoryTitleGenerator
{
    _Bool _useAdventureTitle;	// 8 = 0x8
    _Bool _usePetAndPersonTitle;	// 9 = 0x9
    NSString *_seasonName;	// 16 = 0x10
    unsigned long long _petSpecies;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005326c7
@property(nonatomic) _Bool usePetAndPersonTitle; // @synthesize usePetAndPersonTitle=_usePetAndPersonTitle;
@property(nonatomic) _Bool useAdventureTitle; // @synthesize useAdventureTitle=_useAdventureTitle;
@property(nonatomic) unsigned long long petSpecies; // @synthesize petSpecies=_petSpecies;
@property(retain, nonatomic) NSString *seasonName; // @synthesize seasonName=_seasonName;
- (id)_petTypeString;	// IMP=0x000000000053260a
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000000532279

@end
